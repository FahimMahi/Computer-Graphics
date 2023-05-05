#include <windows.h>
#include <GL/glut.h>


void initGL()
{
	glClearColor(0.6f, 0.8f, 1.0f, 1.0f);  //Spring Iris
}

void display() {
	glClear(GL_COLOR_BUFFER_BIT);   // Clear the color buffer with current clearing color
    glLineWidth(7.7);

    //Hair
    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Black
	glVertex2f(-0.29f, 0.90f);    // x, y
	glVertex2f(-0.09f, 0.90f);
	glVertex2f(-0.09f, 0.72f);
    glVertex2f(-0.29f, 0.72f);
	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Black
	glVertex2f(-0.09f, 0.80f);    // x, y
	glVertex2f(0.14f, 0.80f);
	glVertex2f(0.14f, 0.72f);
    glVertex2f(-0.09f, 0.72f);
	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Black
	glVertex2f(0.00f, 0.72f);    // x, y
	glVertex2f(0.14f, 0.72f);
	glVertex2f(0.14f, 0.67f);
    glVertex2f(0.00f, 0.67f);
	glEnd();

    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Black
    glVertex2f(0.00f, 0.67f);
	glVertex2f(0.05f, 0.67f);    // x, y
	glVertex2f(0.05f, 0.51f);
	glVertex2f(0.00f, 0.51f);
	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Black
    glVertex2f(0.08f, 0.67f);
	glVertex2f(0.14f, 0.67f);    // x, y
	glVertex2f(0.14f, 0.60f);
	glVertex2f(0.08f, 0.60f);
	glEnd();

    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Black
    glVertex2f(-0.29f, 0.67f);
	glVertex2f(-0.05f, 0.67f);    // x, y
	glVertex2f(-0.05f, 0.64f);
	glVertex2f(-0.29f, 0.64f);
	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Black
    glVertex2f(-0.29f, 0.64f);
	glVertex2f(-0.20f, 0.64f);    // x, y
	glVertex2f(-0.20f, 0.60f);
	glVertex2f(-0.29f, 0.60f);
	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Black
    glVertex2f(-0.16f, 0.64f);
	glVertex2f(-0.05f, 0.64f);    // x, y
	glVertex2f(-0.05f, 0.60f);
	glVertex2f(-0.16f, 0.60f);
	glEnd();


    //Chehara
    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 0.8f); // Black
    glVertex2f(-0.20f, 0.72f);
	glVertex2f(0.00f, 0.72f);    // x, y
	glVertex2f(0.00f, 0.67f);
	glVertex2f(-0.20f, 0.67f);
	glEnd();

	//Nose
    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 0.8f); // Black
    glVertex2f(-0.20f, 0.64f);
	glVertex2f(-0.14f, 0.64f);    // x, y
	glVertex2f(-0.14f, 0.60f);
	glVertex2f(-0.20f, 0.60f);
	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 0.8f); // Black
    glVertex2f(-0.05f, 0.67f);
	glVertex2f(0.00f, 0.67f);    // x, y
	glVertex2f(0.00f, 0.60f);
	glVertex2f(-0.05f, 0.60f);
	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 0.8f); // Black
    glVertex2f(-0.20f, 0.60f);
	glVertex2f(0.00f, 0.60f);    // x, y
	glVertex2f(0.00f, 0.45f);
	glVertex2f(-0.20f, 0.45f);
	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 0.8f); // Black
    glVertex2f(-0.20f, 0.60f);
	glVertex2f(0.00f, 0.60f);    // x, y
	glVertex2f(0.00f, 0.45f);
	glVertex2f(-0.20f, 0.45f);
	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 0.8f); // Black
    glVertex2f(0.00f, 0.51f);
	glVertex2f(0.11f, 0.51f);    // x, y
	glVertex2f(0.11f, 0.45f);
	glVertex2f(0.00f, 0.45f);
	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 0.8f); // Black
    glVertex2f(0.05f, 0.67f);
	glVertex2f(0.08f, 0.67f);    // x, y
	glVertex2f(0.08f, 0.60f);
	glVertex2f(0.05f, 0.60f);
	glEnd();

    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 0.8f); // Black
    glVertex2f(0.05f, 0.60f);
	glVertex2f(0.11f, 0.60f);    // x, y
	glVertex2f(0.11f, 0.51f);
	glVertex2f(0.05f, 0.51f);
	glEnd();


    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 0.8f); // Black
    glVertex2f(-0.09f, 0.45f);
	glVertex2f(0.11f, 0.45f);    // x, y
	glVertex2f(0.11f, 0.38f);
	glVertex2f(-0.09f, 0.38f);
	glEnd();



	//Collar
    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Black
    glVertex2f(0.11f, 0.51f);
	glVertex2f(0.14f, 0.51f);    // x, y
	glVertex2f(0.14f, 0.47f);
	glVertex2f(0.11f, 0.47f);
	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Black
    glVertex2f(0.11f, 0.47f);
	glVertex2f(0.17f, 0.47f);    // x, y
	glVertex2f(0.17f, 0.41f);
	glVertex2f(0.11f, 0.41f);
	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Black
    glVertex2f(-0.17f, 0.45f);
	glVertex2f(-0.09f, 0.45f);    // x, y
	glVertex2f(-0.09f, 0.41f);
	glVertex2f(-0.17f, 0.41f);
	glEnd();

    //Shirt
    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Black
    glVertex2f(-0.24f, 0.41f);
	glVertex2f(-0.09f, 0.41f);    // x, y
	glVertex2f(-0.09f, -0.09f);
	glVertex2f(-0.24f, -0.09f);
	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Black
    glVertex2f(-0.09f, 0.28f);
	glVertex2f(-0.05f, 0.28f);    // x, y
	glVertex2f(-0.05f, -0.09f);
	glVertex2f(-0.09f, -0.09f);
	glEnd();

    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Black
    glVertex2f(-0.05f, 0.21f);
	glVertex2f(-0.03f, 0.21f);    // x, y
	glVertex2f(-0.03f, -0.09f);
	glVertex2f(-0.05f, -0.09f);
	glEnd();


    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Black
    glVertex2f(0.03f, 0.21f);
	glVertex2f(0.05f, 0.21f);    // x, y
	glVertex2f(0.05f, -0.09f);
	glVertex2f(0.03f, -0.09f);
	glEnd();


    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Black
    glVertex2f(0.05f, 0.28f);
	glVertex2f(0.09f, 0.28f);    // x, y
	glVertex2f(0.09f, -0.09f);
	glVertex2f(0.05f, -0.09f);
	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Black
    glVertex2f(0.09f, 0.41f);
	glVertex2f(0.24f, 0.41f);    // x, y
	glVertex2f(0.24f, -0.09f);
	glVertex2f(0.09f, -0.09f);
	glEnd();

	//Shirt
	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // White
    glVertex2f(-0.09f, 0.38f);
	glVertex2f(0.09f, 0.38f);    // x, y
	glVertex2f(0.09f, 0.28f);
	glVertex2f(-0.09f, 0.28f);
	glEnd();

    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // White
    glVertex2f(-0.05f, 0.28f);
	glVertex2f(0.05f, 0.28f);    // x, y
	glVertex2f(0.05f, 0.21f);
	glVertex2f(-0.05f, 0.21f);
	glEnd();

    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // White
    glVertex2f(-0.03f, 0.21f);
	glVertex2f(0.03f, 0.21f);    // x, y
	glVertex2f(0.03f, 0.14f);
	glVertex2f(-0.03f, 0.14f);
	glEnd();

    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Black
    glVertex2f(-0.24f, -0.09f);
	glVertex2f(-0.17f, -0.09f);    // x, y
	glVertex2f(-0.17f, -0.13f);
	glVertex2f(-0.24f, -0.13f);
	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Black
    glVertex2f(0.17f, -0.09f);
	glVertex2f(0.24f, -0.09f);    // x, y
	glVertex2f(0.24f, -0.13f);
	glVertex2f(0.17f, -0.13f);
	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Black
    glVertex2f(-0.24f, -0.13f);
	glVertex2f(-0.17f, -0.13f);    // x, y
	glVertex2f(-0.17f, -0.20f);
	glVertex2f(-0.24f, -0.20f);
	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Black
    glVertex2f(0.17f, -0.13f);
	glVertex2f(0.24f, -0.13f);    // x, y
	glVertex2f(0.24f, -0.20f);
	glVertex2f(0.17f, -0.20f);
	glEnd();

    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.38f, 0.38f, 0.38f); // White
    glVertex2f(-0.17f, -0.09f);
	glVertex2f(0.17f, -0.09f);    // x, y
	glVertex2f(0.17f, -0.13f);
	glVertex2f(-0.17f, -0.13f);
	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.38f, 0.38f, 0.38f); // White
    glVertex2f(-0.03f, 0.14f);
	glVertex2f(0.03f, 0.14f);    // x, y
	glVertex2f(0.03f, -0.09f);
	glVertex2f(-0.03f, -0.09f);
	glEnd();

	//Hand
	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 0.8f); // White
    glVertex2f(-0.24f, -0.20f);
	glVertex2f(-0.11f, -0.20f);    // x, y
	glVertex2f(-0.11f, -0.25f);
	glVertex2f(-0.24f, -0.25f);
	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 0.8f); // White
    glVertex2f(0.24f, -0.20f);
	glVertex2f(0.11f, -0.20f);    // x, y
	glVertex2f(0.11f, -0.25f);
	glVertex2f(0.24f, -0.25f);
	glEnd();

    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 0.8f); // White
    glVertex2f(-0.24f, -0.25f);
	glVertex2f(-0.17f, -0.25f);    // x, y
	glVertex2f(-0.17f, -0.30f);
	glVertex2f(-0.24f, -0.30f);
	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 0.8f); // White
    glVertex2f(0.17f, -0.25f);
	glVertex2f(0.24f, -0.25f);    // x, y
	glVertex2f(0.24f, -0.30f);
	glVertex2f(0.17f, -0.30f);
	glEnd();

	//Pant
    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.16f, 0.47f, 0.71f); // blue
    glVertex2f(-0.17f, -0.13f);
	glVertex2f(0.17f, -0.13f);    // x, y
	glVertex2f(0.17f, -0.20f);
	glVertex2f(-0.17f, -0.20f);
	glEnd();


	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.16f, 0.47f, 0.71f); // blue
    glVertex2f(-0.14f, -0.20f);
	glVertex2f(0.14f, -0.20f);    // x, y
	glVertex2f(0.14f, -0.25f);
	glVertex2f(-0.14f, -0.25f);
	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.16f, 0.47f, 0.71f); // blue
    glVertex2f(-0.14f, -0.25f);
	glVertex2f(-0.05f, -0.25f);    // x, y
	glVertex2f(-0.05f, -0.65f);
	glVertex2f(-0.14f, -0.65f);
	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.16f, 0.47f, 0.71f); // blue
    glVertex2f(0.05f, -0.25f);
	glVertex2f(0.14f, -0.25f);    // x, y
	glVertex2f(0.14f, -0.65f);
	glVertex2f(0.05f, -0.65f);
	glEnd();

	//Socks
	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.12f, 0.56f, 1.0f); // dodger blue
    glVertex2f(0.05f, -0.65f);
	glVertex2f(0.14f, -0.65f);    // x, y
	glVertex2f(0.14f, -0.72f);
	glVertex2f(0.05f, -0.72f);
	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.12f, 0.56f, 1.0f); // dodger blue
    glVertex2f(-0.14f, -0.65f);
	glVertex2f(-0.05f, -0.65f);    // x, y
	glVertex2f(-0.05f, -0.72f);
	glVertex2f(-0.14f, -0.72f);
	glEnd();

    //Shoes
    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Black
    glVertex2f(-0.14f, -0.72f);
	glVertex2f(-0.05f, -0.72f);    // x, y
	glVertex2f(-0.05f, -0.79f);
	glVertex2f(-0.14f, -0.79f);
	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Black
    glVertex2f(0.05f, -0.72f);
	glVertex2f(0.14f, -0.72f);    // x, y
	glVertex2f(0.14f, -0.79f);
	glVertex2f(0.05f, -0.79f);
	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Black
    glVertex2f(-0.29f, -0.79f);
	glVertex2f(-0.05f, -0.79f);    // x, y
	glVertex2f(-0.05f, -0.89f);
	glVertex2f(-0.29f, -0.89f);
	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Black
    glVertex2f(0.05f, -0.79f);
	glVertex2f(0.29f, -0.79f);    // x, y
	glVertex2f(0.29f, -0.89f);
	glVertex2f(0.05f, -0.89f);
	glEnd();


	glFlush();  // Render now
}


int main(int argc, char** argv) {
	glutInit(&argc, argv);          // Initialize GLUT
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(500, 500); // Set the window's initial width & height
    glutInitWindowPosition(0, 0); // Set the window position
	glutCreateWindow("20-42970-1_Mid Lab Exam");  // Create window with the given title
	glutDisplayFunc(display);       // Register callback handler for window re-paint event
	initGL();                       // Our own OpenGL initialization
	glutMainLoop();                 // Enter the event-processing loop
	return 0;
}
