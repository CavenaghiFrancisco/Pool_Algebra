#include "WhiteBall.h"

WhiteBall::WhiteBall(int radius, Color color, Vector2 position, float force) {
	this->radius = radius;
	this->color = color;
	this->position = position;
	this->force = force;

	velX = 200;
	velY = 200;
}

WhiteBall::~WhiteBall() {
}

void WhiteBall::Draw() {
	DrawCircle(position.x, position.y, radius, color);
}

void WhiteBall::Update() {
	Movement();
}

void WhiteBall::SetWhiteBallForce(float force) {
	this->force = force;
}

void WhiteBall::ForceToSpeed(float force) {

}

void WhiteBall::Movement()
{
	position.x += velX * GetFrameTime();
	position.y += velY * GetFrameTime();

	/*
	Ffrict:=(-1)*ff*ms*grv; # Force of friction
	p:=m*v; # Momentum
	KE:=(m*v^2)/2; # Kinetic Energy
	angl:=evalf(ang);
	if ((0<angl) and (angl<=evalf(Pi)))
	{
	v1int:=-v1i;
	}
	distance:=(dist+(2*rad));
	acc:=ff*grv; # Acceleration of the cue ball

	elif (angl<=evalf(2*Pi)) then
	v1int:=v1i;
	distance:=(-1)*(dist+(2*rad));
	acc:=(-1)*ff*grv;
	end if;

	*/

}

//formula de aerodinamica PI * diametro / 4

//PAGINA MUY EPICA QUE TE CARREA EL PARCIAL:
//https://www.maplesoft.com/applications/view.aspx?SID=3811&view=html