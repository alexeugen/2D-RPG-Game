#pragma once

#include "GameObject.h"

class Player : public GameObject
{
public:
	Player(const char* texture) : GameObject(texture){}
	void Update() override;
	void Update(SDL_Event e);

	void MoveLeft();
	void MoveRight();
	void MoveUp();
};
