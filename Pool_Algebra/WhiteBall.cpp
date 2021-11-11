#include "WhiteBall.h"

WhiteBall::WhiteBall(int radius, Color color, Vector2 position, float force) {
	this->radius = radius;
	this->color = color;
	this->position = position;
	this->force = force;
}

WhiteBall::~WhiteBall() {
}

void WhiteBall::Draw() {
	DrawCircle(position.x, position.y, radius, color);
}

void WhiteBall::Update() {
}

void WhiteBall::SetWhiteBallForce(float force) {
	this->force = force;
}

void WhiteBall::ForceToSpeed(float force) {

}
