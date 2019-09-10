#include "Obstacle.h"

void Obstacle::Init(const Vec2& pos_in, const Vec2& vel_in)
{
	pos = pos_in;
	vel = vel_in;
	initialized = true;
}

void Obstacle::Update(float dt)
{
	pos += vel * dt;

	const float right = pos.x + width;
	if (pos.x < 0)
	{
		pos.x = 0;
		initialized = false;
		//vel.x = -vel.x;
	}
	else if (right >= float(Graphics::ScreenWidth))
	{
		pos.x = float(Graphics::ScreenWidth - 1) - width;
		initialized = false;
		//vel.x = -vel.x;
	}

	const float bottom = pos.y + height;
	if (pos.y < 0)
	{
		pos.y = 0;
		//vel.y = -vel.y;
	}
	else if (bottom >= float(Graphics::ScreenHeight))
	{
		pos.y = float(Graphics::ScreenHeight - 1) - height;
		//vel.y = -vel.y;
	}
}

bool Obstacle::TestCollision(const Player& player) const
{
	const float playerRight = player.GetPos().x + player.GetWidth();
	const float playerBottom = player.GetPos().y + player.GetHeight();
	const float obstacleRight = pos.x + width;
	const float obstacleBottom = pos.y + height;

	return
		playerRight >= pos.x &&
		player.GetPos().x <= obstacleRight &&
		playerBottom >= pos.y &&
		player.GetPos().y <= obstacleBottom;
}

void Obstacle::Draw(Graphics& gfx) const
{
	const int x_int = (int)pos.x;
	const int y_int = (int)pos.y;

	gfx.DrawRectDim(x_int, y_int, width, height, Colors::Gray);
}
