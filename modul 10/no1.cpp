#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <math.h>
void create_polygon4(float x, float y, float z,
                    float x1, float y1, float z1,
                    float x2, float y2, float z2,
                    float x3, float y3, float z3,
                    float nx, float ny, float nz){
    glBegin(GL_POLYGON);
    glNormal3f(nx,ny,nz);
    glVertex3f(x,y,z);
    glVertex3f(x1,y1,z1);
    glVertex3f(x2,y2,z2);
    glVertex3f(x3,y3,z3);
    glEnd();
}
void jendela(){
    glColor3f(0,1,1);
    create_polygon4(0,-2.5,1,
                    -2,-2.5,1,
                    -2,-2.5,-1,
                    0,-2.5,-1,
                    0,1,0);
    glColor3f(0,0.7,0.7);
    create_polygon4(0,-2.5,1,
                    0,-2,1,
                    0,-2,-1,
                    0,-2.5,-1,
                    1,0,0);
    glPushMatrix();
    glTranslated(-2,0,0);
    create_polygon4(0,-2.5,1,
                    0,-2,1,
                    0,-2,-1,
                    0,-2.5,-1,
                    1,0,0);
    glPopMatrix();
    create_polygon4(0,-2.5,-1,
                    -2,-2.5,-1,
                    -2,-2,-1,
                    0,-2,-1,
                    0,0,1);
    glPushMatrix();
    glTranslated(0,0,2);
    create_polygon4(0,-2.5,-1,
                    -2,-2.5,-1,
                    -2,-2,-1,
                    0,-2,-1,
                    0,0,1);
    glPopMatrix();
}
void pintu(){
    glColor3f(1,1,1);
    create_polygon4(4,0.5,1,
                    2,0.5,1,
                    2,0.5,-2,
                    4,0.5,-2,
                    0,1,0);
    glColor3f(0.7,0.7,0.7);
    create_polygon4(4,0.5,1,
                    4,1,1,
                    4,1,-2,
                    4,0.5,-2,
                    1,0,0);
    glPushMatrix();
    glTranslated(-2,0,0);
    create_polygon4(4,0.5,1,
                    4,1,1,
                    4,1,-2,
                    4,0.5,-2,
                    1,0,0);
    glPopMatrix();
    create_polygon4(2,0.5,-2,
                    4,0.5,-2,
                    4,1,-2,
                    2,1,-2,
                    0,0,1);
    glPushMatrix();
    glTranslated(0,0,3);
     create_polygon4(2,0.5,-2,
                    4,0.5,-2,
                    4,1,-2,
                    2,1,-2,
                    0,0,1);
    glPopMatrix();
}
void atap(){
    glColor3f(0,0.3,0);
    create_polygon4(-5,-3,2,
                    1,-3,4,
                    1,6,4,
                    -5,6,2,
                    0,0,1);
    glPushMatrix();
    glRotated(180,0,0,1);
    glTranslated(-2,-3,0);
    create_polygon4(-5,-3,2,
                    1,-3,4,
                    1,6,4,
                    -5,6,2,
                    0,0,1);
    glPopMatrix();
    glColor3f(0,0.5,0);
    glPushMatrix();
    glTranslated(0,0,0.5);
    create_polygon4(-5,-3,2,
                    1,-3,4,
                    1,6,4,
                    -5,6,2,
                    0,0,1);
    glPopMatrix();
    glPushMatrix();
    glTranslated(0,0,0.5);
    glRotated(180,0,0,1);
    glTranslated(-2,-3,0);
    create_polygon4(-5,-3,2,
                    1,-3,4,
                    1,6,4,
                    -5,6,2,
                    0,0,1);
    glPopMatrix();
    glColor3f(0,0.3,0);
    create_polygon4(-5,-3,2,
                    1,-3,4,
                    1,-3,4.5,
                    -5,-3,2.5,
                    0,1,0);
    glPushMatrix();
    glRotated(180,0,0,1);
    glTranslated(-2,6,0);
    create_polygon4(-5,-3,2,
                    1,-3,4,
                    1,-3,4.5,
                    -5,-3,2.5,
                    0,1,0);
    glPopMatrix();
    glPushMatrix();
    glTranslated(0,9,0);
    create_polygon4(-5,-3,2,
                    1,-3,4,
                    1,-3,4.5,
                    -5,-3,2.5,
                    0,1,0);
    glPopMatrix();
    glPushMatrix();
    glRotated(180,0,0,1);
    glTranslated(-2,-3,0);
    create_polygon4(-5,-3,2,
                    1,-3,4,
                    1,-3,4.5,
                    -5,-3,2.5,
                    0,1,0);
    glPopMatrix();
    create_polygon4(-5,-3,2,
                    -5,6,2,
                    -5,6,2.5,
                    -5,-3,2.5,
                    1,0,0);
    glPushMatrix();
    glTranslated(12,0,0);
    create_polygon4(-5,-3,2,
                    -5,6,2,
                    -5,6,2.5,
                    -5,-3,2.5,
                    1,0,0);
    glPopMatrix();
    glColor3f(0,0.5,0);
    glBegin(GL_POLYGON);
    glNormal3f(0,1,0);
    glVertex3f(-5,-2,2);
    glVertex3f(1,-2,4);
    glVertex3f(7,-2,2);
    glEnd();
    glPushMatrix();
    glTranslated(0,7,0);
    glBegin(GL_POLYGON);
    glNormal3f(0,1,0);
    glVertex3f(-5,-2,2);
    glVertex3f(1,-2,4);
    glVertex3f(7,-2,2);
    glEnd();
    glPopMatrix();
    glColor3f(0.7,0.7,0.7);
    create_polygon4(-5,-2,2,
                    -5,5,2,
                    7,5,2,
                    7,-2,2,
                    0,0,1);
}
void badan_rumah(double z){
    glColor3f(0.8, 0.8, 0.8);
    glPushMatrix();
    glTranslated(0,0,z);
    glBegin(GL_POLYGON);
    glNormal3f(0,0,1);
    glVertex3f(-4,5,2);
    glVertex3f(6,5,2);
    glVertex3f(6,1,2);
    glVertex3f(1,1,2);
    glVertex3f(1,-2,2);
    glVertex3f(-4,-2,2);
    glEnd();
    glPopMatrix();
    create_polygon4(-4,5,2,
                    6,5,2,
                    6,5,-2,
                    -4,5,-2,
                    0,1,0);
    create_polygon4(6,5,2,
                    6,1,2,
                    6,1,-2,
                    6,5,-2,
                    1,0,0);
    create_polygon4(6,1,2,
                    1,1,2,
                    1,1,-2,
                    6,1,-2,
                    0,1,0);
    glColor3f(0.6,0.6,0.6);
    create_polygon4(1,1,2,
                    1,-2,2,
                    1,-2,-2,
                    1,1,-2,
                    1,0,0);
    glColor3f(0.8,0.8,0.8);
    create_polygon4(1,-2,2,
                    -4,-2,2,
                    -4,-2,-2,
                    1,-2,-2,
                    0,1,0);
    create_polygon4(-4,5,2,
                    -4,-2,2,
                    -4,-2,-2,
                    -4,5,-2,
                    1,0,0);
}
void display(void) {
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    GLfloat mat_specular[] = { 0.7, 0.7, 0.7, 1.0 };
    GLfloat mat_shininess[] = { 10.0 };
    GLfloat mat_diffuse[] = { 1, 0, 0, 1.0 };
    GLfloat mat_another[] = { 0.7, 0.7, 0.7, 1.0 };
    glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
    glPushMatrix();
    glRotated(-90,1,0,0);
    jendela();
    pintu();
    atap();
    badan_rumah(-4);
    badan_rumah(0);
    glPopMatrix();
    glFlush();
}
void kunci(unsigned char key, int x, int y)
{
    switch (key)
    {
        case 'x':
            glRotated(5,1,0,0);
        break;
        case 'y':
            glRotated(5,0,1,0);
        break;
        case 'z':
            glRotated(5,0,0,1);
        break;
    }
    glutPostRedisplay();
}
void init(void) {
    glClearColor (0.0, 0.0, 0.0, 0.0);
    GLfloat light_position_diff[] = { -1.0, 1.0, 1.0, 0.0 };
    GLfloat diffuse_light[] = { 1.0, 0.0, 0.0, 1.0 };
    GLfloat light_position_spec[] = { 1.0, 1.0, 1.0, 0.0 };
    GLfloat specular_light[] = { 0.0, 1.0, 0.0, 1.0 };
    //cahaya tambahan
    GLfloat another_light[] = { 1.0, 0.0, 0.0, 1.0 };
    GLfloat another_light_position[] = { -0.5, 0.5, 0.5, 0 };
    GLfloat another_light_one[] = { 0.0, 1.0, 1.0, 1.0 };
    GLfloat another_light_position_one[] = { -1.5, 1.5, 1.5, 0 };
    GLfloat ambient_light[] = { 0.9, 0.9, 0.9, 1.0 };
    glLightfv(GL_LIGHT0, GL_POSITION, light_position_diff);
    glLightfv(GL_LIGHT0, GL_DIFFUSE, diffuse_light);
    glLightfv(GL_LIGHT1, GL_POSITION, light_position_spec);
    glLightfv(GL_LIGHT1, GL_SPECULAR, specular_light);
    //cahaya tambahan
    glLightfv(GL_LIGHT2, GL_POSITION, another_light_position);
    glLightfv(GL_LIGHT2, GL_SPECULAR, another_light);
    glLightfv(GL_LIGHT3, GL_POSITION, another_light_position_one);
    glLightfv(GL_LIGHT3, GL_DIFFUSE, another_light_one);
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT,ambient_light);
    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);
    glEnable(GL_LIGHT1);
    //cahaya tambahan
    glEnable(GL_LIGHT2);
    glEnable(GL_LIGHT3);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-10.0, 12.0, -8.0, 10.0, -10.0, 10.0);
    glMatrixMode(GL_MODELVIEW);
    glShadeModel (GL_SMOOTH);
    glEnable(GL_DEPTH_TEST);
}
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(800, 800);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Kubus");
    init();
    glutKeyboardFunc(kunci);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
