#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <math.h>

void display(){
    glClear(GL_COLOR_BUFFER_BIT);
    glPointSize(10);//untuk titik
    glLineWidth(10);//untuk garis

    glBegin(GL_POINTS);
    glVertex2f (0.8, 0.4);
    glVertex2f (-0.8, 0.4);
    glEnd();

    glBegin(GL_LINES);
    glColor3f (0.0, 1.0, 1.0);
    glVertex2f (0.0, 0.0);
    glVertex2f (0.0, -0.8);
    glEnd();

    glBegin(GL_LINE_STRIP);
    glColor3f (1.0, 1.0, 0.0);
    glVertex2f (0.8, 0.0);
    glVertex2f (0.0, 0.8);
    glVertex2f (-0.8, 0.0);
    glEnd();


    glBegin(GL_LINE_LOOP);
    glColor3f (1.0, 0.0, 0.0);
    glVertex2f (1.0, 1.0);
    glVertex2f (1.0, -1.0);
    glVertex2f (-1.0, -1.0);
    glVertex2f (-1.0, 1.0);
    glEnd();

    glFlush();
}

void myinit(){
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-2.0,2.0,-2.0,2.0);//kiri,kanan,bawah,atas
    glMatrixMode(GL_MODELVIEW);
    glClearColor(0.0,0.0,0.0,0.0);//CMYK
    glColor3f (1.0, 1.0, 1.0);//RGB
}
int main(int argc, char* argv[]){
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500,500);
    //glutInitWindowPosition(100,100);
    glutCreateWindow("Obyek Primitif");
    glutDisplayFunc(display);
    myinit();
    glutMainLoop();
    return 0;
}
