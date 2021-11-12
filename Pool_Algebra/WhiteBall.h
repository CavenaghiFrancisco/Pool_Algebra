#pragma once
#include "raylib.h"

class WhiteBall {
private:
	int radius;
	Color color;
	Vector2 position;
	float force;
	float velX;
	float velY;
	float gravity;
	float acceleration;
public:
	WhiteBall(int radius, Color color, Vector2 position, float force);
	~WhiteBall();
	void Draw();
	void Update();
	void SetWhiteBallForce(float force);
	void ForceToSpeed(float force);
	void Movement();
};

