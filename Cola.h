#include <GL/glew.h>
#include <GL/freeglut.h>
#include "glApplication.h"
#include "glutWindow.h"
#include <iostream>
#include "glsl.h"

class Cola
{
public:
	Cola() {};

	void DibujarCola(float x, float y, float z, float tamanio, float rotacion, float rx, float ry, float rz, int n);
};