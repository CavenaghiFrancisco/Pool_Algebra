#include "CueStick.h"

CueStick::CueStick(Rectangle stick, Color stickColor, float force, float maxForce, float minForce) {
	this->stick = stick;
	this->stickColor = stickColor;
	this->force = force;
	this->maxForce = maxForce;
	this->minForce = minForce;
}

CueStick::~CueStick() {

}

void CueStick::Draw() {
	DrawRectanglePro(stick, { stick.x, stick.y }, 0, stickColor);
}

void CueStick::Update() {
	Input();
}

void CueStick::AddForce() {
	this->force += 0.5f;
}

void CueStick::RemoveForce() {
	this->force -= 0.5f;
}

void CueStick::Shoot() {
	whiteBall->SetWhiteBallForce(this->force);
	whiteBall->ForceToSpeed(this->force);
}

void CueStick::SetWhiteBall(WhiteBall* whiteBall) {
	this->whiteBall = whiteBall;
}

void CueStick::Input() {
	if (IsKeyPressed(KEY_UP) && force < maxForce) 	{
		AddForce();
	}
	if (IsKeyPressed(KEY_DOWN) && force > minForce) 	{
		RemoveForce();
	}
	if (IsKeyPressed(KEY_SPACE)) 	{
		Shoot();
	}
}