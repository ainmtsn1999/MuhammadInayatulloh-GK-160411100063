#include <windows.h>

#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

void alphabetA(float x,float y){
    //huruf A
    x += 0.2;
    y += 0.2;
    glLineWidth(3);
    glColor3f(1.0,1.,1.0);

    glBegin(GL_LINES);
	glVertex2f(x,y);
	glVertex2f(x+0.4,y+1.6);
    glEnd();

    glBegin(GL_LINES);
	glVertex2f(x+1.6,y);
	glVertex2f(x+1.2,y+1.6);
    glEnd();

    glBegin(GL_LINES);
	glVertex2f(x+0.4,y+1.6);
	glVertex2f(x+1.2,y+1.6);
    glEnd();

    glBegin(GL_LINES);
	glVertex2f(x,y);
	glVertex2f(x+0.4,y);
    glEnd();

    glBegin(GL_LINES);
	glVertex2f(x+1.6,y);
	glVertex2f(x+1.2,y);
    glEnd();

    glBegin(GL_LINES);
	glVertex2f(x+0.4,y);
	glVertex2f(x+0.56,y+0.6);
    glEnd();

    glBegin(GL_LINES);
	glVertex2f(x+1.2,y);
	glVertex2f(x+1.04,y+0.6);
    glEnd();

    glBegin(GL_LINES);
	glVertex2f(x+0.57,y+0.6);
	glVertex2f(x+1.03,y+0.6);
    glEnd();

    glBegin(GL_LINES);
	glVertex2f(x+0.6,y+0.9);
	glVertex2f(x+1.0,y+0.9);
    glEnd();

    glBegin(GL_LINES);
	glVertex2f(x+0.6,y+0.9);
	glVertex2f(x+0.68,y+1.3);
    glEnd();

    glBegin(GL_LINES);
	glVertex2f(x+1.0,y+0.9);
	glVertex2f(x+0.92,y+1.3);
    glEnd();

    glBegin(GL_LINES);
	glVertex2f(x+0.68,y+1.3);
	glVertex2f(x+0.92,y+1.3);
    glEnd();

}

void alphabetW(float x,float y){
    //huruf
    x += 0.2;
    y -= 0.2;
    glColor3f(0.5,0.5,0.5);

    glBegin(GL_LINES);
	glVertex2f(x,y);
	glVertex2f(x+0.4,y-1.6);
    glEnd();

    glBegin(GL_LINES);
	glVertex2f(x+0.4,y-1.6);
	glVertex2f(x+0.8,y-0.8);
    glEnd();

    glBegin(GL_LINES);
	glVertex2f(x+0.8,y-0.8);
	glVertex2f(x+1.2,y-1.6);
    glEnd();

    glBegin(GL_LINES);
	glVertex2f(x+1.6,y);
	glVertex2f(x+1.2,y-1.6);
    glEnd();

    glBegin(GL_LINES);
	glVertex2f(x+1.6,y);
	glVertex2f(x+1.2,y);
    glEnd();

    glBegin(GL_LINES);
	glVertex2f(x,y);
	glVertex2f(x+0.4,y);
    glEnd();

    glBegin(GL_LINES);
	glVertex2f(x+1.2,y);
	glVertex2f(x+1.0,y-0.6);
    glEnd();

    glBegin(GL_LINES);
	glVertex2f(x+0.4,y);
	glVertex2f(x+0.6,y-0.6);
    glEnd();

    glBegin(GL_LINES);
	glVertex2f(x+0.6,y-0.6);
	glVertex2f(x+0.8,y-0.3);
    glEnd();

    glBegin(GL_LINES);
	glVertex2f(x+1.0,y-0.6);
	glVertex2f(x+0.8,y-0.3);
    glEnd();

}

void board(){
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
}

void display(){
	glClear(GL_COLOR_BUFFER_BIT);
	glLineWidth(2);

    //papan
    board();

    //huruf A
    alphabetA(-1.0,-1.0);

    //huruf W
    alphabetW(-3.0,-1.0);
    alphabetW(1.0,3.0);

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
	glutCreateWindow("alphabet");
	glutDisplayFunc(display);
	myinit();
	glutMainLoop();

	return 0;
}


