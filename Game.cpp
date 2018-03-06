#include "Game.h"
#include "GameObject.h"
#include "Player.h"
#include "Map.h"

SDL_Renderer* Game::renderer = nullptr;
SDL_Event event;
Player *player;
Map *the_Map;

Game::Game()
{
}


Game::~Game()
{
}

void Game::Init(const char * title, int xpos, int ypos, int width, int height, bool fullscreen)
{
	int flags = 0;
	if (fullscreen)
	{
		flags = SDL_WINDOW_FULLSCREEN;
	}

	if (SDL_Init(SDL_INIT_EVERYTHING) == 0)
	{
		std::cout << "SDL Initialised" << std::endl;

		window = SDL_CreateWindow(title, xpos, ypos, width, height, flags);
		if (window)
		{
			std::cout << "Window created!" << std::endl;
		}

		renderer = SDL_CreateRenderer(window, -1, 0);
		if (renderer)
		{
			SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
			std::cout << "Renderer created!" << std::endl;
		}

		IsRunning = true;
	}

	
	player = new Player("assets/GEORGE/front/fr1.png");
	the_Map = new Map();

	
}

void Game::HandleEvents()
{
	
	SDL_PollEvent(&event);
	switch (event.type)
	{
	case SDL_QUIT:
		IsRunning = false;
		break;

	default:
		break;
	}
}

void Game::Update()
{
	player->Update();
}

void Game::Render()
{
	SDL_RenderClear(renderer);

	the_Map->DrawMap();
	player->Update(event);

	player->Render();
	
	SDL_RenderPresent(renderer);
}

void Game::Clean()
{
	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(renderer);
	SDL_Quit();
	std::cout << "Game cleaned" << std::endl;
}

bool Game::Running()
{
	return IsRunning;
}

SDL_Event Game::ReturnEvent()
{
	return event;
}

