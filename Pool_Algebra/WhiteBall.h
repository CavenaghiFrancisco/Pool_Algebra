#pragma once
#include "raylib.h"

class WhiteBall {
private:
	int radius;
	Color color;
	float force;
	float gravity;
	float mass;

	bool hitted;

	Vector2 position;
	Vector2 velocity;
	Vector2 acceleration;

	float MU = 0.005f; //coeficiente de friccion estatica
	float NU = 1.51f; //viscosidad del aire	
	float norma_V = 0;	
	float N = 0;
	float friction = 0.1;

	//LINK EPICARDO
	//https://es.khanacademy.org/computing/computer-programming/programming-natural-simulations/programming-forces/a/air-and-fluid-resistance


public:
	WhiteBall(int radius, Color color, float force);
	~WhiteBall();
	void Draw();
	void Update();
	void SetWhiteBallForce(float force);
	void ForceToSpeed(float force);
	void Movement();
	void WallCollision();
	void CheckFriction();
};

