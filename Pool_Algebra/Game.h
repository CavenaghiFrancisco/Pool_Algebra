#pragma once
#include "Ball.h"
#include "WhiteBall.h"
#include "Hole.h"
#include "Ball.h"
#include "WhiteBall.h"
#include <vector>

using namespace std;

class Game {
private:
	vector<Hole*> holes;
	WhiteBall* whiteBall;
public:
	const int screenWidth = 1366;
	const int screenHeight = 768;
	Game();
	~Game();
	void Init();
	void Input();
	void Update();
	void Draw();
	void DeInit();
	void GameLoop();
};

