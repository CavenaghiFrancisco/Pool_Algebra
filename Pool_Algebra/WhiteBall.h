#pragma once
#include "raylib.h"

class WhiteBall {
private:
	int radius;
	Color color;
	Vector2 position;
public:
	WhiteBall(int radius, Color color, Vector2 position);
	~WhiteBall();
	void Draw();
	void Update();
};
