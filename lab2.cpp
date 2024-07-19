//#include <GL/glut.h>
//#include <math.h>
//
//#define PI 3.14159265358979323846
//
//// Function to initialize the OpenGL environment
//void init() {
//    glClearColor(0.0, 0.0, 0.0, 0.0); // Set background color to black
//    glMatrixMode(GL_PROJECTION);       // Set up the projection matrix
//    gluOrtho2D(-320, 320, -240, 240); // Set up a 2D orthographic viewing region
//}
//
//// Function to draw a hexagon
//void drawHexagon(int radius) {
//    glBegin(GL_LINE_LOOP);
//    for (int i = 0; i < 6; ++i) {
//        glVertex2f(radius * cos(i * PI / 3), radius * sin(i * PI / 3));
//    }
//    glEnd();
//}
//
//// Function to display the shapes
//void display() {
//    glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer
//    drawHexagon(100);             // Draw a hexagon with radius 100
//    glFlush();                    // Flush the OpenGL buffers to the window
//}
//
//// Function to handle window resizes
//void reshape(int w, int h) {
//    glViewport(0, 0, (GLsizei)w, (GLsizei)h); // Set the viewport to cover the new window
//    glMatrixMode(GL_PROJECTION);               // Set up the projection matrix
//    glLoadIdentity();                          // Load the identity matrix
//    if (w <= h)
//        gluOrtho2D(-320, 320, -240 * (GLfloat)h / (GLfloat)w, 240 * (GLfloat)h / (GLfloat)w);
//    else
//        gluOrtho2D(-320 * (GLfloat)w / (GLfloat)h, 320 * (GLfloat)w / (GLfloat)h, -240, 240);
//    glMatrixMode(GL_MODELVIEW);                // Set up the modelview matrix
//    glLoadIdentity();                          // Load the identity matrix
//}
//
//// Main function
//int main(int argc, char** argv) {
//    glutInit(&argc, argv);                     // Initialize GLUT
//    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); // Set display mode
//    glutInitWindowSize(640, 480);             // Set the window size
//    glutInitWindowPosition(100, 100);         // Set the window position
//    glutCreateWindow("OpenGL Hexagon Reshape"); // Create the window with a title
//    init();                                   // Call the init function
//    glutDisplayFunc(display);                 // Set the display callback for the current window
//    glutReshapeFunc(reshape);                 // Set the reshape callback for the current window
//    glutMainLoop();                           // Enter the GLUT event processing loop
//    return 0;
//}
