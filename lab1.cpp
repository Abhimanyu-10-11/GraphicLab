#include <GL/glut.h>

// Function to initialize the OpenGL environment
void init() {
    glClearColor(0.0, 0.0, 0.0, 0.0); // Set background color to black
    glMatrixMode(GL_PROJECTION);       // Set up the projection matrix
    gluOrtho2D(0.0, 200.0, 0.0, 150.0); // Set up a 2D orthographic viewing region
}

// Function to display the shapes
void display() {
    glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer

    // Draw an filled triangle
    glBegin(GL_TRIANGLES);
    glVertex2i(10, 10);
    glVertex2i(10, 100);
    glVertex2i(100, 10);
    glEnd();

    // Draw an filled rectangle
    glBegin(GL_QUADS);
    glVertex2i(120, 10);
    glVertex2i(180, 10);
    glVertex2i(180, 70);
    glVertex2i(120, 70);
    glEnd();

    // Draw an unfilled polygon (line loop)
    glBegin(GL_LINE_LOOP);
    glVertex2i(60, 100);
    glVertex2i(80, 140);
    glVertex2i(100, 120);
    glVertex2i(120, 140);
    glVertex2i(140, 120);
    glEnd();

    glFlush(); // Flush the OpenGL buffers to the window
}

// Main function
int main(int argc, char** argv) {
    glutInit(&argc, argv); // Initialize GLUT
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); // Set display mode
    glutInitWindowSize(1920, 1080); // Set the window size
    glutInitWindowPosition(100, 100); // Set the window position
    glutCreateWindow("OpenGL Unfilled Shapes"); // Create the window with a title
    init(); // Call the init function
    glutDisplayFunc(display); // Set the display callback for the current window
    glutMainLoop(); // Enter the GLUT event processing loop
    return 0;
}
