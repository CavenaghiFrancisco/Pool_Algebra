#include "WhiteBall.h"
#include <math.h>

WhiteBall::WhiteBall(int radius, Color color, Vector2 position, float force) {
	this->radius = radius;
	this->color = color;
	this->position = position;
	this->force = force;

	mass = 156;
	acceleration = { 0,0 };
	velocity = { 200,200 };
	MU = 0.005f; //coeficiente de friccion estatica
	NU = 1.51f; //viscosidad del aire	
	norma_V = 0;
	N = mass * gravity;
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
	//position.x += velX * GetFrameTime();
	//position.y += velY * GetFrameTime();
	
	norma_V = pow((pow(velocity.x, 2) + pow(velocity.y, 2)), 1 / 2);

	acceleration.x = N * MU * (velocity.x / norma_V) - NU * velocity.x;
	acceleration.y = N * MU * (velocity.y / norma_V) - NU * velocity.y;

	position.x += velocity.x * GetFrameTime();
	position.y += velocity.y * GetFrameTime();

	velocity.x += acceleration.x * GetFrameTime();
	velocity.y += acceleration.y * GetFrameTime();
}

//formula de aerodinamica PI * diametro / 4

//PAGINA MUY EPICA QUE TE CARREA EL PARCIAL:
//https://www.maplesoft.com/applications/view.aspx?SID=3811&view=html