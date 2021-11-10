#pragma once
#include "raylib.h"

class Hole {
private:
	int radius;
	Color color;
	Vector2 position;
public:
	Hole(int radius, Color color, Vector2 position);
	~Hole();
	void Draw();
	void Update();
};

