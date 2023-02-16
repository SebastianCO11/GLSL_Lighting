#include "Cubo.h"

Cubo::Cubo() {}

void Cubo::DibujarCubo(float x, float y, float z, int n) {
    glPushMatrix();
    glTranslatef(x, y, z);
    glRotatef(n, 0, 0, 1);
    glutSolidCube(0.5);
    glPopMatrix();
}
