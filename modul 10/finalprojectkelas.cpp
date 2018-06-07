#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <math.h>

GLboolean diff = true, spec = true, amb = true;
float theta = 0.0, beta = 0.0, movesyp = 0.0, timesyp = 0.0;
int a=0;
float posA=0, posB=0;

char kata1[] = {"Klik tombol pada mouse untuk menggerakkan burung flappy bird naik"};

void cetak()    //cetak tulisan
{
    glColor3f(0.0,1.0,0.0);
    glRasterPos3d(-9,6.5,10);
    for(int r=0;kata1[r]!='\0';r++)
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,kata1[r]);
}

void burung(){
    //kepala
    glPushMatrix();
    glTranslatef(0,4,0);
    glColor3f(0.5,0.24,1.0);
    glScalef(0.8,0.8,0.8);
    glutSolidSphere(4.6,100,100);
    glPopMatrix();

    //mata
    glPushMatrix();
    glColor3f(-0.9,-0.9,-0.9);
    glScalef(0.6,0.6,0.6);
    glTranslatef(2.75,7,5.0);
    glutSolidSphere(1,100,10);
    glPopMatrix();

    glPushMatrix();
    glColor3f(-0.9,-0.9,-0.9);
    glScalef(0.6,0.6,0.6);
    glTranslatef(-2.75,7,5.0);
    glutSolidSphere(1,100,10);
    glPopMatrix();

    //mulut
    glPushMatrix();
    glColor3f(1.0,0.25,0);
    glRotatef(90,7,0,0);
    glTranslatef(0,3.5,-4);
    glScalef(1,1,0.5);
    glutSolidSphere(1,5,500);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1.0,0.25,0);
    glRotatef(90,7,0,0);
    glTranslatef(0,3.5,-3.5);
    glScalef(1,1,0.5);
    glutSolidSphere(0.7,5,500);
    glPopMatrix();

    //sayap
    glPushMatrix();
    glTranslatef(posA,posB,0);
    glTranslatef(3.6,2.6,-0.1);
    glRotatef(movesyp,0,0,1);
    glColor3f(0.5,0.24,1);
    glScalef(0.2,0.8,0.4);
    glutSolidSphere(3,100,100);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-posA,posB,0);
    glTranslatef(-3.6,2.6,-0.1);
    glRotatef(-movesyp,0,0,1);
    glColor3f(0.5,0.24,1);
    glScalef(0.2,0.8,0.4);
    glutSolidSphere(3,100,100);
    glPopMatrix();
}

void balok(){
    //glColor3f(r,g,b);
    glColor3f(0.7,0.7,0.6);
    glutSolidCube(2.5);
}

void balokk ()
{
    glPushMatrix();
    glColor3f(1.0,0.3,0.2);
    glTranslatef(-16.5,-10.0,0);
    glScaled(1.0,3.0,1.0);
    balok();

    glTranslatef(3.5,0.0,0);
    glScaled(1.0,1.5,1.0);
    balok();

    glTranslatef(3.5,0.0,0);
    glScaled(1.0,1.3,1.0);
    balok();

    glTranslatef(3.5,0.0,0);
    glScaled(1.0,0.75,1.0);
    balok();

    glTranslatef(3.5,0.0,0);
    glScaled(1.0,0.7,1.0);
    balok();

    glTranslatef(3.5,0.0,0);//
    glScaled(1.0,1.2,1.0);
    balok();

    glTranslatef(3.5,0.0,0);
    glScaled(1.0,0.65,1.0);
    balok();

    glTranslatef(3.5,0.0,0);
    glScaled(1.0,1.8,1.0);
    balok();

    glTranslatef(3.5,0.0,0);
    glScaled(1.0,1.25,1.0);
    balok();

    glTranslatef(3.5,0.0,0);
    glScaled(1.0,0.44,1.0);
    balok();

    glTranslatef(3.5,0.0,0);
    glScaled(1.0,1.4,1.0);
    balok();

    glTranslatef(3.5,0.0,0);
    glScaled(1.0,1.3,1.0);
    balok();

    glTranslatef(3.5,0.0,0);
    glScaled(1.0,0.9,1.0);
    balok();

    glTranslatef(3.5,0.0,0);
    glScaled(1.0,0.65,1.0);
    balok();

    glTranslatef(3.5,0.0,0);
    glScaled(1.0,1.8,1.0);
    balok();

    glTranslatef(3.5,0.0,0);
    glScaled(1.0,1.2,1.0);
    balok();

    glTranslatef(3.5,0.0,0);
    glScaled(1.0,0.5,1.0);
    balok();

    glTranslatef(3.5,0.0,0);
    glScaled(1.0,1.2,1.0);
    balok();

    glTranslatef(3.5,0.0,0);
    glScaled(1.0,1.5,1.0);
    balok();

    glTranslatef(3.5,0.0,0);
    glScaled(1.0,0.8,1.0);
    balok();

    glTranslatef(3.5,0.0,0);
    glScaled(1.0,0.8,1.0);
    balok();

    glTranslatef(3.5,0.0,0);
    glScaled(1.0,0.8,1.0);
    balok();

    glTranslatef(3.5,0.0,0);
    glScaled(1.0,1.8,1.0);
    balok();

    glTranslatef(3.5,0.0,0);
    glScaled(1.0,1.3,1.0);
    balok();

    glTranslatef(3.5,0.0,0);
    glScaled(1.0,0.8,1.0);
    balok();

    glTranslatef(3.5,0.0,0);
    glScaled(1.0,0.8,1.0);
    balok();

    glTranslatef(3.5,0.0,0);
    glScaled(1.0,1.1,1.0);
    balok();

    glTranslatef(3.5,0.0,0);
    glScaled(1.0,0.8,1.0);
    balok();


    glTranslatef(3.5,0.0,0);
    glScaled(1.0,1.8,1.0);
    balok();

    glTranslatef(3.5,0.0,0);
    glScaled(1.0,0.8,1.0);
    balok();

    glTranslatef(3.5,0.0,0);
    glScaled(1.0,1.1,1.0);
    balok();

    glTranslatef(3.5,0.0,0);
    glScaled(1.0,0.8,1.0);
    balok();

    glTranslatef(3.5,0.0,0);
    glScaled(1.0,0.7,1.0);
    balok();

    glTranslatef(3.5,0.0,0);
    glScaled(1.0,0.8,1.0);
    balok();

    glTranslatef(3.5,0.0,0);
    glScaled(1.0,1.8,1.0);
    balok();
    glPopMatrix();

}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT| GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();
    cetak();
    glRotated(a,0,1,0);
    glRotated(20,0.5,0.5,0);

    glPushMatrix();
    glTranslated(beta,0,0);

    glPushMatrix();
    glTranslated(0,0,0);
    balokk();
    glPopMatrix();

    glTranslated(85,0,0);
    glRotated(180,0,0,1);
    balokk();
    glPopMatrix();

    //glRotated(theta,0,1,0);
    glTranslated(0,theta,0);
    glPushMatrix();
    glRotated(20,0,0,0);
    glRotated(90,0,1,0);
    glTranslated(0,-2,0);
    glScaled(0.4,0.4,0.4);
    burung();
    glPopMatrix();
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

//    if (w <= h)
//        glOrtho(-13,50,-13*(GLfloat)h/(GLfloat)w,13*(GLfloat)h/(GLfloat)w, -50.0, 50.0);
//    else
//        glOrtho(-13*(GLfloat)w/(GLfloat)h, 50*(GLfloat)w/(GLfloat)h,-13, 13, -50.0, 50.0);
//    glMatrixMode(GL_MODELVIEW);
//    glLoadIdentity();
}
void myinit()
{
    glClearColor (0.0, 0.0, 0.0, 0.0);
    glColor3f(0.0, 0.0, 0.0);
    GLfloat ambient_light[] = { 0, 0.2, 0.2, 0.2 };
    glEnable(GL_LIGHTING);
    glEnable(GL_DEPTH_TEST);
    glShadeModel (GL_SMOOTH);
    glEnable(GL_LIGHT0);
    //glEnable(GL_LIGHT1);
    glColorMaterial(GL_RIGHT,GL_EMISSION);
    glEnable(GL_COLOR_MATERIAL);
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT,ambient_light);

}
void myIdle()
{

    theta -=0.02;

    if (timesyp>0){
        timesyp-=0.5;
        if (timesyp==0){
            movesyp=15;
            posA=0.8;
            posB=0;
        }
    }

    beta -=0.03;
    if (beta < -94.5){
        beta = beta + 94.5;
    }


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
    if (key=='a')
    {
        a+=5;
    }
    display();
}
void mouse(int button, int state, int x, int y)
{
    switch (button)
    {
    case GLUT_LEFT_BUTTON:
        if (state == GLUT_DOWN)
            theta+=0.7;
            movesyp=60;
            posA=2;
            posB=1;
            timesyp=3;
        break;
    case GLUT_MIDDLE_BUTTON:
        if (state == GLUT_DOWN)
            theta+=0.7;
            movesyp=60;
            posA=2;
            posB=1;
            timesyp=3;
        break;
    case GLUT_RIGHT_BUTTON:
        if (state == GLUT_DOWN)
            theta+=0.7;
            movesyp=60;
            posA=2;
            posB=1;
            timesyp=3;
        break;
    default:
        break;
    }
}
int main(int argc, char* argv[])
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(800,600);
    glutInitWindowPosition(100,100);
    glutCreateWindow("Flappy Bird");
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutIdleFunc(myIdle);
    glutKeyboardFunc(mykey);
    glutMouseFunc(mouse);
    myinit();
    glutMainLoop();
    return 0;
}
