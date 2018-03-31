#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <math.h>

void alphabetA(float x,float y){
    //huruf A
    glColor3f(1.0,1.,1.0);

    glBegin(GL_QUAD_STRIP);
	glVertex2f(x,y);
	glVertex2f(x+1,y);
	glVertex2f(x+2,y+4);
	glVertex2f(x+3,y+4);
    glVertex2f(x+4,y);
	glVertex2f(x+5,y);
	glVertex2f(x+4,y+1);
	glVertex2f(x+3.5,y+1.7);
    glVertex2f(x+1.5,y+1);
	glVertex2f(x+1,y+1.7);
    glEnd();

}

void alphabetI(float x,float y){
    //huruf I

    glColor3f(1.0,1.0,1.0);
    glBegin(GL_POLYGON);
	glVertex2f(x,y);
	glVertex2f(x+1,y);
	glVertex2f(x+1,y+4);
	glVertex2f(x,y+4);


    glEnd();

}

void alphabetN(float x,float y){
    //huruf N

    glColor3f(1.0,1.0,1.0);
    glBegin(GL_QUAD_STRIP);
	glVertex2f(x,y);
	glVertex2f(x+1,y);
	glVertex2f(x,y+4);
	glVertex2f(x+1,y+4);
    glVertex2f(x+2,y);
	glVertex2f(x+3,y);
	glVertex2f(x+2,y+4);
	glVertex2f(x+3,y+4);


    glEnd();

}

void display(){
    glClear(GL_COLOR_BUFFER_BIT);

    alphabetA(1,-6);
    alphabetI(7,-6);
    alphabetN(9,-6);
    glFlush();
}

void myinit(){
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0,14.0,-10.0,0.0);//kiri,kanan,bawah,atas
    glMatrixMode(GL_MODELVIEW);
    glClearColor(1.0,0.0,0.0,0.0);//CMYK
    glColor3f (1.0, 1.0, 1.0);//RGB
}
int main(int argc, char* argv[]){
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500,500);
    //glutInitWindowPosition(100,100);
    glutCreateWindow("Alphabet");
    glutDisplayFunc(display);
    myinit();
    glutMainLoop();
    return 0;
}
