#pragma once

namespace ngine {

	class window {
	public:
		SDL_Window* m_window;
		SDL_Surface* m_win_surface;
		SDL_Event m_event;
		/*Initialize a new window
		* const char* title :											Title of the window
		* int screenX :	                                                Initial horizontal location of the window when it gets created
		* int screenY :	                                                Initial vertical location of the window when it gets created
		* int windowWidth :												Width of the window when it gets created
		* int windowHeight :	                                            Height of the window when it gets created
		* bool closeOnQuit :                                            Should the window close when the user tries to quit it
		*/
		void initWindow(const char* title, int screenX, int screenY, int windowWidth, int windowHeight, bool closeOnQuit);

	};
}
