//#include<GL/glut.h>
//#include<math.h>
//#include<stdlib.h>
//const double TWO_PI = 6.2831853;
//GLsizei winwidth = 400, winheight = 400;
//GLint reghex;
//class screenpt {
//public:GLint x, y;
//};
//static void init(void)
//{
//	screenpt hexvertex, circtr;
//	GLdouble theta;
//	GLint k;
//	circtr.x = winwidth / 2;
//	circtr.y = winheight / 2;
//	glClearColor(1.0, 0.0, 1.0, 0.0);
//	reghex = glGenLists(1);
//	glNewList(reghex, GL_COMPILE);
//	glColor3f(1.0, 1.0, 0.0);
//	glBegin(GL_POLYGON);
//	for (k = 0; k < 6; k++)
//	{
//		theta = TWO_PI * k / 6;
//		hexvertex.x = circtr.x + 120 * cos(theta);
//		hexvertex.y = circtr.y + 120 * sin(theta);
//		glVertex2i(hexvertex.x, hexvertex.y);
//	}
//	/*glVertex2i(110,110);
//	glVertex2i(180,110);
//	glVertex2i(180,160);
//	glVertex2i(110,160);*/
//	glEnd();
//	glEndList();
//}
//void reghexagon(void)
//{
//	glClear(GL_COLOR_BUFFER_BIT);
//	glCallList(reghex);
//	glFlush();
//}
//void winReshapeFcn(int newwidth, int newheight)
//{
//	glViewport(0, 0, (GLsizei)newwidth, (GLsizei)newheight);
//	glMatrixMode(GL_PROJECTION);
//	glLoadIdentity();
//	gluOrtho2D(0.0, (GLdouble)newwidth, 0.0, (GLdouble)newheight);
//	glClear(GL_COLOR_BUFFER_BIT);
//	glCallList(reghex);
//	glFlush();
//}
//void main(int argc, char** argv)
//{
//	glutInit(&argc, argv);
//	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
//	glutInitWindowPosition(100, 100);
//	glutInitWindowSize(winwidth, winheight);
//	glutCreateWindow("reshape_function and display_list example");
//	init();
//	glutDisplayFunc(reghexagon);
//	glutReshapeFunc(winReshapeFcn);
//	glutMainLoop();
//}