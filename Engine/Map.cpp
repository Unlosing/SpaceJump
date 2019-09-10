#include "Map.h"

void Map::DrawStar(int x, int y, Graphics& gfx)
{
	gfx.PutPixel(7 + x, 3 + y, 142, 137, 88);
	gfx.PutPixel(6 + x, 4 + y, 168, 157, 143);
	gfx.PutPixel(7 + x, 4 + y, 192, 175, 48);
	gfx.PutPixel(8 + x, 4 + y, 168, 165, 142);
	gfx.PutPixel(4 + x, 5 + y, 177, 175, 176);
	gfx.PutPixel(5 + x, 5 + y, 177, 175, 176);
	gfx.PutPixel(6 + x, 5 + y, 161, 132, 74);
	gfx.PutPixel(7 + x, 5 + y, 250, 235, 147);
	gfx.PutPixel(8 + x, 5 + y, 162, 155, 70);
	gfx.PutPixel(9 + x, 5 + y, 177, 175, 176);
	gfx.PutPixel(10 + x, 5 + y, 177, 175, 176);
	gfx.PutPixel(3 + x, 6 + y, 147, 128, 104);
	gfx.PutPixel(4 + x, 6 + y, 203, 174, 52);
	gfx.PutPixel(5 + x, 6 + y, 208, 196, 49);
	gfx.PutPixel(6 + x, 6 + y, 241, 223, 52);
	gfx.PutPixel(7 + x, 6 + y, 249, 240, 96);
	gfx.PutPixel(8 + x, 6 + y, 242, 235, 119);
	gfx.PutPixel(9 + x, 6 + y, 209, 197, 67);
	gfx.PutPixel(10 + x, 6 + y, 203, 177, 51);
	gfx.PutPixel(11 + x, 6 + y, 147, 143, 101);
	gfx.PutPixel(4 + x, 7 + y, 139, 119, 93);
	gfx.PutPixel(5 + x, 7 + y, 211, 177, 58);
	gfx.PutPixel(6 + x, 7 + y, 248, 235, 51);
	gfx.PutPixel(7 + x, 7 + y, 248, 237, 51);
	gfx.PutPixel(8 + x, 7 + y, 249, 240, 89);
	gfx.PutPixel(9 + x, 7 + y, 211, 183, 75);
	gfx.PutPixel(10 + x, 7 + y, 139, 120, 93);
	gfx.PutPixel(5 + x, 8 + y, 147, 118, 73);
	gfx.PutPixel(6 + x, 8 + y, 249, 225, 54);
	gfx.PutPixel(7 + x, 8 + y, 236, 222, 51);
	gfx.PutPixel(8 + x, 8 + y, 248, 235, 51);
	gfx.PutPixel(9 + x, 8 + y, 146, 139, 69);
	gfx.PutPixel(4 + x, 9 + y, 170, 167, 167);
	gfx.PutPixel(5 + x, 9 + y, 218, 163, 57);
	gfx.PutPixel(6 + x, 9 + y, 213, 171, 57);
	gfx.PutPixel(7 + x, 9 + y, 146, 129, 106);
	gfx.PutPixel(8 + x, 9 + y, 212, 171, 57);
	gfx.PutPixel(9 + x, 9 + y, 216, 194, 52);
	gfx.PutPixel(10 + x, 9 + y, 170, 168, 167);
	gfx.PutPixel(4 + x, 10 + y, 153, 137, 116);
	gfx.PutPixel(5 + x, 10 + y, 145, 117, 78);
	gfx.PutPixel(6 + x, 10 + y, 172, 170, 169);
	gfx.PutPixel(8 + x, 10 + y, 173, 171, 170);
	gfx.PutPixel(9 + x, 10 + y, 144, 116, 78);
	gfx.PutPixel(10 + x, 10 + y, 153, 137, 116);

}

void Map::DrawTitle(int x, int y, Graphics& gfx)
{
}

void Map::DrawSky(Graphics& gfx)
{
	
}

void Map::DrawGround(int x, int y,Graphics& gfx)
{
	gfx.PutPixel(x, y,Colors::Green);
}

bool Map::TestGoalCollision(const Player& player, Graphics& gfx)
{
	const float playerRight = player.GetPos().x + player.GetWidth();

	return playerRight >= 794;
}

void Map::DrawGoal(Graphics& gfx) const
{
	gfx.DrawRectDim(794, 1, goalWidth,goalHeight,Colors::Red);
}
