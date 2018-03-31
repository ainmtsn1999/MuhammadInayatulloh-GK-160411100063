#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <math.h>

void checkerboardrect(int baris, int kolom){
    int x=0;
    int y=0;
    for (int i = 0; i<baris; i++){
        for (int j=0;j<kolom; j++){
            if((i+j)%2==0){
                glColor3f(1.0,1.0,1.0);
            }else{
                glColor3f(0.0,0.0,0.0);
            }
            glRectf(x,y,x+1,y-1);
            x = x+1;
        }

        x=0;
        y = y-1;
    }

}

void alphabetA(float x,float y){
    //huruf A
    glColor3f(1.0,0.0,0.0);
    glRectf(x,y,x+1,y+5);
    glRectf(x,y+4,x+4,y+5);
    glRectf(x,y+2,x+4,y+3);
    glRectf(x+3,y,x+4,y+5);

}

void alphabetI(float x,float y){
    //huruf i
    glColor3f(1.0,0.0,0.0);
    glRectf(x,y,x+1,y+3);
    glRectf(x,y+4,x+1,y+5);

}

void alphabetN(float x,float y){
    //huruf n
    glColor3f(1.0,0.0,0.0);
    glRectf(x,y,x+1,y+5);
    glRectf(x,y+4,x+4,y+5);
    glRectf(x+3,y,x+4,y+5);

}

void display(){
    glClear(GL_COLOR_BUFFER_BIT);

    checkerboardrect(11,13);
    alphabetA(1,-8);
    alphabetI(6,-8);
    alphabetN(8,-8);
    glFlush();
}

void myinit(){
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0,13.0,-11.0,0.0);//kiri,kanan,bawah,atas
    glMatrixMode(GL_MODELVIEW);
    glClearColor(1.0,0.0,0.0,0.0);//CMYK
    glColor3f (1.0, 1.0, 1.0);//RGB
}
int main(int argc, char* argv[]){
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500,500);
    //glutInitWindowPosition(100,100);
    glutCreateWindow("Alphabet rect");
    glutDisplayFunc(display);
    myinit();
    glutMainLoop();
    return 0;
}
