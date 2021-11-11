#pragma once
#include "raylib.h"
#include "WhiteBall.h"
class CueStick {
private:
	Rectangle stick;
	Color stickColor;
	WhiteBall* whiteBall;
	float force;
	float maxForce;
	float minForce;
public:
	CueStick(Rectangle stick, Color stickColor, float force, float maxForce, float minForce);
	~CueStick();
	void Draw();
	void Update();
	void AddForce();
	void RemoveForce();
	void Shoot();
	void SetWhiteBall(WhiteBall* whiteBall);
	void Input();
};

