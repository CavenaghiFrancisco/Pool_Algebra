#pragma once
#include "raylib.h"

class Ball {
private:
	int radius;
	Color color;
	Vector2 position;
public:
	Ball(int radius, Color color, Vector2 position);
	~Ball();
	void Draw();
	void Update();
};

