#include "Player.h"

void Player::ClampToScreen()
{
	const float right = pos.x + width;
	if (pos.x < 0)
	{
		pos.x = 0;
	}
	else if (right >= (float)Graphics::ScreenWidth)
	{
		pos.x = float(Graphics::ScreenWidth - 1) - width;
	}

	const float bottom = pos.y + height;
	if (pos.y < 0)
	{
		pos.y = 0;
	}
	else if (bottom >= (float)Graphics::ScreenHeight)
	{
		pos.y = float(Graphics::ScreenHeight - 1) - height;
	}
}

void Player::Update(const Keyboard& kbd, float dt)
{
	if (kbd.KeyIsPressed(VK_RIGHT))
	{
		pos.x += speed * dt;
	}
	if (kbd.KeyIsPressed(VK_LEFT))
	{
		pos.x -= speed * dt;
	}
	if (kbd.KeyIsPressed(VK_DOWN))
	{
		pos.y += speed * dt;
	}
	if (kbd.KeyIsPressed(VK_UP))
	{
		pos.y -= speed * dt;
	}
}

void Player::Draw(Graphics& gfx)
{
	const int x_int = (int)pos.x;
	const int y_int = (int)pos.y;

	gfx.PutPixel(10 + x_int, 3 + y_int, 102, 204, 102);
	gfx.PutPixel(11 + x_int, 3 + y_int, 99, 212, 103);
	gfx.PutPixel(12 + x_int, 3 + y_int, 96, 208, 102);
	gfx.PutPixel(13 + x_int, 3 + y_int, 18, 42, 18);
	gfx.PutPixel(14 + x_int, 3 + y_int, 3, 0, 3);
	gfx.PutPixel(15 + x_int, 3 + y_int, 24, 21, 24);
	gfx.PutPixel(16 + x_int, 3 + y_int, 60, 75, 60);
	gfx.PutPixel(17 + x_int, 3 + y_int, 130, 220, 136);
	gfx.PutPixel(18 + x_int, 3 + y_int, 132, 221, 136);
	gfx.PutPixel(19 + x_int, 3 + y_int, 127, 255, 127);
	gfx.PutPixel(9 + x_int, 4 + y_int, 63, 255, 63);
	gfx.PutPixel(10 + x_int, 4 + y_int, 89, 192, 89);
	gfx.PutPixel(11 + x_int, 4 + y_int, 91, 197, 96);
	gfx.PutPixel(12 + x_int, 4 + y_int, 88, 192, 93);
	gfx.PutPixel(13 + x_int, 4 + y_int, 16, 39, 16);
	gfx.PutPixel(14 + x_int, 4 + y_int, 4, 0, 4);
	gfx.PutPixel(15 + x_int, 4 + y_int, 20, 17, 20);
	gfx.PutPixel(16 + x_int, 4 + y_int, 55, 69, 56);
	gfx.PutPixel(17 + x_int, 4 + y_int, 124, 205, 128);
	gfx.PutPixel(18 + x_int, 4 + y_int, 124, 204, 127);
	gfx.PutPixel(19 + x_int, 4 + y_int, 124, 205, 124);
	gfx.PutPixel(20 + x_int, 4 + y_int, 127, 255, 127);
	gfx.PutPixel(8 + x_int, 5 + y_int, 102, 204, 102);
	gfx.PutPixel(9 + x_int, 5 + y_int, 103, 218, 103);
	gfx.PutPixel(10 + x_int, 5 + y_int, 86, 191, 91);
	gfx.PutPixel(11 + x_int, 5 + y_int, 66, 143, 70);
	gfx.PutPixel(12 + x_int, 5 + y_int, 59, 129, 62);
	gfx.PutPixel(13 + x_int, 5 + y_int, 11, 25, 11);
	gfx.PutPixel(14 + x_int, 5 + y_int, 3, 0, 2);
	gfx.PutPixel(15 + x_int, 5 + y_int, 14, 12, 14);
	gfx.PutPixel(16 + x_int, 5 + y_int, 39, 49, 40);
	gfx.PutPixel(17 + x_int, 5 + y_int, 96, 151, 99);
	gfx.PutPixel(18 + x_int, 5 + y_int, 101, 161, 105);
	gfx.PutPixel(19 + x_int, 5 + y_int, 121, 197, 124);
	gfx.PutPixel(20 + x_int, 5 + y_int, 130, 223, 143);
	gfx.PutPixel(21 + x_int, 5 + y_int, 127, 255, 127);
	gfx.PutPixel(8 + x_int, 6 + y_int, 92, 208, 92);
	gfx.PutPixel(9 + x_int, 6 + y_int, 101, 218, 107);
	gfx.PutPixel(10 + x_int, 6 + y_int, 90, 191, 95);
	gfx.PutPixel(11 + x_int, 6 + y_int, 30, 68, 31);
	gfx.PutPixel(12 + x_int, 6 + y_int, 0, 5, 0);
	gfx.PutPixel(16 + x_int, 6 + y_int, 1, 1, 1);
	gfx.PutPixel(17 + x_int, 6 + y_int, 39, 44, 39);
	gfx.PutPixel(18 + x_int, 6 + y_int, 67, 95, 68);
	gfx.PutPixel(19 + x_int, 6 + y_int, 125, 202, 127);
	gfx.PutPixel(20 + x_int, 6 + y_int, 135, 224, 139);
	gfx.PutPixel(21 + x_int, 6 + y_int, 127, 212, 127);
	gfx.PutPixel(7 + x_int, 7 + y_int, 95, 204, 98);
	gfx.PutPixel(8 + x_int, 7 + y_int, 96, 206, 99);
	gfx.PutPixel(9 + x_int, 7 + y_int, 94, 208, 100);
	gfx.PutPixel(10 + x_int, 7 + y_int, 102, 204, 107);
	gfx.PutPixel(11 + x_int, 7 + y_int, 109, 145, 111);
	gfx.PutPixel(12 + x_int, 7 + y_int, 114, 115, 114);
	gfx.PutPixel(13 + x_int, 7 + y_int, 131, 130, 131);
	gfx.PutPixel(14 + x_int, 7 + y_int, 137, 137, 137);
	gfx.PutPixel(15 + x_int, 7 + y_int, 137, 137, 137);
	gfx.PutPixel(16 + x_int, 7 + y_int, 142, 141, 142);
	gfx.PutPixel(17 + x_int, 7 + y_int, 159, 159, 159);
	gfx.PutPixel(18 + x_int, 7 + y_int, 151, 177, 152);
	gfx.PutPixel(19 + x_int, 7 + y_int, 139, 213, 142);
	gfx.PutPixel(20 + x_int, 7 + y_int, 128, 225, 130);
	gfx.PutPixel(21 + x_int, 7 + y_int, 127, 240, 131);
	gfx.PutPixel(22 + x_int, 7 + y_int, 127, 242, 130);
	gfx.PutPixel(7 + x_int, 8 + y_int, 97, 205, 100);
	gfx.PutPixel(8 + x_int, 8 + y_int, 95, 206, 101);
	gfx.PutPixel(9 + x_int, 8 + y_int, 93, 206, 98);
	gfx.PutPixel(10 + x_int, 8 + y_int, 106, 203, 112);
	gfx.PutPixel(11 + x_int, 8 + y_int, 160, 196, 162);
	gfx.PutPixel(12 + x_int, 8 + y_int, 191, 193, 191);
	gfx.PutPixel(13 + x_int, 8 + y_int, 219, 218, 219);
	gfx.PutPixel(14 + x_int, 8 + y_int, 221, 221, 221);
	gfx.PutPixel(15 + x_int, 8 + y_int, 209, 209, 209);
	gfx.PutPixel(16 + x_int, 8 + y_int, 213, 212, 213);
	gfx.PutPixel(17 + x_int, 8 + y_int, 239, 240, 239);
	gfx.PutPixel(18 + x_int, 8 + y_int, 204, 232, 206);
	gfx.PutPixel(19 + x_int, 8 + y_int, 144, 217, 147);
	gfx.PutPixel(20 + x_int, 8 + y_int, 126, 230, 129);
	gfx.PutPixel(21 + x_int, 8 + y_int, 128, 242, 131);
	gfx.PutPixel(22 + x_int, 8 + y_int, 127, 244, 131);
	gfx.PutPixel(7 + x_int, 9 + y_int, 97, 207, 101);
	gfx.PutPixel(8 + x_int, 9 + y_int, 95, 204, 100);
	gfx.PutPixel(9 + x_int, 9 + y_int, 95, 203, 101);
	gfx.PutPixel(10 + x_int, 9 + y_int, 108, 191, 113);
	gfx.PutPixel(11 + x_int, 9 + y_int, 171, 203, 173);
	gfx.PutPixel(12 + x_int, 9 + y_int, 207, 209, 207);
	gfx.PutPixel(13 + x_int, 9 + y_int, 248, 247, 248);
	gfx.PutPixel(14 + x_int, 9 + y_int, 217, 217, 217);
	gfx.PutPixel(15 + x_int, 9 + y_int, 145, 145, 145);
	gfx.PutPixel(16 + x_int, 9 + y_int, 138, 137, 138);
	gfx.PutPixel(17 + x_int, 9 + y_int, 255, 255, 255);
	gfx.PutPixel(18 + x_int, 9 + y_int, 215, 249, 217);
	gfx.PutPixel(19 + x_int, 9 + y_int, 145, 232, 148);
	gfx.PutPixel(20 + x_int, 9 + y_int, 127, 241, 132);
	gfx.PutPixel(21 + x_int, 9 + y_int, 128, 243, 133);
	gfx.PutPixel(22 + x_int, 9 + y_int, 127, 243, 134);
	gfx.PutPixel(7 + x_int, 10 + y_int, 93, 198, 99);
	gfx.PutPixel(8 + x_int, 10 + y_int, 93, 197, 99);
	gfx.PutPixel(9 + x_int, 10 + y_int, 94, 189, 99);
	gfx.PutPixel(10 + x_int, 10 + y_int, 109, 176, 113);
	gfx.PutPixel(11 + x_int, 10 + y_int, 170, 195, 170);
	gfx.PutPixel(12 + x_int, 10 + y_int, 203, 205, 203);
	gfx.PutPixel(13 + x_int, 10 + y_int, 220, 219, 220);
	gfx.PutPixel(14 + x_int, 10 + y_int, 153, 153, 153);
	gfx.PutPixel(15 + x_int, 10 + y_int, 35, 35, 35);
	gfx.PutPixel(16 + x_int, 10 + y_int, 27, 26, 27);
	gfx.PutPixel(17 + x_int, 10 + y_int, 253, 255, 253);
	gfx.PutPixel(18 + x_int, 10 + y_int, 213, 252, 215);
	gfx.PutPixel(19 + x_int, 10 + y_int, 143, 246, 147);
	gfx.PutPixel(20 + x_int, 10 + y_int, 125, 247, 131);
	gfx.PutPixel(21 + x_int, 10 + y_int, 128, 244, 133);
	gfx.PutPixel(22 + x_int, 10 + y_int, 127, 244, 134);
	gfx.PutPixel(7 + x_int, 11 + y_int, 83, 164, 90);
	gfx.PutPixel(8 + x_int, 11 + y_int, 87, 167, 89);
	gfx.PutPixel(9 + x_int, 11 + y_int, 90, 174, 94);
	gfx.PutPixel(10 + x_int, 11 + y_int, 110, 180, 114);
	gfx.PutPixel(11 + x_int, 11 + y_int, 170, 196, 169);
	gfx.PutPixel(12 + x_int, 11 + y_int, 200, 202, 200);
	gfx.PutPixel(13 + x_int, 11 + y_int, 110, 109, 110);
	gfx.PutPixel(14 + x_int, 11 + y_int, 52, 52, 52);
	gfx.PutPixel(15 + x_int, 11 + y_int, 9, 9, 9);
	gfx.PutPixel(16 + x_int, 11 + y_int, 43, 42, 43);
	gfx.PutPixel(17 + x_int, 11 + y_int, 252, 254, 252);
	gfx.PutPixel(18 + x_int, 11 + y_int, 213, 251, 215);
	gfx.PutPixel(19 + x_int, 11 + y_int, 144, 245, 148);
	gfx.PutPixel(20 + x_int, 11 + y_int, 126, 246, 131);
	gfx.PutPixel(21 + x_int, 11 + y_int, 128, 244, 133);
	gfx.PutPixel(22 + x_int, 11 + y_int, 127, 244, 134);
	gfx.PutPixel(7 + x_int, 12 + y_int, 81, 150, 83);
	gfx.PutPixel(8 + x_int, 12 + y_int, 83, 151, 85);
	gfx.PutPixel(9 + x_int, 12 + y_int, 88, 167, 92);
	gfx.PutPixel(10 + x_int, 12 + y_int, 110, 181, 114);
	gfx.PutPixel(11 + x_int, 12 + y_int, 170, 196, 169);
	gfx.PutPixel(12 + x_int, 12 + y_int, 198, 200, 198);
	gfx.PutPixel(13 + x_int, 12 + y_int, 51, 50, 51);
	gfx.PutPixel(16 + x_int, 12 + y_int, 50, 50, 50);
	gfx.PutPixel(17 + x_int, 12 + y_int, 252, 253, 252);
	gfx.PutPixel(18 + x_int, 12 + y_int, 213, 250, 215);
	gfx.PutPixel(19 + x_int, 12 + y_int, 144, 245, 148);
	gfx.PutPixel(20 + x_int, 12 + y_int, 126, 246, 131);
	gfx.PutPixel(21 + x_int, 12 + y_int, 128, 244, 133);
	gfx.PutPixel(22 + x_int, 12 + y_int, 127, 244, 134);
	gfx.PutPixel(7 + x_int, 13 + y_int, 94, 193, 97);
	gfx.PutPixel(8 + x_int, 13 + y_int, 94, 191, 98);
	gfx.PutPixel(9 + x_int, 13 + y_int, 95, 190, 100);
	gfx.PutPixel(10 + x_int, 13 + y_int, 109, 177, 113);
	gfx.PutPixel(11 + x_int, 13 + y_int, 172, 195, 173);
	gfx.PutPixel(12 + x_int, 13 + y_int, 206, 204, 206);
	gfx.PutPixel(13 + x_int, 13 + y_int, 194, 193, 194);
	gfx.PutPixel(14 + x_int, 13 + y_int, 188, 188, 188);
	gfx.PutPixel(15 + x_int, 13 + y_int, 187, 187, 187);
	gfx.PutPixel(16 + x_int, 13 + y_int, 201, 199, 201);
	gfx.PutPixel(17 + x_int, 13 + y_int, 245, 243, 245);
	gfx.PutPixel(18 + x_int, 13 + y_int, 208, 243, 209);
	gfx.PutPixel(19 + x_int, 13 + y_int, 142, 243, 146);
	gfx.PutPixel(20 + x_int, 13 + y_int, 128, 252, 133);
	gfx.PutPixel(21 + x_int, 13 + y_int, 128, 242, 133);
	gfx.PutPixel(22 + x_int, 13 + y_int, 126, 245, 133);
	gfx.PutPixel(7 + x_int, 14 + y_int, 95, 208, 100);
	gfx.PutPixel(8 + x_int, 14 + y_int, 94, 205, 100);
	gfx.PutPixel(9 + x_int, 14 + y_int, 94, 194, 99);
	gfx.PutPixel(10 + x_int, 14 + y_int, 107, 188, 111);
	gfx.PutPixel(11 + x_int, 14 + y_int, 150, 198, 153);
	gfx.PutPixel(12 + x_int, 14 + y_int, 176, 206, 177);
	gfx.PutPixel(13 + x_int, 14 + y_int, 229, 234, 229);
	gfx.PutPixel(14 + x_int, 14 + y_int, 247, 246, 248);
	gfx.PutPixel(15 + x_int, 14 + y_int, 251, 250, 251);
	gfx.PutPixel(16 + x_int, 14 + y_int, 243, 247, 244);
	gfx.PutPixel(17 + x_int, 14 + y_int, 205, 230, 206);
	gfx.PutPixel(18 + x_int, 14 + y_int, 180, 235, 182);
	gfx.PutPixel(19 + x_int, 14 + y_int, 139, 245, 143);
	gfx.PutPixel(20 + x_int, 14 + y_int, 125, 244, 129);
	gfx.PutPixel(21 + x_int, 14 + y_int, 126, 243, 130);
	gfx.PutPixel(22 + x_int, 14 + y_int, 126, 245, 133);
	gfx.PutPixel(7 + x_int, 15 + y_int, 89, 206, 96);
	gfx.PutPixel(8 + x_int, 15 + y_int, 93, 200, 96);
	gfx.PutPixel(9 + x_int, 15 + y_int, 94, 198, 98);
	gfx.PutPixel(10 + x_int, 15 + y_int, 108, 215, 113);
	gfx.PutPixel(11 + x_int, 15 + y_int, 118, 206, 122);
	gfx.PutPixel(12 + x_int, 15 + y_int, 128, 206, 131);
	gfx.PutPixel(13 + x_int, 15 + y_int, 200, 211, 200);
	gfx.PutPixel(14 + x_int, 15 + y_int, 231, 221, 230);
	gfx.PutPixel(15 + x_int, 15 + y_int, 242, 234, 242);
	gfx.PutPixel(16 + x_int, 15 + y_int, 228, 235, 229);
	gfx.PutPixel(17 + x_int, 15 + y_int, 148, 215, 152);
	gfx.PutPixel(18 + x_int, 15 + y_int, 143, 228, 148);
	gfx.PutPixel(19 + x_int, 15 + y_int, 140, 255, 146);
	gfx.PutPixel(20 + x_int, 15 + y_int, 126, 243, 130);
	gfx.PutPixel(21 + x_int, 15 + y_int, 124, 241, 130);
	gfx.PutPixel(22 + x_int, 15 + y_int, 127, 242, 127);
	gfx.PutPixel(8 + x_int, 16 + y_int, 72, 218, 72);
	gfx.PutPixel(9 + x_int, 16 + y_int, 94, 206, 101);
	gfx.PutPixel(10 + x_int, 16 + y_int, 101, 216, 104);
	gfx.PutPixel(11 + x_int, 16 + y_int, 94, 204, 98);
	gfx.PutPixel(12 + x_int, 16 + y_int, 94, 204, 99);
	gfx.PutPixel(13 + x_int, 16 + y_int, 164, 203, 166);
	gfx.PutPixel(14 + x_int, 16 + y_int, 198, 213, 198);
	gfx.PutPixel(15 + x_int, 16 + y_int, 214, 231, 215);
	gfx.PutPixel(16 + x_int, 16 + y_int, 201, 236, 203);
	gfx.PutPixel(17 + x_int, 16 + y_int, 113, 212, 118);
	gfx.PutPixel(18 + x_int, 16 + y_int, 117, 220, 121);
	gfx.PutPixel(19 + x_int, 16 + y_int, 130, 251, 136);
	gfx.PutPixel(20 + x_int, 16 + y_int, 126, 247, 133);
	gfx.PutPixel(21 + x_int, 16 + y_int, 85, 255, 85);
	gfx.PutPixel(10 + x_int, 17 + y_int, 90, 197, 90);
	gfx.PutPixel(11 + x_int, 17 + y_int, 94, 202, 100);
	gfx.PutPixel(12 + x_int, 17 + y_int, 95, 203, 100);
	gfx.PutPixel(13 + x_int, 17 + y_int, 96, 206, 102);
	gfx.PutPixel(14 + x_int, 17 + y_int, 105, 216, 110);
	gfx.PutPixel(15 + x_int, 17 + y_int, 119, 233, 124);
	gfx.PutPixel(16 + x_int, 17 + y_int, 129, 246, 135);
	gfx.PutPixel(17 + x_int, 17 + y_int, 127, 242, 131);
	gfx.PutPixel(18 + x_int, 17 + y_int, 126, 241, 130);
	gfx.PutPixel(19 + x_int, 17 + y_int, 120, 233, 120);
	gfx.PutPixel(8 + x_int, 18 + y_int, 42, 127, 42);
	gfx.PutPixel(9 + x_int, 18 + y_int, 91, 169, 98);
	gfx.PutPixel(10 + x_int, 18 + y_int, 96, 182, 98);
	gfx.PutPixel(11 + x_int, 18 + y_int, 93, 200, 100);
	gfx.PutPixel(12 + x_int, 18 + y_int, 94, 206, 99);
	gfx.PutPixel(13 + x_int, 18 + y_int, 95, 205, 100);
	gfx.PutPixel(14 + x_int, 18 + y_int, 104, 216, 109);
	gfx.PutPixel(15 + x_int, 18 + y_int, 118, 233, 123);
	gfx.PutPixel(16 + x_int, 18 + y_int, 128, 244, 133);
	gfx.PutPixel(17 + x_int, 18 + y_int, 128, 233, 132);
	gfx.PutPixel(18 + x_int, 18 + y_int, 128, 230, 132);
	gfx.PutPixel(19 + x_int, 18 + y_int, 129, 215, 129);
	gfx.PutPixel(20 + x_int, 18 + y_int, 127, 208, 127);
	gfx.PutPixel(21 + x_int, 18 + y_int, 63, 191, 63);
	gfx.PutPixel(8 + x_int, 19 + y_int, 85, 85, 0);
	gfx.PutPixel(9 + x_int, 19 + y_int, 95, 173, 100);
	gfx.PutPixel(10 + x_int, 19 + y_int, 101, 189, 106);
	gfx.PutPixel(11 + x_int, 19 + y_int, 95, 196, 100);
	gfx.PutPixel(12 + x_int, 19 + y_int, 102, 216, 107);
	gfx.PutPixel(13 + x_int, 19 + y_int, 100, 216, 106);
	gfx.PutPixel(14 + x_int, 19 + y_int, 111, 228, 116);
	gfx.PutPixel(15 + x_int, 19 + y_int, 125, 248, 131);
	gfx.PutPixel(16 + x_int, 19 + y_int, 136, 254, 141);
	gfx.PutPixel(17 + x_int, 19 + y_int, 136, 227, 141);
	gfx.PutPixel(18 + x_int, 19 + y_int, 128, 212, 132);
	gfx.PutPixel(19 + x_int, 19 + y_int, 134, 223, 140);
	gfx.PutPixel(20 + x_int, 19 + y_int, 128, 214, 133);
	gfx.PutPixel(7 + x_int, 20 + y_int, 98, 175, 98);
	gfx.PutPixel(8 + x_int, 20 + y_int, 97, 174, 99);
	gfx.PutPixel(9 + x_int, 20 + y_int, 97, 174, 99);
	gfx.PutPixel(10 + x_int, 20 + y_int, 100, 181, 104);
	gfx.PutPixel(11 + x_int, 20 + y_int, 95, 189, 101);
	gfx.PutPixel(12 + x_int, 20 + y_int, 94, 202, 100);
	gfx.PutPixel(13 + x_int, 20 + y_int, 94, 204, 98);
	gfx.PutPixel(14 + x_int, 20 + y_int, 102, 215, 108);
	gfx.PutPixel(15 + x_int, 20 + y_int, 116, 234, 123);
	gfx.PutPixel(16 + x_int, 20 + y_int, 128, 237, 134);
	gfx.PutPixel(17 + x_int, 20 + y_int, 129, 210, 133);
	gfx.PutPixel(18 + x_int, 20 + y_int, 127, 210, 133);
	gfx.PutPixel(19 + x_int, 20 + y_int, 132, 217, 135);
	gfx.PutPixel(20 + x_int, 20 + y_int, 129, 212, 133);
	gfx.PutPixel(21 + x_int, 20 + y_int, 127, 212, 133);
	gfx.PutPixel(22 + x_int, 20 + y_int, 127, 211, 131);
	gfx.PutPixel(7 + x_int, 21 + y_int, 98, 179, 98);
	gfx.PutPixel(8 + x_int, 21 + y_int, 96, 176, 100);
	gfx.PutPixel(9 + x_int, 21 + y_int, 96, 175, 99);
	gfx.PutPixel(10 + x_int, 21 + y_int, 96, 175, 99);
	gfx.PutPixel(11 + x_int, 21 + y_int, 97, 180, 100);
	gfx.PutPixel(12 + x_int, 21 + y_int, 84, 198, 84);
	gfx.PutPixel(13 + x_int, 21 + y_int, 85, 212, 85);
	gfx.PutPixel(14 + x_int, 21 + y_int, 91, 218, 91);
	gfx.PutPixel(15 + x_int, 21 + y_int, 109, 236, 109);
	gfx.PutPixel(16 + x_int, 21 + y_int, 117, 235, 117);
	gfx.PutPixel(17 + x_int, 21 + y_int, 113, 198, 113);
	gfx.PutPixel(18 + x_int, 21 + y_int, 130, 211, 130);
	gfx.PutPixel(19 + x_int, 21 + y_int, 127, 212, 132);
	gfx.PutPixel(20 + x_int, 21 + y_int, 128, 214, 132);
	gfx.PutPixel(21 + x_int, 21 + y_int, 128, 214, 132);
	gfx.PutPixel(22 + x_int, 21 + y_int, 128, 215, 132);
	gfx.PutPixel(7 + x_int, 22 + y_int, 95, 188, 99);
	gfx.PutPixel(8 + x_int, 22 + y_int, 95, 187, 100);
	gfx.PutPixel(9 + x_int, 22 + y_int, 95, 183, 100);
	gfx.PutPixel(10 + x_int, 22 + y_int, 96, 176, 100);
	gfx.PutPixel(11 + x_int, 22 + y_int, 100, 170, 100);
	gfx.PutPixel(18 + x_int, 22 + y_int, 130, 211, 130);
	gfx.PutPixel(19 + x_int, 22 + y_int, 128, 212, 132);
	gfx.PutPixel(20 + x_int, 22 + y_int, 128, 220, 133);
	gfx.PutPixel(21 + x_int, 22 + y_int, 127, 224, 131);
	gfx.PutPixel(22 + x_int, 22 + y_int, 128, 228, 133);
	gfx.PutPixel(7 + x_int, 23 + y_int, 96, 205, 101);
	gfx.PutPixel(8 + x_int, 23 + y_int, 96, 204, 98);
	gfx.PutPixel(9 + x_int, 23 + y_int, 95, 206, 97);
	gfx.PutPixel(20 + x_int, 23 + y_int, 127, 244, 131);
	gfx.PutPixel(21 + x_int, 23 + y_int, 125, 243, 130);
	gfx.PutPixel(22 + x_int, 23 + y_int, 127, 244, 132);
	gfx.PutPixel(7 + x_int, 24 + y_int, 95, 212, 106);
	gfx.PutPixel(8 + x_int, 24 + y_int, 99, 208, 102);
	gfx.PutPixel(9 + x_int, 24 + y_int, 95, 210, 102);
	gfx.PutPixel(20 + x_int, 24 + y_int, 124, 236, 130);
	gfx.PutPixel(21 + x_int, 24 + y_int, 127, 248, 130);
	gfx.PutPixel(22 + x_int, 24 + y_int, 125, 245, 130);
	gfx.PutPixel(7 + x_int, 25 + y_int, 85, 212, 85);
	gfx.PutPixel(8 + x_int, 25 + y_int, 84, 198, 84);
	gfx.PutPixel(9 + x_int, 25 + y_int, 102, 204, 102);
	gfx.PutPixel(20 + x_int, 25 + y_int, 102, 255, 102);
	gfx.PutPixel(21 + x_int, 25 + y_int, 113, 254, 113);
	gfx.PutPixel(22 + x_int, 25 + y_int, 127, 255, 127);
}

Vec2 Player::GetPos() const
{
	return pos;
}

bool Player::IsDead()
{
	return isDead;
}

float Player::GetWidth() const
{
	return width;
}

float Player::GetHeight() const
{
	return height;
}
