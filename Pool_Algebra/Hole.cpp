#include "Hole.h"

Hole::Hole(int radius, Color color, Vector2 position) {
	this->radius = radius;
	this->color = color;
	this->position = position;
}

Hole::~Hole() {
}

void Hole::Draw() {
	DrawCircle(position.x, position.y, radius, color);
}

void Hole::Update() {
}
