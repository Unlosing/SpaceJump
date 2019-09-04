#pragma once

#include "Graphics.h"
#include "Keyboard.h"

class Player
{
public:
	void Init(const Keyboard& kbd);
	void Draw(int x, int y, Graphics& gfx);
	bool IsDead();
private:
	int x;
	int y;
	bool isDead = false;
};
