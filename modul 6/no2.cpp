#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <math.h>

void baloksilang(){
    glRotated(250,0,1,0);
    //depan
    glColor3f(0,0,1);
    glBegin(GL_POLYGON);
    glVertex3f(-2,-3,1); //A
    glVertex3f(-3,-2,1); //B
    glVertex3f(2,3,1); //C
    glVertex3f(3,2,1); //D
    glEnd();

    glColor3f(0,0,1);
    glBegin(GL_POLYGON);
    glVertex3f(3,-2,1); //E
    glVertex3f(2,-3,1); //F
    glVertex3f(-3,2,1); //G
    glVertex3f(-2,3,1); //H
    glEnd();

    //belakang
    glColor3f(0,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(-2,-3,-1); //I
    glVertex3f(-3,-2,-1); //J
    glVertex3f(2,3,-1); //K
    glVertex3f(3,2,-1); //L
    glEnd();

    glColor3f(0,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(3,-2,-1); //M
    glVertex3f(2,-3,-1); //N
    glVertex3f(-3,2,-1); //O
    glVertex3f(-2,3,-1); //P
    glEnd();

    //Bawah
    glColor3f(1,0,0);
    glBegin(GL_POLYGON);
    glVertex3f(-2,-3,1); //A
    glVertex3f(-3,-2,1); //B
    glVertex3f(-3,-2,-1); //J
    glVertex3f(-2,-3,-1); //I
    glEnd();

    glColor3f(0,1,1);
    glBegin(GL_POLYGON);
    glVertex3f(3,-2,1); //E
    glVertex3f(2,-3,1); //F
    glVertex3f(2,-3,-1); //N
    glVertex3f(3,-2,-1); //M
    glEnd();

    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(-2,-3,1); //A
    glVertex3f(-2,-3,-1); //I
    glVertex3f(3,2,-1); //L
    glVertex3f(3,2,1); //D
    glEnd();

    glColor3f(1,0,1);
    glBegin(GL_POLYGON);
    glVertex3f(2,-3,1); //F
    glVertex3f(2,-3,-1); //N
    glVertex3f(-3,2,-1); //O
    glVertex3f(-3,2,1); //G
    glEnd();

    //Atas
    glColor3f(0,1,1);
    glBegin(GL_POLYGON);
    glVertex3f(2,3,1); //C
    glVertex3f(3,2,1); //D
    glVertex3f(3,2,-1); //L
    glVertex3f(2,3,-1); //K
    glEnd();

    glColor3f(1,0,0);
    glBegin(GL_POLYGON);
    glVertex3f(-3,2,1); //G
    glVertex3f(-2,3,1); //H
    glVertex3f(-2,3,-1); //P
    glVertex3f(-3,2,-1); //O
    glEnd();

    glColor3f(1,0,1);
    glBegin(GL_POLYGON);
    glVertex3f(3,-2,1); //E
    glVertex3f(3,-2,-1); //M
    glVertex3f(-2,3,-1); //P
    glVertex3f(-2,3,1); //H
    glEnd();

    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex3f(-3,-2,1); //B
    glVertex3f(-3,-2,-1); //J
    glVertex3f(2,3,-1); //K
    glVertex3f(2,3,1); //C
    glEnd();
}
void display(void) {
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    //no1();
    baloksilang();
    //no3();
    glFlush();
}
void init(void) {
    glClearColor (0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-5.0, 5.0, -5.0, 5.0, -5.0, 5.0);
    glMatrixMode(GL_MODELVIEW);
    glShadeModel (GL_FLAT);
    glEnable(GL_DEPTH_TEST);
}
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(800, 800);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Balok");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
