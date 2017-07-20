#include "window.h"
#include <stdio.h>
#include <iostream>

using namespace std;

Window::Window(const string &title, int width, int height) :
	_title(title), _width(width), _height(height) {

	if (!init()) {
		_closed = true;
	}
}

Window::~Window() {
	SDL_DestroyWindow(_window);
	SDL_Quit();
}

bool Window::init() {
	if (SDL_Init(SDL_INIT_VIDEO) != 0) {
		cerr << "Failed to initialize SDL.\n";
		return 0;
	}

	_window = SDL_CreateWindow(
			_title.c_str(),
			SDL_WINDOWPOS_CENTERED,
			SDL_WINDOWPOS_CENTERED,
			_width, _height,
			SDL_WINDOW_RESIZABLE);

	if (_window == nullptr) {
		cerr << "Failed to create window.\n";
		return 0;
	}

	return true;
}

