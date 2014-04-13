#include <GL/glut.h>
#include "asteroid.h"

void Asteroid::render() {
    const GLfloat mat_specular[] = { 1.0, 1.0, 1.0, 1.0 };
    const GLfloat mat_diffuse[] = { .5f, .5f, .5f, 1.0f };
    const GLfloat mat_emission[] = { .1f, .1f, .0f, 1.0f };
    const GLfloat mat_shininess[] = { 50.0 };

    glMaterialfv(GL_FRONT, GL_EMISSION, mat_emission);
    glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);
    glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, mat_diffuse);

    glPushMatrix();
    glScalef(size, size, size);
    glutSolidSphere(1, 5, 5);
    glPopMatrix();
}

