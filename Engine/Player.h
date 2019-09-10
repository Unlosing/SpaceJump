#pragma once

#include "Graphics.h"
#include "Keyboard.h"
#include "Vec2.h"

class Player
{
public:
	void ClampToScreen();
	void Update(const Keyboard& kbd, float dt);
	void Draw(Graphics& gfx);
	void Respawn(const Vec2& pos_in);
	Vec2 GetPos() const;
	bool IsDead();
	float GetWidth() const;
	float GetHeight() const;
private:
	Vec2 pos = Vec2(5.0f, 370.0f);
	static constexpr float speed = 2.0f * 60.0f;
	static constexpr float width = 30.0f;
	static constexpr float height = 30.0f;
	bool isDead = false;
};
