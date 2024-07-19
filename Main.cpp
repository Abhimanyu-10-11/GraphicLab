//#include <Windows.h>
//#include <GL\glew.h>
//#include <GL\freeglut.h>
//#include <iostream>
//
//
//void DrawCircle(float cx, float cy, float r, int num_segments) {
//	glColor3f(1.0f, 1.0f, 0.0f);
//	glBegin(GL_POLYGON);
//	for (int i = 0; i < num_segments; ++i) {
//		float theta = 2.0f * 3.14 * float(i) / float(num_segments);
//		float x = r * cosf(theta);
//		float y = r * sinf(theta);
//		glVertex2f(x + cx, y + cy);
//	}
//	glEnd();
//}
//
//void display() {
//	
//	glClearColor(0, 1, 1, 0.0);
//	glClear(GL_COLOR_BUFFER_BIT);
//	glMatrixMode(GL_MODELVIEW);  
//	glLoadIdentity();
//	glLineWidth(2);
//
//
//	DrawCircle(0.5, 0.5, 0.2, 100);
//	
//
//
//
//
//
//	glColor3f(0.0, 0, 1.0f);
//	glBegin(GL_TRIANGLES);
//	glVertex3f(-1.0f, .0f, 0.0f);
//	glVertex3f(-.3f, .5f, 0.0f);
//	glVertex3f(.0f, 0.0f, 0.0f);
//	glEnd();
//	
//	glBegin(GL_TRIANGLES);
//	glVertex3f(-.2f, .0f, 0.0f);
//	glVertex3f(.3f, .5f, 0.0f);
//	glVertex3f(.5f, 0.0f, 0.0f);
//	glEnd();	
//
//	glBegin(GL_TRIANGLES);
//	glVertex3f(.3f, 0.0f, 0.0f);
//	glVertex3f(.6f, .5f, 0.0f);
//	glVertex3f(1.0f, 0.0f, 0.0f);
//	glEnd();
//
//	//Beach house
//	glColor3f(0.8f, 0.6f, 0.42f);
//	glBegin(GL_QUADS);
//	glVertex2f(-0.5f, -0.9f);
//	glVertex2f(0.1f, -0.9f);
//	glVertex2f(-0.1f, -0.1f);
//	glVertex2f(-0.3f, -0.1f);
//	glEnd();
//	
//	
//
//	////Roof
//	//glColor3f(0.0f, 0.5f, 0.0f);
//	//glBegin(GL_TRIANGLES);
//	//glVertex2f(-0.2, 0.8);//top
//	//glVertex2f(-0.6, 0.4);//left
//	//glVertex2f(0.2, 0.4);//right
//	//glEnd();
//
//	glFlush();
//}
//void keyboardInput(unsigned char key, int x, int y) {
//
//	if (key == 'e') {
//		
//		std::cout << "exit";
//		exit(1);
//	}
//	
//}
//
//
//
//
//int main(int argc, char* argv[]) {
//
//	// Initialize GLUT
//	glutInit(&argc, argv);
//
//	// Set the window size
//	glutInitWindowSize(800, 600);
//	// Create the window with the title "Hello,GL"
//	glutCreateWindow("Hello, GL");
//	// Bind the two functions (above) to respond when necessary
//	glutDisplayFunc(display);
//
//	glutKeyboardFunc(keyboardInput);
//	// To avoid window to be closed
//	glutMainLoop();
//	return 0;
//}