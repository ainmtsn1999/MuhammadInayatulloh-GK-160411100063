#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <math.h>

int total=0;
int angka_1=0;
int angka_2=0;
int angka_3=0;

void balok(){
    glColor3f(1,1,1);
    //depan
    glBegin(GL_POLYGON);
    glVertex3f(-0.5,1,1);
    glVertex3f(0,1,1);
    glVertex3f(0,0,1);
    glVertex3f(-0.5,0,1);
    glEnd();

    //belakang
    glBegin(GL_POLYGON);
    glVertex3f(-0.5,1,0);
    glVertex3f(0,1,0);
    glVertex3f(0,0,0);
    glVertex3f(-0.5,0,0);
    glEnd();

    glColor3f(0.8,0.8,0.8);
    //atas
    glBegin(GL_POLYGON);
    glVertex3f(-0.5,1,0);
    glVertex3f(0,1,0);
    glVertex3f(0,1,1);
    glVertex3f(-0.5,1,1);
    glEnd();

    //bawah
    glBegin(GL_POLYGON);
    glVertex3f(-0.5,0,0);
    glVertex3f(0,0,0);
    glVertex3f(0,0,1);
    glVertex3f(-0.5,0,1);
    glEnd();

    glColor3f(0.5,0.5,0.5);
    //kanan
    glBegin(GL_POLYGON);
    glVertex3f(-0.5,1,1);
    glVertex3f(-0.5,0,1);
    glVertex3f(-0.5,0,0);
    glVertex3f(-0.5,1,0);
    glEnd();

    //kiri
    glBegin(GL_POLYGON);
    glVertex3f(0,1,0);
    glVertex3f(0,0,0);
    glVertex3f(0,0,1);
    glVertex3f(0,1,1);
    glEnd();
}

void angka(int inp_angka){
    glRotated(20,1,0,1);
    if(inp_angka==0){
        balok();
        glPushMatrix();

        glTranslated(2,0,0);
        balok();
        glPopMatrix();

        glPushMatrix();
        glTranslated(0,-1.5,0);
        balok();
        glPushMatrix();

        glTranslated(2,0,0);
        balok();
        glPopMatrix();
        glPopMatrix();

        glPushMatrix();

        glScaled(1.5,1,1);

        glPushMatrix();
        glRotated(90,0,0,1);
        glTranslated(1.5,-1,0);
        balok();
        glPopMatrix();

        glPushMatrix();
        glTranslated(0,-3,0);
        glPushMatrix();
        glRotated(90,0,0,1);
        glTranslated(1.5,-1,0);
        balok();
        glPopMatrix();
        glPopMatrix();

        glPopMatrix();
    }else if(inp_angka==1){
        glPushMatrix();

        glTranslated(2,0,0);
        balok();
        glPopMatrix();

        glPushMatrix();
        glTranslated(2,-1.5,0);
        balok();
        glPopMatrix();
    }else if(inp_angka==2){
        glPushMatrix();
        glTranslated(2,0,0);
        balok();
        glPopMatrix();

        glPushMatrix();
        glTranslated(0,-1.5,0);
        balok();
        glPopMatrix();

        glPushMatrix();
        glScaled(1.5,1,1);

        glPushMatrix();
        glRotated(90,0,0,1);
        glTranslated(1.5,-1,0);
        balok();
        glPopMatrix();

        glPushMatrix();
        glTranslated(0,-1.5,0);
        glPushMatrix();
        glRotated(90,0,0,1);
        glTranslated(1.5,-1,0);
        balok();
        glPopMatrix();
        glPopMatrix();

        glPushMatrix();
        glTranslated(0,-3,0);
        glPushMatrix();
        glRotated(90,0,0,1);
        glTranslated(1.5,-1,0);
        balok();
        glPopMatrix();
        glPopMatrix();

        glPopMatrix();
    }else if(inp_angka==3){

        glPushMatrix();
        glTranslated(2,0,0);
        balok();
        glPopMatrix();

        glPushMatrix();
        glTranslated(2,-1.5,0);
        balok();
        glPopMatrix();

        glPushMatrix();
        glScaled(1.5,1,1);

        glPushMatrix();
        glRotated(90,0,0,1);
        glTranslated(1.5,-1,0);
        balok();
        glPopMatrix();

        glPushMatrix();
        glTranslated(0,-1.5,0);
        glPushMatrix();
        glRotated(90,0,0,1);
        glTranslated(1.5,-1,0);
        balok();
        glPopMatrix();
        glPopMatrix();

        glPushMatrix();
        glTranslated(0,-3,0);

        glPushMatrix();
        glRotated(90,0,0,1);
        glTranslated(1.5,-1,0);
        balok();
        glPopMatrix();
        glPopMatrix();

        glPopMatrix();

    }else if(inp_angka==4){
        balok();

        glPushMatrix();
        glTranslated(2,0,0);
        balok();
        glPopMatrix();


        glPushMatrix();
        glTranslated(2,-1.5,0);
        balok();
        glPopMatrix();

        glPushMatrix();
        glScaled(1.5,1,1);

        glPushMatrix();
        glTranslated(0,-1.5,0);
        glPushMatrix();
        glRotated(90,0,0,1);
        glTranslated(1.5,-1,0);
        balok();
        glPopMatrix();
        glPopMatrix();

        glPopMatrix();

    }else if(inp_angka==5){
        balok();

        glPushMatrix();
        glTranslated(2,-1.5,0);
        balok();
        glPopMatrix();

        glPushMatrix();
        glScaled(1.5,1,1);

        glPushMatrix();
        glRotated(90,0,0,1);
        glTranslated(1.5,-1,0);
        balok();
        glPopMatrix();

        glPushMatrix();
        glTranslated(0,-1.5,0);
        glPushMatrix();
        glRotated(90,0,0,1);
        glTranslated(1.5,-1,0);
        balok();
        glPopMatrix();
        glPopMatrix();

        glPushMatrix();
        glTranslated(0,-3,0);
        glPushMatrix();
        glRotated(90,0,0,1);
        glTranslated(1.5,-1,0);
        balok();
        glPopMatrix();
        glPopMatrix();

        glPopMatrix();
    }else if(inp_angka==6){
        balok();

        glPushMatrix();
        glTranslated(0,-1.5,0);
        balok();
        glPopMatrix();

        glPushMatrix();
        glTranslated(2,-1.5,0);
        balok();
        glPopMatrix();

        glPushMatrix();
        glScaled(1.5,1,1);

        glPushMatrix();
        glRotated(90,0,0,1);
        glTranslated(1.5,-1,0);
        balok();
        glPopMatrix();

        glPushMatrix();
        glTranslated(0,-1.5,0);
        glPushMatrix();
        glRotated(90,0,0,1);
        glTranslated(1.5,-1,0);
        balok();
        glPopMatrix();
        glPopMatrix();

        glPushMatrix();
        glTranslated(0,-3,0);
        glPushMatrix();
        glRotated(90,0,0,1);
        glTranslated(1.5,-1,0);
        balok();
        glPopMatrix();
        glPopMatrix();

        glPopMatrix();

    }else if(inp_angka==7){
        glPushMatrix();
        glTranslated(2,0,0);
        balok();
        glPopMatrix();

        glPushMatrix();
        glTranslated(2,-1.5,0);
        balok();
        glPopMatrix();

        glPushMatrix();
        glScaled(1.5,1,1);

        glPushMatrix();
        glRotated(90,0,0,1);
        glTranslated(1.5,-1,0);
        balok();
        glPopMatrix();

        glPopMatrix();
    }else if(inp_angka==8){
        balok();
        glPushMatrix();
        glTranslated(0,-1.5,0);
        balok();
        glPopMatrix();

        glPushMatrix();
        glTranslated(2,0,0);
        balok();
        glPopMatrix();

        glPushMatrix();
        glTranslated(2,-1.5,0);
        balok();
        glPopMatrix();

        glPushMatrix();
        glScaled(1.5,1,1);

        glPushMatrix();
        glRotated(90,0,0,1);
        glTranslated(1.5,-1,0);
        balok();
        glPopMatrix();

        glPushMatrix();
        glTranslated(0,-1.5,0);
        glPushMatrix();
        glRotated(90,0,0,1);
        glTranslated(1.5,-1,0);
        balok();
        glPopMatrix();
        glPopMatrix();

        glPushMatrix();
        glTranslated(0,-3,0);
        glPushMatrix();
        glRotated(90,0,0,1);
        glTranslated(1.5,-1,0);
        balok();
        glPopMatrix();
        glPopMatrix();

        glPopMatrix();

    }else if(inp_angka==9){
        balok();

        glPushMatrix();
        glTranslated(2,0,0);
        balok();
        glPopMatrix();

        glPushMatrix();
        glTranslated(2,-1.5,0);
        balok();
        glPopMatrix();

        glPushMatrix();
        glScaled(1.5,1,1);

        glPushMatrix();
        glRotated(90,0,0,1);
        glTranslated(1.5,-1,0);
        balok();
        glPopMatrix();

        glPushMatrix();
        glTranslated(0,-1.5,0);
        glPushMatrix();
        glRotated(90,0,0,1);
        glTranslated(1.5,-1,0);
        balok();
        glPopMatrix();
        glPopMatrix();

        glPushMatrix();
        glTranslated(0,-3,0);
        glPushMatrix();
        glRotated(90,0,0,1);
        glTranslated(1.5,-1,0);
        balok();
        glPopMatrix();
        glPopMatrix();

        glPopMatrix();
    }
}
void display(void) {
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);

    glPushMatrix();
    glTranslated(-4,0,0);
    angka(angka_1);
    glPopMatrix();

    glPushMatrix();
    glTranslated(-1,0,0);
    angka(angka_2);
    glPopMatrix();

    glPushMatrix();
    glTranslated(2,0,0);
    angka(angka_3);
    glPopMatrix();
    glFlush();
}

void kunci(unsigned char key, int x,int y){
    if (key=='a'|| key=='A'){
        if(total==999){
            total=0;
        }else{
            total+=1;
        }
    }
    if (key=='d'|| key=='D'){
        if(total==0){
            total=999;
        }else{
            total-=1;
        }
    }

angka_3=total%10;//satuan
angka_2=((total%100)-(total%10))/10;//puluhan
angka_1=(total-(total%100))/100;//ratusan
display();
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
    glutKeyboardFunc(kunci);
    glutMainLoop();
    return 0;
}
