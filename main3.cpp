//
//  Main3.cpp
//

#include <string>
#include "ObjLibrary/Vector2.h"
#include "GetGlut.h"
#include "Sleep.h"
#include "Square.h"

using namespace std;
using namespace ObjLibrary;

// prototypes
void initDisplay();
void keyboard(unsigned char key, int x, int y);
//void update();
void reshape(int w, int h);
//void draw();

// declare global variables here
Square square;

int main (int argc, char** argv)
{
	glutInitWindowSize(640, 480);
	glutInitWindowPosition(0, 0);

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH | GLUT_RGB);
	glutCreateWindow("Particles");
	glutKeyboardFunc(keyboard);
	//glutIdleFunc(update);
	glutReshapeFunc(reshape);
	//glutDisplayFunc(draw);

	initDisplay();

	glutMainLoop();

	return 1;
}

void initDisplay()
{
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);

	glutPostRedisplay();
}

void keyboard(unsigned char key, int x, int y)
{
	switch (key)
	{
	case 27: // on [ESC]
		exit(0); // normal exit
		break;
	}
}



void reshape(int w, int h)
{
	glViewport (0, 0, w, h);

	int x_center = w / 2;
	int y_center = h / 2;

	// set up a 2D view
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-x_center, w - x_center, -y_center, h - y_center);

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	glutPostRedisplay();
}



