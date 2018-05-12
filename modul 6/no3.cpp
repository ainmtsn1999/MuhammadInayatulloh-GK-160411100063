#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <math.h>

void objek7(){
    glRotated(25,1,0,1);

    glColor3f(1,1,1);
    glBegin(GL_LINES);
    glVertex3f(4,0,0); //A
    glVertex3f(-4,0,0); //B
    glVertex3f(0,4,0); //C
    glVertex3f(0,-4,0); //D
    glVertex3f(0,0,4); //E
    glVertex3f(0,0,-4); //F
    glEnd();

    glColor3f(0,0,1);
    glutWireCube(1);

    glColor3f(1,1,0);
    glPushMatrix();
    glTranslated(4,0,0);
    glRotated(90,0,1,0);
    glutWireCone(0.8,1.2,15,10);
    glPopMatrix();

    glColor3f(1,0,1);
    glPushMatrix();
    glTranslated(-4,0,0);
    glRotated(90,0,1,0);
    glutWireTetrahedron();
    glPopMatrix();

    glColor3f(0,1,1);
    glPushMatrix();
    glTranslated(0,-4,0);
    glRotated(90,0,1,0);
    glutWireOctahedron();
    glPopMatrix();

    glPushMatrix();
    glTranslated(0,4,0);
    glRotated(90,0,1,0);
    //depan
    glColor3f(0.0,0.0,1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.5, -0.5, 0.5);
    glVertex3f(0.5, -0.5, 0.5);
    glVertex3f(0.5, 0.5, 0.5);
    glVertex3f(-0.5, 0.5, 0.5);
    glEnd();
    //belakang
    glColor3f(0.0,1.0,0.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.5, -0.5, -0.5);
    glVertex3f(-0.5, -0.5, -0.5);
    glVertex3f(-0.5, 0.5, -0.5);
    glVertex3f(0.5, 0.5, -0.5);
    glEnd();
    //kiri
    glColor3f(1.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.5, -0.5, -0.5);
    glVertex3f(-0.5, -0.5, 0.5);
    glVertex3f(-0.5, 0.5, 0.5);
    glVertex3f(-0.5, 0.5, -0.5);
    glEnd();
    //kanan
    glColor3f(0.0,1.0,1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.5, -0.5, -0.5);
    glVertex3f(0.5, 0.5, -0.5);
    glVertex3f(0.5, 0.5, 0.5);
    glVertex3f(0.5, -0.5, 0.5);
    glEnd();
    //bawah
    glColor3f(1.0,0.0,1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.5, -0.5, 0.5);
    glVertex3f(-0.5, -0.5, 0.5);
    glVertex3f(-0.5, -0.5, -0.5);
    glVertex3f(0.5, -0.5, -0.5);
    glEnd();
    //atas
    glColor3f(1.0,1.0,0.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.5, 0.5, 0.5);
    glVertex3f(0.5, 0.5, 0.5);
    glVertex3f(0.5, 0.5, -0.5);
    glVertex3f(-0.5, 0.5, -0.5);
    glEnd();
    glPopMatrix();

    glColor3f(0,1,0);
    glPushMatrix();
    glTranslated(0,0,4);
    glRotated(270,0,1,0);
    glutWireTeapot(1);
    glPopMatrix();

    glColor3f(1,0,0);
    glPushMatrix();
    glTranslated(0,0,-4);
    glutWireSphere(1,50,50);
    glPopMatrix();
}
void display(void) {
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    objek7();
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
    glutCreateWindow("Kubus");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
