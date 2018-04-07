#include <windows.h>

#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#include <math.h>
#endif

void setan(float x, float y, float R, float G, float B){
    float t = 0.0;
    glColor3f (R, G, B);
    glBegin(GL_POLYGON);
    for(t=0.0; t<=3.14; t+=0.01)
    {
        glVertex2f(x+cos(t),y+1.75*sin(t));
    }
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f((x-1.35)+0.428*0.9,y+0.5);
    for(t=0.8; t<=5.48; t+=0.01)
    {
    glVertex2f((x-1.35)+0.428*t,y-1+0.15*2*cos(3*t));
    }
    glVertex2f((x-1.35)+0.428*5.43,y+0.5);
    glEnd();

    glColor3f (1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    for(t=0.0; t<=6.28; t+=0.01)
    {
        glVertex2f((x-0.4)+0.4*cos(t),(y+0.5)+0.6*sin(t));
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(t=0.0; t<=6.28; t+=0.01)
    {
        glVertex2f((x+0.5)+0.4*cos(t),(y+0.5)+0.6*sin(t));
    }
    glEnd();

    glColor3f (0.0, 0.0, 1.0);
    glBegin(GL_POLYGON);
    for(t=0.0; t<=6.28; t+=0.01)
    {
        glVertex2f((x-0.3)+0.2*cos(t),(y+0.5)+0.3*sin(t));
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(t=0.0; t<=6.28; t+=0.01)
    {
        glVertex2f((x+0.6)+0.2*cos(t),(y+0.5)+0.3*sin(t));
    }
    glEnd();
}

void pacman(float x, float y){
    //kepala
    float t = 0.0;
    glBegin(GL_POLYGON);
    glColor3f (1.0, 1.0, 0.0);
    for(t =0; t<=6.28; t+=0.01){
        glVertex3f (x+cos(t),y+sin(t),0.0);
    }
    glEnd();
    glColor3f (0.0, 0.0, 0.0);
    glBegin(GL_TRIANGLES);
    glVertex2f(x,y);
    glVertex2f(x+1.0,y+0.815);
    glVertex2f(x+1.0,-(y+0.815));

    glEnd();
}

void bulet(float x, float y){
    float t = 0.0;
    glColor3f (1.0, 0.5, 0.0);
    glBegin(GL_POLYGON);
    for(t =0; t<=6.28; t+=0.01){
        glVertex3f (x+0.3*cos(t),y+0.3*sin(t),0.0);
    }
    glEnd();
}

void display(){
	glClear(GL_COLOR_BUFFER_BIT);
	setan(-4,4,0,1,0);
	setan(-4,0,1,0,0);
	setan(-8,0,0,0,1);
	setan(0,-4,0,1,1);
	pacman(0,0);
	bulet(2,0);
	bulet(3,0);
	glFlush();
}

void myinit(){
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-10.0,10.0,-10.0,10.0);
	glMatrixMode(GL_MODELVIEW);
	glClearColor(0.0,0.0,0.0,0.0);
	glColor3f(1.0,0.0,0.0);
}

int main(int argc, char* argv[]){
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(400,400);
	glutInitWindowPosition(100,100);
	glutCreateWindow("Grafik 2");
	glutDisplayFunc(display);
	myinit();
	glutMainLoop();

	return 0;
}
