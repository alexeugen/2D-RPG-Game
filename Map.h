#pragma once
#include "Game.h"

class Map
{
public:
	Map();
	~Map();

	void LoadMap();
	void DrawMap();

private:
	SDL_Rect _rect1;
	SDL_Texture* grassTex;
};

