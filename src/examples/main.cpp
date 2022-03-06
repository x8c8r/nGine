#include <iostream>
#include <ngine.h>
#include <random>


int main(int argc, char** argv) {
	using namespace ngine;
	SDL_Window* win = nullptr;
	win = window::create("yo", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600);
	window::setFullscreenMode(win, 0);
	SDL_Renderer* rend = SDL_CreateRenderer(win, -1, 0);
	while (true)
	{
		SDL_SetRenderDrawColor(rend, 255, 0, 0, 255);
		SDL_RenderDrawLine(rend, 0, 0, utils::randInR(0, 800), utils::randInR(0, 600));
		SDL_SetRenderDrawColor(rend, 0, 0, 0, 255);
		SDL_RenderPresent(rend);
		utils::wait(500);
		SDL_RenderClear(rend);
	}

	return 0;
}