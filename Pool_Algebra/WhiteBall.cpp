#include "WhiteBall.h"
#include <math.h>

const int screenWidth = 1366;
const int screenHeight = 768;

WhiteBall::WhiteBall(int radius, Color color, float force) {
	this->radius = radius;
	this->color = color;
	this->force = force;

	gravity = 9.8;
	position = { 1000 ,screenHeight / 2 };

	mass = 156;
	acceleration = { 0,0 };
	velocity = { 300,100 };
	MU = 0.005f; //coeficiente de friccion estatica
	NU = 1.51f; //viscosidad del aire	
	norma_V = 0;
	N = mass * gravity;
}

WhiteBall::~WhiteBall() {
}

void WhiteBall::Draw() 
{
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
	norma_V = pow((pow(velocity.x, 2) + pow(velocity.y, 2)), 1 / 2);

	if (!hitted)
	{
		acceleration.x = N * MU * (velocity.x / norma_V) - NU * velocity.x;
		acceleration.y = N * MU * (velocity.y / norma_V) - NU * velocity.y;
		hitted = true;
	}

	position.x += velocity.x * GetFrameTime();
	position.y += velocity.y * GetFrameTime();


	if (velocity.x > 0)
	{
		velocity.x += acceleration.x * GetFrameTime();
	}
	if (velocity.y > 0)
	{
		velocity.y += acceleration.y * GetFrameTime();
	}

	CheckFriction();
	WallCollision();
}

void WhiteBall::WallCollision()
{
	if (position.y > screenHeight || position.y < 0)
	{
		velocity.y *= -1;
	}

	if (position.x > screenWidth || position.x < 0)
	{
		velocity.x *= -1;
	}
}

void WhiteBall::CheckFriction()
{
	if (velocity.x > 0)
	{
		acceleration.x -= friction;
	}

	if (velocity.y > 0)
	{
		acceleration.y -= friction;
	}



}

//formula de aerodinamica PI * diametro / 4

//PAGINA MUY EPICA QUE TE CARREA EL PARCIAL:
//https://www.maplesoft.com/applications/view.aspx?SID=3811&view=html