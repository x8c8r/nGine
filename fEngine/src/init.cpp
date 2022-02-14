#include <iostream>
#include "fEngine.h"
namespace fEngine {
	SDL_Window* _window = NULL;
	SDL_Surface* _window_surface = SDL_GetWindowSurface(_window);

	bool initWindow(const char* title, int x, int y, int w, int h)
	{
		_window = SDL_CreateWindow(title, x, y, w, h, SDL_WINDOW_OPENGL);

		SDL_UpdateWindowSurface(_window);

		SDL_Delay(3000);

		return true;
	}
}