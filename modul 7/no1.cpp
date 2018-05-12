#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <math.h>

void rumah(){
    glRotated(45,0,1,0);

    //depan
    glColor3f(0,1,0.8);
    glBegin(GL_POLYGON);
    glVertex3f(-2,-4,4); //A
    glVertex3f(2,-4,4); //B
    glVertex3f(2,1,4); //C
    glVertex3f(-2,1,4); //D
    glEnd();

    //atap
    glColor3f(1,0,0.9);
    glBegin(GL_POLYGON);
    glVertex3f(2,1,4); //C
    glVertex3f(-2,1,4); //D
    glVertex3f(0,4,3); //E
    glEnd();

    //pintu
    glColor3f(1,0,0);
    glBegin(GL_POLYGON);
    glVertex3f(-1,-4,4.1); //A
    glVertex3f(1,-4,4.1); //B
    glVertex3f(1,-1,4.1); //C
    glVertex3f(-1,-1,4.1); //D
    glEnd();


    //belakang
    glColor3f(0,1,0.8);
    glBegin(GL_POLYGON);
    glVertex3f(-2,-4,-4); //F
    glVertex3f(2,-4,-4); //G
    glVertex3f(2,1,-4); //H
    glVertex3f(-2,1,-4); //I
    glEnd();

    //atap
    glColor3f(1,0,0.8);
    glBegin(GL_POLYGON);
    glVertex3f(2,1,-4); //H
    glVertex3f(-2,1,-4); //I
    glVertex3f(0,4,-3); //J
    glEnd();

    //M
    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    glVertex3f(1.5,-2,-4.1);
    glVertex3f(1,-2,-4.1);
    glVertex3f(1,0,-4.1);
    glVertex3f(1.5,0,-4.1);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex3f(1,0,-4.1);
    glVertex3f(1,-1,-4.1);
    glVertex3f(0.5,-1.5,-4.1);
    glVertex3f(0.5,-0.5,-4.1);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex3f(0,0,-4.1);
    glVertex3f(0,-1,-4.1);
    glVertex3f(0.5,-1.5,-4.1);
    glVertex3f(0.5,-0.5,-4.1);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex3f(0,-2,-4.1);
    glVertex3f(-0.5,-2,-4.1);
    glVertex3f(-0.5,0,-4.1);
    glVertex3f(0,0,-4.1);
    glEnd();

    //I
    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    glVertex3f(-1.5,-2,-4.1);
    glVertex3f(-1,-2,-4.1);
    glVertex3f(-1,0,-4.1);
    glVertex3f(-1.5,0,-4.1);
    glEnd();

    //kanan
    glColor3f(0,1,1);
    glBegin(GL_POLYGON);
    glVertex3f(2,-4,4); //B
    glVertex3f(2,1,4); //C
    glVertex3f(2,1,-4); //H
    glVertex3f(2,-4,-4); //G
    glEnd();

    //atap
    glColor3f(1,0,1);
    glBegin(GL_POLYGON);
    glVertex3f(2,1,-4); //H
    glVertex3f(0,4,-3); //J
    glVertex3f(0,4,3); //E
    glVertex3f(2,1,4); //C
    glEnd();

    //jendela1
    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    glVertex3f(2.05,0,3.5);
    glVertex3f(2.05,0,1.5);
    glVertex3f(2.05,-2,1.5);
    glVertex3f(2.05,-2,3.5);
    glEnd();

    glColor3f(0,0,0);
    glBegin(GL_LINES);
    glVertex3f(2.1,0,3.5);
    glVertex3f(2.1,0,1.5);
    glVertex3f(2.1,-2,1.5);
    glVertex3f(2.1,-2,3.5);
    glVertex3f(2.1,0,1.5);
    glVertex3f(2.1,-2,1.5);
    glVertex3f(2.1,0,3.5);
    glVertex3f(2.1,-2,3.5);
    glVertex3f(2.1,0,2.5);
    glVertex3f(2.1,-2,2.5);
    glVertex3f(2.1,-1,3.5);
    glVertex3f(2.1,-1,1.5);
    glEnd();

    //jendela2
    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    glVertex3f(2.05,0,1);
    glVertex3f(2.05,0,-1);
    glVertex3f(2.05,-2,-1);
    glVertex3f(2.05,-2,1);
    glEnd();

    glColor3f(0,0,0);
    glBegin(GL_LINES);
    glVertex3f(2.1,0,1);
    glVertex3f(2.1,0,-1);
    glVertex3f(2.1,-2,1);
    glVertex3f(2.1,-2,-1);
    glVertex3f(2.1,0,1);
    glVertex3f(2.1,-2,1);
    glVertex3f(2.1,0,-1);
    glVertex3f(2.1,-2,-1);
    glVertex3f(2.1,0,0);
    glVertex3f(2.1,-2,0);
    glVertex3f(2.1,-1,1);
    glVertex3f(2.1,-1,-1);
    glEnd();

    //jendela3
    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    glVertex3f(2.05,0,-1.5);
    glVertex3f(2.05,0,-3.5);
    glVertex3f(2.05,-2,-3.5);
    glVertex3f(2.05,-2,-1.5);
    glEnd();

    glColor3f(0,0,0);
    glBegin(GL_LINES);
    glVertex3f(2.1,0,-1.5);
    glVertex3f(2.1,0,-3.5);
    glVertex3f(2.1,-2,-1.5);
    glVertex3f(2.1,-2,-3.5);
    glVertex3f(2.1,0,-1.5);
    glVertex3f(2.1,-2,-1.5);
    glVertex3f(2.1,0,-3.5);
    glVertex3f(2.1,-2,-3.5);
    glVertex3f(2.1,0,-2.5);
    glVertex3f(2.1,-2,-2.5);
    glVertex3f(2.1,-1,-1.5);
    glVertex3f(2.1,-1,-3.5);
    glEnd();

    //kiri
    glColor3f(0,1,1);
    glBegin(GL_POLYGON);
    glVertex3f(-2,-4,4); //A
    glVertex3f(-2,1,4); //D
    glVertex3f(-2,1,-4); //I
    glVertex3f(-2,-4,-4); //F
    glEnd();

    //atap
    glColor3f(1,0,1);
    glBegin(GL_POLYGON);
    glVertex3f(-2,1,-4); //I
    glVertex3f(0,4,-3); //J
    glVertex3f(0,4,3); //E
    glVertex3f(-2,1,4); //D
    glEnd();

    //0
    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    glVertex3f(-2.05,0,-3.5);
    glVertex3f(-2.05,0,-3);
    glVertex3f(-2.05,-2.5,-3);
    glVertex3f(-2.05,-2.5,-3.5);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex3f(-2.05,0,-1.5);
    glVertex3f(-2.05,0,-2);
    glVertex3f(-2.05,-2.5,-2);
    glVertex3f(-2.05,-2.5,-1.5);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex3f(-2.05,0,-3);
    glVertex3f(-2.05,0,-2);
    glVertex3f(-2.05,-0.5,-2);
    glVertex3f(-2.05,-0.5,-3);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex3f(-2.05,-2,-3);
    glVertex3f(-2.05,-2,-2);
    glVertex3f(-2.05,-2.5,-2);
    glVertex3f(-2.05,-2.5,-3);
    glEnd();

    //6
    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    glVertex3f(-2.05,0,-1);
    glVertex3f(-2.05,0,-0.5);
    glVertex3f(-2.05,-2.5,-0.5);
    glVertex3f(-2.05,-2.5,-1);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex3f(-2.05,-1,1);
    glVertex3f(-2.05,-1,0.5);
    glVertex3f(-2.05,-2.5,0.5);
    glVertex3f(-2.05,-2.5,1);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex3f(-2.05,0,1);
    glVertex3f(-2.05,0,-1);
    glVertex3f(-2.05,-0.5,-1);
    glVertex3f(-2.05,-0.5,1);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex3f(-2.05,-1,0.5);
    glVertex3f(-2.05,-1,-0.5);
    glVertex3f(-2.05,-1.5,-0.5);
    glVertex3f(-2.05,-1.5,0.5);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex3f(-2.05,-2,0.5);
    glVertex3f(-2.05,-2,-0.5);
    glVertex3f(-2.05,-2.5,-0.5);
    glVertex3f(-2.05,-2.5,0.5);
    glEnd();

    //3
    glBegin(GL_POLYGON);
    glVertex3f(-2.05,0,1.5);
    glVertex3f(-2.05,0,3.5);
    glVertex3f(-2.05,-0.5,3.5);
    glVertex3f(-2.05,-0.5,1.5);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex3f(-2.05,-1,1.5);
    glVertex3f(-2.05,-1.5,1.5);
    glVertex3f(-2.05,-1.5,3.5);
    glVertex3f(-2.05,-1,3.5);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex3f(-2.05,-2,1.5);
    glVertex3f(-2.05,-2.5,1.5);
    glVertex3f(-2.05,-2.5,3.5);
    glVertex3f(-2.05,-2,3.5);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex3f(-2.05,0,3.5);
    glVertex3f(-2.05,0,3);
    glVertex3f(-2.05,-2.5,3);
    glVertex3f(-2.05,-2.5,3.5);
    glEnd();
}
void display(void) {
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    rumah();
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
