#include "Tetera.h"

Tetera::Tetera() {}

void Tetera::DibujarTetera(float x, float y, float z) {
    glPushMatrix();
    glTranslatef(x, y, z);
    glutSolidTeapot(0.5);
    glPopMatrix();
}
