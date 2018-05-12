#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <math.h>

void checkerboardrect(){
    for (int i = 0; i<20; i++){
        for (int j=0;j<20; j++){
            if((i+j)%2==0){
                glColor3f (0.0, 0.0, 1.0);//RGB
            }else{
                glColor3f (1.0, 1.0, 0.0);//RGB
            }
            glPushMatrix();
            glRotated(45,0,0,1);
            glTranslated(i,j,0);
            glRectf(0,0,1,1);
            glPopMatrix();

        }
    }
}

void display(){
    glClear(GL_COLOR_BUFFER_BIT);

    checkerboardrect();
    glFlush();
}

void myinit(){
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-4.95,4.95,4.95,9.2);//kiri,kanan,bawah,atas
    glMatrixMode(GL_MODELVIEW);
    glClearColor(1.0,0.0,0.0,0.0);//CMYK
    glColor3f (1.0, 1.0, 1.0);//RGB
}
int main(int argc, char* argv[]){
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500,500);
    //glutInitWindowPosition(100,100);
    glutCreateWindow("Checkerboard");
    glutDisplayFunc(display);
    myinit();
    glutMainLoop();
    return 0;
}
