#include "Player.h"



void Player::Update()
{
	
}

void Player::Update(SDL_Event e)
{
	switch (e.type)
	{
	case SDL_KEYDOWN:
		switch (e.key.keysym.sym)
		{
		case SDLK_a:
			MoveLeft();
		case SDLK_d:
			MoveRight();
		case SDLK_w:
			MoveUp();
		default:
			break;
		}
	
		break;

	default:
		break;
	}
}

void Player::MoveLeft()
{
	_xpos -= 4;
	_rect.x = _xpos;
}

void Player::MoveRight()
{
	_xpos += 4;
	_rect.x = _xpos;

}

void Player::MoveUp()
{
	_ypos -= 4;
	_rect.y = _ypos;

}
