#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <math.h>

void myinit()
{
glClearColor(0.0, 0.0, 0.0, 1.0);
glColor3f(1.0, 0.0, 0.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(-10.0, 10.0, -10.0, 10.0);
glMatrixMode(GL_MODELVIEW);
}
void display(void)
{
/* bersihkan layar */
glClear (GL_COLOR_BUFFER_BIT);
glColor3f (1.0, 1.0, 0.0);
float t = 0.0;
//f(x) = 1/14 (t-3)(t-3)(t-1)(t)(t+2)(t+3)
glBegin(GL_POLYGON);
for(t = -10.0; t<=10.0; t+=0.1){
glVertex3f (t, (t-3)*(t-3)*(t-1)*(t)*(t+2)*(t+3)/14, 0.0);
}
glEnd();
glBegin(GL_LINES);
glVertex3f(-10.0,0.0,0.0);
glVertex3f(10.0,0.0,0.0);
glVertex3f(0.0,-10.0,0.0);
glVertex3f(0.0,10.0,0.0);
glEnd();
glFlush ();
}
void kunci(unsigned char key, int x, int y)
{
switch (key)
{
/* aplikasi berhenti ketika tombol q ditekan */
case 27 :
case 'q':
exit(0);
break;
}
glutPostRedisplay();
}
int main(int argc, char *argv[])
{
glutInitWindowSize(400,400);
glutInitWindowPosition(100,100);
glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
glutCreateWindow("Primitif");
glutDisplayFunc(display);
glutKeyboardFunc(kunci);
myinit();
glutMainLoop();
return 0;
}
