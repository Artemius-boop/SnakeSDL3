#pragma once

#include <iostream>
#include <SDL3/SDL.h>
#include <SDL3/SDL_main.h>

bool initGame()
{
	bool initSuccess = true;
	if (!SDL_Init(SDL_INIT_VIDEO))
	{
		SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR, "Error", "SDL3 failed to initialize", nullptr);
		initSuccess = false;
	}

	return initSuccess;
}

void quitGame()
{
	SDL_Quit();
}