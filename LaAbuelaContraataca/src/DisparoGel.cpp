#include "freeglut.h" 
#include "DisparoGel.h"
DisparoGel::DisparoGel()
{
	radio = 0.25f;
	posicion.y = aceleracion.x = aceleracion.y = 0.0f;
	velocidad.y = 1.0f;
	posicion.x = origen.x = -5.0f;
	posicion.y = origen.y = 0.0f;
}
void DisparoGel::dibuja()
{
	glColor3f(0.0f, 1.0f, 1.0f);
	glPushMatrix();
	glTranslatef(posicion.x, posicion.y, 0);
	glutSolidSphere(radio, 20, 20);
	glPopMatrix();
}
void DisparoGel::mueve(float t)
{
	posicion = posicion + velocidad * t + aceleracion * (0.5f * t * t);
	velocidad = velocidad + aceleracion * t;
}
void DisparoGel::setPos(float ix, float iy)
{
	posicion.x = ix;
	posicion.y = iy;
}
DisparoGel :: ~DisparoGel()
{

}