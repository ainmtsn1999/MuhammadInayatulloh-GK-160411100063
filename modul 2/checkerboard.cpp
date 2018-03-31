#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <math.h>
void checkerboard(int baris, int kolom){
    glBegin(GL_QUADS);
    int x=0;
    int y=0;
    for (int i = 0; i<baris; i++){
        for (int j=0;j<kolom; j++){
            if((i+j)%2==0){
                glColor3f (1.0, 1.0, 1.0);//RGB
            }else{
                glColor3f (0.0, 0.0, 0.0);//RGB
            }

            glVertex2f (x, y);
            glVertex2f (x, y-1);
            glVertex2f (x+1, y-1);
            glVertex2f (x+1, y);
            x = x+1;
        }

        x=0;
        y = y-1;
    }
    glEnd();

}
void display(){
    glClear(GL_COLOR_BUFFER_BIT);
    checkerboard(10,10);
    glFlush();
}

void myinit(){
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0,10.0,-10.0,0.0);//kiri,kanan,bawah,atas
    glMatrixMode(GL_MODELVIEW);
    glClearColor(1.0,0.0,0.0,0.0);//CMYK
    glColor3f (1.0, 1.0, 1.0);//RGB
}
int main(int argc, char* argv[]){
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500,500);
    //glutInitWindowPosition(100,100);
    glutCreateWindow("Checker board");
    glutDisplayFunc(display);
    myinit();
    glutMainLoop();
    return 0;
}
