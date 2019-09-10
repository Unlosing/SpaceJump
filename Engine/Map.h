#pragma once

#include "Graphics.h"
#include "Player.h"
#include <chrono>
#include <random>

class Map
{
public:
	void DrawStar(int x, int y, Graphics& gfx);
	void DrawTitle(int x, int y, Graphics& gfx);
	void DrawSky(Graphics& gfx);
	void DrawGround(int x, int y,Graphics& gfx);
	bool TestGoalCollision(const Player& player);
	void DrawGoal(Graphics& gfx) const;
private:
	int x;
	int y;
	int starWidth = 15;
	int starHeight = 14;
	int obWidth = 25;
	int obHeight = 25;
	float goalWidth = 5;
	float goalHeight = 598;
	Color c = Colors::Green;
};