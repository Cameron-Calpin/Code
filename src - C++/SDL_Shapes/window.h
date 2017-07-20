/*
 * window.h
 *
 *  Created on: Jun 28, 2017
 *      Author: cam
 */
#include <string>
#include <stdio.h>
#include <iostream>
#include <SDL2/SDL.h>

using namespace std;

class Window {
public:
	Window(const string &title, int width, int height);
	~Window();

	inline bool isClosed() const {
		return _closed;
	}

private:
	bool init();

private:
	string _title;
	int _width = 800;
	int _height = 600;

	bool _closed = false;

	SDL_Window* _window = nullptr;
};
