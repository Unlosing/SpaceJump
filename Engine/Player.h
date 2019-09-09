#pragma once

#include "Graphics.h"
#include "Keyboard.h"

class Player
{
public:
	void Init(int x_in, int y_in, int vx_in, int vy_in);
	void Update();
	void Draw(int x, int y, Graphics& gfx);
	bool IsDead();
private:
	int x;
	int y;
	int vx;
	int vy;
	static constexpr int width = 30;
	static constexpr int height = 30;
	bool isDead = false;
};
