#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <math.h>

void triangles(float x, float y,
               float x1, float y1,
               float x2, float y2) {
    glBegin(GL_TRIANGLES);
    glVertex2f(x,y);
    glVertex2f(x1,y1);
    glVertex2f(x2,y2);
    glEnd();
}
void bintang() {
    triangles(-1,0,1,0,0,3);
    glPushMatrix();
    glRotated(60,0,0,1);
    triangles(-1,0,1,0,0,3);
    glPopMatrix();
    glPushMatrix();
    glRotated(-60,0,0,1);
    triangles(-1,0,1,0,0,3);
    glPopMatrix();
    glPushMatrix();
    glRotated(140,0,0,1);
    triangles(-1,0,1,0,0,3);
    glPopMatrix();
    glPushMatrix();
    glRotated(-140,0,0,1);
    triangles(-1,0,1,0,0,3);
    glPopMatrix();
}

void display(void) {
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    bintang();
    glFlush();
}
void init(void) {
    glClearColor (0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-10.0, 10.0, -10.0, 10.0, -10.0, 10.0);
    glMatrixMode(GL_MODELVIEW);
    glShadeModel (GL_FLAT);
    glEnable(GL_DEPTH_TEST);
}
void kunci(int key, int x, int y) {
    switch (key)
    {
    case GLUT_KEY_DOWN:
        glColor3f(0,0,0);
        break;
    case GLUT_KEY_UP:
        glColor3f(1,1,1);
        break;
    }
    glutPostRedisplay();
}
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(800, 800);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Star");
    init();
    glutSpecialFunc(kunci);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
