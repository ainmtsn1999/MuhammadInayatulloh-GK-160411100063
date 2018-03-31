#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <math.h>

void quad_strip(float x,float y){

    glColor3f(1.0,1.,1.0);

    glBegin(GL_QUAD_STRIP);
	glVertex2f(x,y);
	glVertex2f(x+1,y);
	glVertex2f(x,y+3);
	glVertex2f(x+1,y+3);
	glVertex2f(x+2,y+3);
	glVertex2f(x+2,y);
    glEnd();

}

void poly(float x,float y){


    glColor3f(1.0,1.0,1.0);
    glBegin(GL_POLYGON);
	glVertex2f(x,y);
	glVertex2f(x+1,y);
	glVertex2f(x,y+3);
	glVertex2f(x+1,y+3);
    glVertex2f(x+2,y+3);
	glVertex2f(x+2,y);
    glEnd();

}


void display(){
    glClear(GL_COLOR_BUFFER_BIT);
    quad_strip(1,-4);
    poly(1,-9);
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
    glutCreateWindow("Alphabet");
    glutDisplayFunc(display);
    myinit();
    glutMainLoop();
    return 0;
}
