#pragma once

#include "Graphics.h"
#include <chrono>
#include <random>

class Map
{
public:
	void DrawStar(int x, int y, Graphics& gfx);
	void DrawTitle(int x, int y, Graphics& gfx);
	void DrawSky(Graphics& gfx);
	void DrawObstacle(int x_in, int y_in,Graphics& gfx);
	void DrawGround(int x, int y,Graphics& gfx);
private:
	int x;
	int y;
	int starWidth = 15;
	int starHeight = 14;
	int obWidth = 25;
	int obHeight = 25;
	Color c = Colors::Green;
};