#pragma once
#include "SDL.h"
namespace ngine 
{
	class window {
		private:
			SDL_Window* m_window;
			SDL_Surface* m_win_surface;
			SDL_Event m_event;
		public:
			/* Initialize a new window
			* const char* title :											Title of the window
			* int screenX :	                                                Initial horizontal location of the window when it gets created
			* int screenY :	                                                Initial vertical location of the window when it gets created
			* int windowWidth :												Width of the window when it gets created
			* int windowHeight :	                                            Height of the window when it gets created
			*/
			static SDL_Window* create(const char* title, int windowX, int windowY, int windowWidth, int windowHeight);

			/* Sets the fullscreen mode for a window
			* SDL_Window* m_win :											Window to set the mode for
			* int fullscreen :												Fullscreen mode(0 - Windowed, 1 - Fullscreen, 2 - Borderless Fullscreen
			*/
			static void setFullscreenMode(SDL_Window* m_win, int fullscreen);

		};

	class utils {
		private:
		public:
			static void wait(long timeInMillis);
			// Returns a random number in a range
			static int randInR(int rstart, int rend);

	};
}
