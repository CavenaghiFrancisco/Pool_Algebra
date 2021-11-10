#include "Ball.h"

Ball::Ball(int radius, Color color, Vector2 position) {
	this->radius = radius;
	this->color = color;
	this->position = position;
}

Ball::~Ball() {
}

void Ball::Draw() {
	DrawCircle(position.x, position.y, radius, color);
}

void Ball::Update() {
}
