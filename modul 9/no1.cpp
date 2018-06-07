#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <math.h>
GLboolean diff = true, spec = true, amb = true;
float theta = 0.0;

void blok(double n, double tx, double ty, double tz, double sx, double sy, double sz){
    glPushMatrix();
    glTranslated(tx,ty,tz);
    glScaled(sx,sy,sz);
    glutSolidCube(n);
    glPopMatrix();
}

void angka0(){
    glColor3f(1,1,1);
    //atas
    blok(1.5, -5.7,2.4,0, 1.2,0.8,1);
    //kanan
    blok(1.5, -3.9,0,0, 1,4,1);
    //bawah
    blok(1.5, -5.7,-2.4,0 ,1.2,0.8,1);
    //kiri
    blok(1.5, -7.5,0,0, 1,4,1);
}

void angka6(){
    glColor3f(1,1,1);
    //atas
    blok(1.5, 1.9,2.4,0 ,2.4,0.8,1);
    //tengah
    blok(1.5, 1,0,0 ,1.2,0.8,1);
    //bawah
    blok(1.5, 1,-2.4,0 ,1.2,0.8,1);
    //kanan
    blok(1.5, 2.8,-1.2,0 ,1,2.4,1);
    //kiri
    blok(1.5, -0.8,0,0 ,1,4,1);

}

void angka3(){
    glColor3f(1,1,1);
    //atas
    blok(1.5, 6.9,2.4,0 ,2.3,0.8,1);
    //kanan
    blok(1.5, 9.5,0,0 ,1,4,1);
    //tengah
    blok(1.5, 6.9,0,0 ,2.3,0.8,1);
    //bawah
    blok(1.5, 6.9,-2.4,0 ,2.3,0.8,1);
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT| GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();
    glRotated(35, 1,1,1);
    GLfloat mat_specular[] = { 0.7, 0.7, 0.7, 1.0 };
    GLfloat mat_shininess[] = { 10.0 };
    GLfloat mat_diffuse[] = { 0.7, 0.7, 0.7, 1.0 };
    glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
    glRotatef(theta, 0,1,0);
    angka3();
    angka6();
    angka0();
    glFlush();
}
void reshape (int w, int h)
{
    glViewport (0, 0, (GLsizei) w, (GLsizei) h);
    glMatrixMode (GL_PROJECTION);
    glLoadIdentity();
    if (w <= h)
        glOrtho(-7.5,7.5,-7.5*(GLfloat)h/(GLfloat)w,7.5*(GLfloat)h/(GLfloat)w, -10.0, 10.0);
    else
        glOrtho(-7.5*(GLfloat)w/(GLfloat)h, 7.5*(GLfloat)w/(GLfloat)h,-7.5, 7.5, -10.0, 10.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}
void myinit()
{
    glClearColor (0.0, 0.0, 0.0, 0.0);
    glColor3f(0.0, 0.0, 0.0);
    GLfloat light_position_diff[] = { -1.0, 1.0, 1.0, 0.0 };
    GLfloat diffuse_light[] = { 0.0, 0.0, 1.0, 1.0 };
    GLfloat light_position_spec[] = { 1.0, 1.0, 1.0, 0.0 };
    GLfloat specular_light[] = { 0.0, 1.0, 0.0, 1.0 };
    GLfloat ambient_light[] = { 0.9, 0.9, 0.9, 1.0 };
    glLightfv(GL_LIGHT0, GL_POSITION, light_position_diff);
    glLightfv(GL_LIGHT0, GL_DIFFUSE, diffuse_light);
    glLightfv(GL_LIGHT1, GL_POSITION, light_position_spec);
    glLightfv(GL_LIGHT1, GL_SPECULAR, specular_light);
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT,ambient_light);
    glEnable(GL_LIGHTING);
    glEnable(GL_DEPTH_TEST);
    glShadeModel (GL_SMOOTH);
    glEnable(GL_LIGHT0);
    glEnable(GL_LIGHT1);
}
void myIdle()
{
    theta +=0.03;
    display();
}
void mykey(unsigned char key, int mouseX, int mouseY)
{
    if (key=='1')
    {
        if (amb == true)
        {
            GLfloat ambient_light[] = { 0.3, 0.3, 0.3, 1.0 };
            glLightModelfv(GL_LIGHT_MODEL_AMBIENT,ambient_light);
            amb = false;
        }
        else
        {
            GLfloat ambient_light[] = { 0.9, 0.9, 0.9, 1.0 };
            glLightModelfv(GL_LIGHT_MODEL_AMBIENT,ambient_light);
            amb = true;
        }
    }
    if (key=='2')
    {
        if (diff == true)
        {
            glDisable(GL_LIGHT0);
            diff = false;
        }
        else
        {
            glEnable(GL_LIGHT0);
            diff = true;
        }
    }
    if (key=='3')
    {
        if (spec == true)
        {
            glDisable(GL_LIGHT1);
            spec = false;
        }
        else
        {
            glEnable(GL_LIGHT1);
            spec = true;
        }
    }
    display();
}
int main(int argc, char* argv[])
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(800,600);
    glutInitWindowPosition(100,100);
    glutCreateWindow("Kotak");
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutIdleFunc(myIdle);
    glutKeyboardFunc(mykey);
    myinit();
    glutMainLoop();
    return 0;
}
