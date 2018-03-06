#include "Map.h"



Map::Map()
{
	grassTex = IMG_LoadTexture(Game::renderer, "assets/grass.png");
	_rect1.x = 0;
	_rect1.y = 0;
	_rect1.w = 128;
	_rect1.h = 128;
}


Map::~Map()
{

}

void Map::LoadMap()
{

}

void Map::DrawMap()
{
	for(int i = 0; i<10; i++)
		for (int j = 0; j < 7; j++)
		{
			_rect1.x = i * 128;
			_rect1.y = j * 128;
			SDL_RenderCopy(Game::renderer, grassTex, NULL, &_rect1);
		}

}
