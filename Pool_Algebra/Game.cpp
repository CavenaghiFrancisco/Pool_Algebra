#include "Game.h"
#include "raylib.h"


Game::Game() {
	holes.push_back(new Hole(60, BLACK, { 10,10 }));
	holes.push_back(new Hole(60, BLACK, { 10,(float)screenHeight-10 }));
	holes.push_back(new Hole(60, BLACK, { (float)screenWidth-10,10 }));
	holes.push_back(new Hole(60, BLACK, { (float)screenWidth-10,(float)screenHeight-10 }));
	holes.push_back(new Hole(60, BLACK, { (float)screenWidth/2,(float)screenHeight }));
	holes.push_back(new Hole(60, BLACK, { (float)screenWidth / 2,0 }));
	whiteBall = new WhiteBall(20, WHITE, { (float)screenWidth * 3 / 4, (float)screenHeight / 2 },0);
}

Game::~Game() {
}

void Game::Init() {
	InitWindow(screenWidth, screenHeight, "POOL");
}

void Game::Input() {
}

void Game::Update() {
	whiteBall->Update();
}

void Game::Draw() {

	BeginDrawing();
	ClearBackground(DARKGREEN);

	for (int i = 0; i < holes.size(); i++) {
		holes[i]->Draw();
	}

	whiteBall->Draw();
	EndDrawing();
}

void Game::DeInit() {
}

void Game::GameLoop() {
	Init();
	while (!WindowShouldClose()) {
		Input();
		Update();
		Draw();
	}
	DeInit();
}


