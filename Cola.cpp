#include "Cola.h"
#define ANGULO 45

//Cola::Cola() {}

void Cola::DibujarCola(float x, float y, float z, float tamanio, float rotacion, float rx, float ry, float rz, int n) {

    glPushMatrix();
    glTranslatef(x, y, z);
    glRotatef(rotacion, rx, ry, rz);
    //glutSolidCube(tamanio);

    // Reutilizado 

    glPushMatrix();
    glTranslatef(-0.25, 0.0, 0.0);
    glRotatef(rotacion, 0.0, 0.0, 1.0);
    glTranslatef(0.25, 0.0, 0.0);

    glPushMatrix();
    glScalef(0.5, 0.4, 1.0);
    glutSolidCube(tamanio);
    glPopMatrix();

    for (int i = 0; i < n; i++) {

        glTranslatef(0.25, 0.0, 0.0);
        glRotatef(15, 0, 0, 1);
        glTranslatef(0.25, 0.0, 0.0);
        glPushMatrix();
        glScalef(0.5, 0.4, 1.0);
        glutSolidCube(tamanio);
        glPopMatrix();

    }

    glPopMatrix();

    glPopMatrix();
}