#pragma once

#include "Game.h"

class GameObject
{
public:
	GameObject();
	GameObject(const char* texture);
	~GameObject();

	virtual void Update();
	void Render();

protected:
	int _xpos;
	int _ypos;

	SDL_Texture* _objTexture;
	SDL_Rect _rect;

	
};



