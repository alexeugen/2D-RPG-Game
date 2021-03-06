#pragma once
#include "SDL.h"
#include "SDL_image.h"
#include <iostream>

class Game
{
public:
	Game();
	~Game();

	void Init(const char* title, int xpos, int ypos, int width, int height, bool fullscreen);
	void HandleEvents();
	void Update();
	void Render();
	void Clean();
	bool Running();
	SDL_Event ReturnEvent();
	
	static SDL_Renderer *renderer;
	
	bool IsRunning;
private:
	int count = 0;;
	
	SDL_Window * window;
	
};

