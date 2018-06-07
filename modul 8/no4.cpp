#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <math.h>

static GLfloat spin = 0.0;
static GLfloat spin_x = 0.0;
static GLfloat spin_y = 0.0;
static GLfloat spin_z = 0.0;
static GLfloat scale_x = 1.0;
static GLfloat scale_y = 1.0;
static GLfloat scale_z = 1.0;
static GLfloat speed = 0.01;


void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glPushMatrix();
    glRotatef(spin, spin_x, spin_y, spin_z);
    glScaled(scale_x, scale_y, scale_z);
    glColor3f(1.0, 1.0, 1.0);
    glRectf(-25.0, -25.0, 25.0, 25.0);
    glPopMatrix();
    glutSwapBuffers();
}
void spinDisplay(void)
{
    spin = spin + speed;
    if (spin > 360.0)
        spin = spin - 360.0;
    glutPostRedisplay();
}
void init(void)
{
    glClearColor (0.0, 0.0, 0.0, 0.0);
    glShadeModel (GL_FLAT);
}
void reshape(int w, int h)
{
    glViewport (0, 0, (GLsizei) w, (GLsizei) h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-50.0, 50.0, -50.0, 50.0, -1.0, 1.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}
void kunci(unsigned char key, int x, int y) {
    if (key == 'p'){
        glutIdleFunc(NULL);
    }
    if (key == 'P'){
        glutIdleFunc(spinDisplay);
}
    if (key == 'u'){
        scale_x = 0.75;
        scale_y = 0.75;
        scale_z = 0.75;
    }
    if (key == 'U'){
        scale_x = 1.5;
        scale_y = 1.5;
        scale_z = 1.5;
    }
    if (key == 'v'){
        speed = speed/5;
    }
    if (key == 'V'){
        speed = speed*2;
    }
    glutPostRedisplay();
}
void mouse(int button, int state, int x, int y) {
    switch (button)
    {
    case GLUT_LEFT_BUTTON:
        if (state == GLUT_DOWN)
            glutIdleFunc(spinDisplay);
        spin_x = 0;
        spin_y = 0;
        spin_z = 1;
        break;
    case GLUT_MIDDLE_BUTTON:
        if (state == GLUT_DOWN)
            glutIdleFunc(spinDisplay);
        spin_x = 0;
        spin_y = 1;
        spin_z = 0;
        break;
    case GLUT_RIGHT_BUTTON:
        if (state == GLUT_DOWN)
            glutIdleFunc(spinDisplay);
        spin_x = 1;
        spin_y = 0;
        spin_z = 0;
        break;
    default:
        break;
    }
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize (400, 400);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("Animation");
    init();
    glutKeyboardFunc(kunci);
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutMouseFunc(mouse);
    glutMainLoop();
    return 0;
}
