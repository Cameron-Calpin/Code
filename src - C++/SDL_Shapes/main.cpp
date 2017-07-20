/*
 * main.cpp
 *
 *  Created on: Jun 28, 2017
 *      Author: cam
 */
#include <iostream>
#include <SDL2/SDL.h>
#include "window.h"

int main(int argc, char** argv) {

	Window window("SDL Window", 800, 600);

	while (!window.isClosed()) {

	}

	return 0;
}



