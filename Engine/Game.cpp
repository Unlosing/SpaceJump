/****************************************************************************************** 
 *	Chili DirectX Framework Version 16.07.20											  *	
 *	Game.cpp																			  *
 *	Copyright 2016 PlanetChili.net <http://www.planetchili.net>							  *
 *																						  *
 *	This file is part of The Chili DirectX Framework.									  *
 *																						  *
 *	The Chili DirectX Framework is free software: you can redistribute it and/or modify	  *
 *	it under the terms of the GNU General Public License as published by				  *
 *	the Free Software Foundation, either version 3 of the License, or					  *
 *	(at your option) any later version.													  *
 *																						  *
 *	The Chili DirectX Framework is distributed in the hope that it will be useful,		  *
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of						  *
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the						  *
 *	GNU General Public License for more details.										  *
 *																						  *
 *	You should have received a copy of the GNU General Public License					  *
 *	along with The Chili DirectX Framework.  If not, see <http://www.gnu.org/licenses/>.  *
 ******************************************************************************************/
// Game Created by Alex Meyer
#include "MainWindow.h"
#include "Game.h"


Game::Game( MainWindow& wnd )
	:
	wnd( wnd ),
	gfx( wnd ),
	rng(rd()),
	xDist(400,770),
	yDist(0,570)
{
	for (int i = 0; i < currentLevel; ++i)
	{
		obstacles[i].Init(Vec2(xDist(rng), yDist(rng)), Vec2(-3.5f * 60.0f, 0));
	}
	title.Play();
}

void Game::Go()
{
	gfx.BeginFrame();	
	UpdateModel();
	ComposeFrame();
	gfx.EndFrame();
}

void Game::UpdateModel()
{
	const float dt = ft.Mark();
	if (!isStarted)
	{
		if (wnd.kbd.KeyIsPressed(VK_RETURN))
		{
			if (!isTitlePlaying)
			{
				title.Play();
				isTitlePlaying = true;
			}
			if (isEnded)
			{
				currentLevel = 1;
				player.Respawn(Vec2(5.0f, 370.0f));
				isEnded = false;
			}
			isStarted = true;
		}
	}
	else
	{
		player.Update(wnd.kbd, dt);
		player.ClampToScreen();

		for (int i = 0; i < currentLevel; ++i)
		{
			obstacles[i].Update(dt);
			obstacles[i].Respawn(Vec2(xDist(rng), yDist(rng)));
			if (obstacles[i].TestCollision(player))
			{
				isEnded = true;
			}
		}
		if (map.TestGoalCollision(player, gfx))
		{
			currentLevel++;
			player.Respawn(Vec2(5.0f, 370.0f));
			for (int i = 0; i < currentLevel; ++i)
			{
				obstacles[i].Init(Vec2(xDist(rng), yDist(rng)), Vec2(-3.5f * 60.0f, 0));
			}
			for (int i = 0; i < currentLevel; ++i)
			{
				obstacles[i].Update(dt);
				obstacles[i].Respawn(Vec2(xDist(rng), yDist(rng)));
			}
		}
		title.StopAll();
		isTitlePlaying = false;
		if (!isMainPlaying)
		{
			main.Play();
			isMainPlaying = true;
		}
	}
	if (isEnded)
	{
		main.StopAll();
		isMainPlaying = false;
		isStarted = false;
	}
}

void Game::ComposeFrame()
{
	if (isStarted)
	{
		for (int i = 0; i < currentLevel; ++i)
		{
			obstacles[i].Draw(gfx);
		}
		player.Draw(gfx);
		map.DrawSky(gfx);
		map.DrawGoal(gfx);
	}
	else
	{
		map.DrawTitle(250, 250, gfx);
	}
}
