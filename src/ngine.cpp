#include <iostream>
#include "ngine.h"
#include "thread"
#include "chrono"

using namespace std::this_thread;
using namespace std::chrono;

namespace ngine
{
	SDL_Window* window::create(const char* title, int windowX, int windowY, int windowWidth, int windowHeight)
	{
		return SDL_CreateWindow(
			title,
			windowX,
			windowY,
			windowWidth,
			windowHeight,
			SDL_VIDEO_OPENGL
		);
	}


	void window::setFullscreenMode(SDL_Window* m_win, int fullscreen)
	{
		switch (fullscreen) {
		case 0:
			SDL_SetWindowFullscreen(m_win, 0);
		case 1:
			SDL_SetWindowFullscreen(m_win, SDL_WINDOW_FULLSCREEN);
		case 2:
			SDL_SetWindowFullscreen(m_win, SDL_WINDOW_FULLSCREEN_DESKTOP);
		default:
			SDL_SetWindowFullscreen(m_win, 0);
		}


	}

	void utils::wait(long timeInMillis)
	{
		std::this_thread::sleep_for(milliseconds(timeInMillis));
	}

	int utils::randInR(int rstart, int rend)
	{
		int randNum = rstart + std::rand() % rend;
		return randNum;
	}
}