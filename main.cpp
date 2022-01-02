#include<bits/stdc++.h>
#include<GL/glu.h>
#include<GL/glut.h>
#include <windows.h>

GLfloat q = 0.0f;
GLfloat position = 0.0f;
GLfloat speed = 0.009f;

int r = 0;

void init() {
    glClearColor(0.0f,0.0f,0.0f,1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glLineWidth(2);
}

void update(int value) {
    if(position > 1.0)
        position = -1.0f;

    position += speed;

    glutPostRedisplay();

    glutTimerFunc(100, update, 0);
}

// It draws the sky
void sky() {
    glBegin(GL_QUADS);
    glColor3ub(98, 154, 214);

    glVertex2f(-1.0f, -1.0f);
    glVertex2f(1.0f, -1.0f);
    glVertex2f(1.0f, 1.0f);
    glVertex2f(-1.0f, 1.0f);

    glEnd();
}

void cloud() {
    int i;

	GLfloat x=.5f; GLfloat y=.8f; GLfloat radius =.05f;
	int triangleAmount = 20;
	GLfloat twicePi = 2.0f * 3.1416;

	glBegin(GL_TRIANGLE_FAN);
    glColor3ub(230, 255, 255);

    for(i = 0; i <= triangleAmount;i++) {
        glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),
			       y + (radius * sin(i * twicePi / triangleAmount)));
    }

	glEnd();

	GLfloat a=.55f; GLfloat b=.78f;

	glBegin(GL_TRIANGLE_FAN);
    glColor3ub(230, 255, 255);

    for(i = 0; i <= triangleAmount;i++) {
        glVertex2f(a + (radius * cos(i *  twicePi / triangleAmount)),
                   b + (radius * sin(i * twicePi / triangleAmount)));
    }

	glEnd();

	GLfloat c=.45f; GLfloat d=.78f;

	glBegin(GL_TRIANGLE_FAN);
    glColor3ub(230, 255, 255);

    for(i = 0; i <= triangleAmount;i++) {
        glVertex2f(c + (radius * cos(i *  twicePi / triangleAmount)),
                   d + (radius * sin(i * twicePi / triangleAmount)));
    }
	glEnd();

	GLfloat e=.52f; GLfloat f=.75f;

	glBegin(GL_TRIANGLE_FAN);
    glColor3ub(230, 255, 255);

    for(i = 0; i <= triangleAmount;i++) {
        glVertex2f(e + (radius * cos(i *  twicePi / triangleAmount)),
                   f + (radius * sin(i * twicePi / triangleAmount)));
    }

	glEnd();

	GLfloat g=.6f; GLfloat h=.77f;

	glBegin(GL_TRIANGLE_FAN);
    glColor3ub(230, 255, 255);

    for(i = 0; i <= triangleAmount;i++) {
        glVertex2f(g + (radius * cos(i *  twicePi / triangleAmount)),
                   h + (radius * sin(i * twicePi / triangleAmount)));
    }
	glEnd();
}

void bird() {
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);

    glVertex2f(0.2f, 0.8f);
    glVertex2f(0.18f, 0.77f);

    glVertex2f(0.18f, 0.77f);
    glVertex2f(0.15f, 0.79f);

    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);

    glVertex2f(-0.1f, 0.8f);
    glVertex2f(-0.13f, 0.77f);

    glVertex2f(-0.13f, 0.77f);
    glVertex2f(-0.15f, 0.8f);
    glEnd();
}

void memorial() {
    glBegin(GL_TRIANGLES);
    glColor3ub(166, 166, 166);

    glVertex2f(-0.01f, 0.7f);
    glVertex2f(0.01f, 0.7f);
    glVertex2f(0.0f, 0.75f);

    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(204, 204, 204);

    glVertex2f(-0.2f, -0.1f);
    glVertex2f(0.2f, -0.1f);
    glVertex2f(0.0f, 0.7f);

    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(150, 40, 27);

    glVertex2f(-0.2f, -0.1f);
    glVertex2f(0.2f, -0.1f);
    glVertex2f(0.0f, 0.0f);

    glEnd();

	glBegin(GL_QUADS);
	glColor3ub(128, 128, 128);

	glVertex2f(0.0f, 0.0f);
	glVertex2d(0.125f, 0.2f);
	glVertex2f(0.0f, 0.4f);
	glVertex2f(-0.125f, 0.2f);

	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(166, 166, 166);

	glVertex2f(-0.115f, 0.215f);
	glVertex2f(-0.125f, 0.2f);
	glVertex2f(-0.115f, 0.185f);
	glVertex2f(0.115f, 0.185f);
	glVertex2f(0.125f, 0.2f);
	glVertex2f(0.115f, 0.215f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(230, 230, 230);

	glVertex2f(0.2f, -0.1f);
	glVertex2f(0.21f, -0.1f);
	glVertex2f(0.01f, 0.7f);
	glVertex2f(0.00f, 0.7f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(230, 230, 230);

	glVertex2f(-0.2f, -0.1f);
	glVertex2f(-0.21f, -0.1f);
	glVertex2f(-0.01f, 0.7f);
	glVertex2f(-0.00f, 0.7f);

	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(204, 204, 204);

	glVertex2f(0.21f, -0.1f);
	glVertex2f(0.3f, -0.1f);
	glVertex2f(0.06f, 0.5f);

	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(204, 204, 204);

	glVertex2f(-0.21f, -0.1f);
	glVertex2f(-0.3f, -0.1f);
	glVertex2f(-0.06f, 0.5f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(230, 230, 230);

	glVertex2f(0.3f, -0.1f);
	glVertex2f(0.31f, -0.1f);
	glVertex2f(0.055f, 0.52f);
	glVertex2f(0.054f, 0.5f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(230, 230, 230);

	glVertex2f(-0.3f, -0.1f);
	glVertex2f(-0.31f, -0.1f);
	glVertex2f(-0.055f, 0.52f);
	glVertex2f(-0.054f, 0.5f);

	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(204, 204, 204);

	glVertex2f(0.31f, -0.1f);
	glVertex2f(0.4f, -0.1f);
	glVertex2f(0.1f, 0.4f);

	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(204, 204, 204);

	glVertex2f(-0.31f, -0.1f);
	glVertex2f(-0.4f, -0.1f);
	glVertex2f(-0.1f, 0.4f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(230, 230, 230);

	glVertex2f(0.4f, -0.1f);
	glVertex2f(0.41f, -0.1f);
	glVertex2f(0.095f, 0.42f);
	glVertex2f(0.1f, 0.4f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(230, 230, 230);

	glVertex2f(-0.4f, -0.1f);
	glVertex2f(-0.41f, -0.1f);
	glVertex2f(-0.095f, 0.42f);
	glVertex2f(-0.1f, 0.4f);

	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(204, 204, 204);

	glVertex2f(0.41f, -0.1f);
	glVertex2f(0.5f, -0.1f);
	glVertex2f(0.167f, 0.3f);

	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(204, 204, 204);

	glVertex2f(-0.41f, -0.1f);
	glVertex2f(-0.5f, -0.1f);
	glVertex2f(-0.167f, 0.3f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(230, 230, 230);

	glVertex2f(0.5f, -0.1f);
	glVertex2f(0.51f, -0.1f);
	glVertex2f(0.1568f, 0.316f);
	glVertex2f(0.16f, 0.3f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(230, 230, 230);

	glVertex2f(-0.5f, -0.1f);
	glVertex2f(-0.51f, -0.1f);
	glVertex2f(-0.1568f, 0.316f);
	glVertex2f(-0.16f, 0.3f);

	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(204, 204, 204);

	glVertex2f(0.51f, -0.1f);
	glVertex2f(0.6f, -0.1f);
	glVertex2f(0.17f, 0.3f);

	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(204, 204, 204);

	glVertex2f(-0.51f, -0.1f);
	glVertex2f(-0.6f, -0.1f);
	glVertex2f(-0.17f, 0.3f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(230, 230, 230);

	glVertex2f(0.6f, -0.1f);
	glVertex2f(0.615f, -0.1f);
	glVertex2f(0.15f, 0.33f);
	glVertex2f(0.167f, 0.3f);

	glEnd();

    glBegin(GL_QUADS);
	glColor3ub(230, 230, 230);

	glVertex2f(-0.6f, -0.1f);
	glVertex2f(-0.615f, -0.1f);
	glVertex2f(-0.15f, 0.33f);
	glVertex2f(-0.167f, 0.3f);

	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(204, 204, 204);

	glVertex2f(0.61f, -0.1f);
	glVertex2f(0.7f, -0.1f);
	glVertex2f(0.29f, 0.2f);

	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(204, 204, 204);

	glVertex2f(-0.61f, -0.1f);
	glVertex2f(-0.7f, -0.1f);
	glVertex2f(-0.29f, 0.2f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(230, 230, 230);

	glVertex2f(0.7f, -0.1f);
	glVertex2f(0.718f, -0.1f);
	glVertex2f(0.25f, 0.24f);
	glVertex2f(0.275f, 0.21f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(230, 230, 230);

	glVertex2f(-0.7f, -0.1f);
	glVertex2f(-0.718f, -0.1f);
	glVertex2f(-0.25f, 0.24f);
	glVertex2f(-0.275f, 0.21f);

	glEnd();


	glBegin(GL_TRIANGLES);
	glColor3ub(204, 204, 204);

	glVertex2f(0.71f, -0.1f);
    glVertex2f(0.8f, -0.1f);
    glVertex2f(0.3f, 0.2f);

	glEnd();

	glBegin(GL_TRIANGLES);

	glColor3ub(204, 204, 204);
	glVertex2f(-0.71f, -0.1f);
    glVertex2f(-0.8f, -0.1f);
    glVertex2f(-0.3f, 0.2f);

	glEnd();

	glBegin(GL_QUADS);

	glColor3ub(230, 230, 230);
	glVertex2f(0.8f,-0.1f);
    glVertex2f(0.82f, -0.1f);
    glVertex2f(0.25f,0.241f);
    glVertex2f(0.265f, 0.221f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(230, 230, 230);

	glVertex2f(-0.8f,-0.1f);
    glVertex2f(-0.82f, -0.1f);
    glVertex2f(-0.25f,0.241f);
    glVertex2f(-0.265f, 0.221f);

	glEnd();
}

void stairs() {
    glBegin(GL_QUADS);
    glColor3ub(150, 40, 27);
    glVertex2f(-1.0f, -0.1f);
    glVertex2f(-1.0f, -0.3f);
    glVertex2f(1.0f, -0.3f);
    glVertex2f(1.0f, -0.1f);
    glEnd();

    glBegin(GL_LINES);
    glLineWidth(10);
    glColor3ub(0, 0, 0);

    glVertex2f(-1.0f, -0.13f);
    glVertex2f(1.0f, -0.13f);

    glVertex2f(-1.0f, -0.16f);
    glVertex2f(1.0f, -0.16f);

    glVertex2f(-1.0f, -0.2f);
    glVertex2f(1.0f, -0.2f);

    glVertex2f(-1.0f, -0.23f);
    glVertex2f(1.0f, -0.23f);

    glVertex2f(-1.0f, -0.26f);
    glVertex2f(1.0f, -0.26f);

    glVertex2f(-1.0f, -0.3f);
    glVertex2f(1.0f, -0.3f);

    glVertex2f(-1.0f, -0.1f);
    glVertex2f(1.0f, -0.1f);

    glEnd();
}

void field() {
    glBegin(GL_QUADS);
    glColor3ub(51, 204, 51);

    glVertex2f(-1.0f, -0.3f);
    glVertex2f(1.0f, -0.3f);
    glVertex2f(1.0f, -1.0f);
    glVertex2f(-1.0f, -1.0f);

    glEnd();
}

void pool() {
    glBegin(GL_QUADS);
    glColor3ub(217, 217, 217);

    glVertex2f(-0.4f, -0.3f);
    glVertex2f(0.4f, -0.3f);
    glVertex2f(0.5f, -1.0f);
    glVertex2f(-0.5f, -1.0f);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 102, 255);

    glVertex2f(-0.3f, -0.4f);
    glVertex2f(0.3f, -0.4f);
    glVertex2f(0.4f, -1.0f);
    glVertex2f(-0.4f, -1.0f);

    glEnd();
}

void flag() {
    glBegin(GL_QUADS);
    glColor3ub(150, 40, 27);

    glVertex2f(-0.1f, -1.0f);
    glVertex2f(0.1f, -1.0f);
    glVertex2f(0.05f, -0.9f);
    glVertex2f(-0.05f, -0.9f);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(242, 242, 242);

    glVertex2f(-0.01f, -1.0f);
    glVertex2f(0.01f, -1.0f);
    glVertex2f(0.01f, 0.05f);
    glVertex2f(-0.01f, 0.05f);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 153, 51);

    glVertex2f(0.01f, 0.05f);
    glVertex2f(0.37f, 0.05f);
    glVertex2f(0.37f, -0.2f);
    glVertex2f(0.01f, -0.2f);

    glEnd();

    float x = 0.19f, y = -0.07f, r = 0.07;
    float twicePie = 2.0 * 3.1416;
    int trainglePoints = 20;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 0, 0);

    for(int i = 0; i<=trainglePoints; i++) {
        glVertex2f(x + r * cos(i * twicePie / trainglePoints),
                   y + r * sin(i * twicePie / trainglePoints));
    }

    glEnd();
}


void national_memorial() {
    sky();
    glPushMatrix();
    glTranslatef(position, 0.0f, 0.0f);
    cloud();
    bird();
    glPopMatrix();
    memorial();
    stairs();
    field();
    pool();
    flag();

    glFlush();
}


int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(840, 640);
    glutInitWindowPosition(50, 50);
    glutCreateWindow("National Martyrs Memorial");
    init();
    glutDisplayFunc(national_memorial);
    glutTimerFunc(10, update, 0);
    glutMainLoop();
    return 0;
}
