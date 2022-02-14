#include <iostream>
#include "fEngine.h"

namespace fEngine 
{
	SDL_Window *_window = NULL;
	SDL_Event sdl_event;

	bool shouldRun = true;

	int initWindow(const char* title, int windowX, int windowY, int windowWidth, int windowHeight, bool closeOnQuit)
	{
		if (SDL_Init(SDL_INIT_VIDEO) < 0) 
		{
			std::cout << "Could not initialize SDL Video Subsystem \n";
			std::cout << "SDL Error: " << SDL_GetError() << "\n";
			return 1;
		}

		_window = SDL_CreateWindow(
			                      title, 
			                      windowX, 
			                      windowY, 
			                      windowWidth, 
			                      windowHeight, 
			                      SDL_WINDOW_OPENGL
		                          );
		if (_window == NULL) 
		{
			std::cout << "Could not create a new window: \n";
			std::cout << "SDL Error: " << SDL_GetError() << "\n";
			return 1;
		}

		SDL_Surface* _win_surface = SDL_GetWindowSurface(_window);

		if (_win_surface == NULL)
		{
			std::cout << "Could not get surface from the window: \n";
			std::cout << "SDL Error: " << SDL_GetError() << "\n";
			return 1;
		}

		SDL_UpdateWindowSurface(_window);

		while (shouldRun == true)
		{
			while (SDL_PollEvent(&sdl_event) > 0)
			{
				switch (sdl_event.type) 
				{
					case SDL_QUIT:
						if (closeOnQuit == true) { shouldRun = false; }
				}

				SDL_UpdateWindowSurface(_window);
			}
		}

		return 0;
	}
}