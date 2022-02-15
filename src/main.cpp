#include <iostream>
#include "fEngine.h"

#undef main

int main(int argc, char** argv) 
{
	fEngine::initWindow("hi", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 500, 600, true);
	return 0;
}