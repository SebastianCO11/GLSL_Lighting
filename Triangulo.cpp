#include "Triangulo.h"

Triangulo::Triangulo(){}

void Triangulo::DibujarTriangulos(float x, float y2, float z){
    float y = y2 +0.5;
    glPushMatrix();
    glBegin(GL_TRIANGLES);
    glVertex3f(x, y, z);
    glVertex3f((y)/9, (y-1), z);
    glVertex3f((-y)/9, (y - 1), z);
    glEnd();
    glPopMatrix();
}
