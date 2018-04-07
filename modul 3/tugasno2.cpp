#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <math.h>

void display(void)
{
/* bersihkan layar */
glClear (GL_COLOR_BUFFER_BIT);

glColor3f (1.0, 1.0, 1.0);
glBegin(GL_LINES);
    glVertex2f(-10,0);
    glVertex2f(10,0);
    glVertex2f(0,-10);
    glVertex2f(0,10);
glEnd();

glColor3f (1.0, 1.0, 0.0);
float t = 0.0;
glBegin(GL_POINTS);
for(t = -10.0; t<=10.0; t+=0.01){
/* x(t) = -1 + 2t; y(t) = 0 */
int a = 1, b=0,c=-2;
glVertex3f((a*t*t)+(b*t)+c,t,0.0);
//glVertex3f (t, -0.5+t*t, 0.0);
}
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
gluOrtho2D(-10.0,10.0,-10.0,10.0);
glutMainLoop();
return 0;
}
