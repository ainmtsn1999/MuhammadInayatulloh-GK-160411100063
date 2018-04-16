#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <stdlib.h>
#include <math.h>


putik(){
// Gambar putik
glColor3f(1.0,0.5,1.0);
glBegin(GL_POLYGON);
for(float t=0.0; t<=6.28; t+=0.01)
{
glVertex2f(cos(t),sin(t));
}
glEnd();
}

void kelopak(){
// Gambar kelopak
glTranslated(0,4.2,0);
glBegin(GL_POLYGON);
    glColor3f(1.0,0.5,1.0);
    glVertex2f(0,-3.2);
    for(float t=0.14; t<=2.7; t+=0.01)
    {
        if ( t <=2 ){
                glColor3f(1.0,0.5,1.0);
            } else{
                glColor3f(1.0,0.7,1.0);
            }
        glVertex2f(2*sin(t),-3*cos(t));
    }
    glColor3f(1.0,0.7,1.0);
    glVertex2f(0,1.5);
    for(float t=0.44; t<=3.0; t+=0.01)
    {
        if ( t <=1.34 ){
                glColor3f(1.0,0.7,1.0);
            } else {
                glColor3f(1.0,0.5,1.0);
            }
        glVertex2f(-2*sin(t),3*cos(t));
    }
glEnd();
}

void display()
{
glClear(GL_COLOR_BUFFER_BIT);
//Gambar sumbu koordinat

glBegin(GL_LINES);
glVertex3f(-10.0,0.0,0.0);
glVertex3f(10.0,0.0,0.0);
glVertex3f(0.0,-10.0,0.0);
glVertex3f(0.0,10.0,0.0);
glEnd();

putik();
int x=7;
for(float i=0;i<x;i++){
    glRotated((360/x)*i,0,0,1);
    kelopak();
    glLoadIdentity();
}

glFlush();
}
void myinit()
{
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(-10.0, 10.0, -10.0, 10.0);
glMatrixMode(GL_MODELVIEW);
glClearColor(1.0,1.0,1.0,1.0);
glColor3f(0.0,0.0,0.0);
}
int main(int argc, char* argv[])
{
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize(400,400);
glutInitWindowPosition(100,100);
glutCreateWindow("Transform");
glutDisplayFunc(display);
myinit();
glutMainLoop();
return 0;
}
