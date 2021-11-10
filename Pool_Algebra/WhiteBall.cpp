#include "WhiteBall.h"

WhiteBall::WhiteBall(int radius, Color color, Vector2 position) {
	this->radius = radius;
	this->color = color;
	this->position = position;
}

WhiteBall::~WhiteBall() {
}

void WhiteBall::Draw() {
	DrawCircle(position.x, position.y, radius, color);
}

void WhiteBall::Update() {
}
