#include <windows.h>

#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

void display(){
	glClear(GL_COLOR_BUFFER_BIT);
	glLineWidth(4);

    //garis horizontal
	glBegin(GL_LINES);
	glVertex2f(-3.0,-3.0);
	glVertex2f(3.0,-3.0);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0,1.0,0.0);
	glVertex2f(-3.0,-1.0);
	glVertex2f(3.0,-1.0);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0,1.0,0.0);
	glVertex2f(-3.0,1.0);
	glVertex2f(3.0,1.0);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0,0.0,0.0);
	glVertex2f(-3.0,3.0);
	glVertex2f(3.0,3.0);
    glEnd();

    //garis vertikal
	glBegin(GL_LINES);
	glColor3f(0.0,1.0,1.0);
	glVertex2f(-3.0,-3.0);
	glVertex2f(-3.0,3.0);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0,0.0,1.0);
	glVertex2f(-1.0,-3.0);
	glVertex2f(-1.0,3.0);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0,1.0,1.0);
	glVertex2f(1.0,-3.0);
	glVertex2f(1.0,3.0);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.5,0.5,0.5);
	glVertex2f(3.0,-3.0);
	glVertex2f(3.0,3.0);
    glEnd();

	glFlush();
}

void myinit(){
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-4.0,4.0,-4.0,4.0);
	glMatrixMode(GL_MODELVIEW);
	glClearColor(0.0,0.0,0.0,0.0);
	glColor3f(0.0,0.0,1.0);
}

int main(int argc, char* argv[]){
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(500,500);
	//glutInitWindowPosition(100,100);
	glutCreateWindow("grid 3x3");
	glutDisplayFunc(display);
	myinit();
	glutMainLoop();

	return 0;
}
