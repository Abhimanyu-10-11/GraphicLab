//#include <GL/glut.h>
//
//float angle = 0.0;
//
//void display() {
//    glClear(GL_COLOR_BUFFER_BIT);
//
//    glPushMatrix(); // Save the current state of transformations
//
//    glRotatef(angle, 0.0, 0.0, 1.0); // Rotate about the z-axis
//
//    // Draw a red square
//    glBegin(GL_QUADS);
//    glColor3f(1.0, 0.0, 0.0);
//    glVertex2f(-0.5, -0.5);
//    glVertex2f(0.5, -0.5);
//    glVertex2f(0.5, 0.5);
//    glVertex2f(-0.5, 0.5);
//    glEnd();
//
//    glPopMatrix(); // Undo the move to rotate the square
//
//    glutSwapBuffers();
//}
//
//void keyboard(unsigned char key, int x, int y) {
//    switch (key) {
//    case '+':
//        angle += 5.0;
//        break;
//    case '-':
//        angle -= 5.0;
//        break;
//    }
//    glutPostRedisplay();
//}
//
//int main(int argc, char** argv) {
//    glutInit(&argc, argv);
//    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
//    glutInitWindowSize(500, 500);
//    glutCreateWindow("Rotating Square");
//    glutDisplayFunc(display);
//    glutKeyboardFunc(keyboard);
//    glutMainLoop();
//    return 0;
//}
