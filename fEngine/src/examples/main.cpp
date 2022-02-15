#include <iostream>
#include "fEngine.h"

int main(int argc, char** argv) {
	std::cout << fEngine::triedQuit;
	fEngine::initWindow("hi", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 500, 600, true);
	std::cout << fEngine::triedQuit;

	return 0;
}