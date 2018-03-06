#include "GameObject.h"

GameObject::GameObject()
{

}

GameObject::GameObject(const char* texture)
{
	_objTexture = IMG_LoadTexture(Game::renderer, texture);

	_xpos = 1280 / 2 - 40;
	_ypos = 720 / 2 - 45;
	_rect.x = _xpos;
	_rect.y = _ypos;
	_rect.w = 80;
	_rect.h = 90;
}


GameObject::~GameObject()
{
}

void GameObject::Update()
{

}

void GameObject::Render()
{
	SDL_RenderCopy(Game::renderer, _objTexture, NULL, &_rect);
}
