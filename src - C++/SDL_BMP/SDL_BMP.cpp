/* SDL_BMP.cpp
 *
 *  Created on: Jun 28, 2017
 *      Author: Cameron Calpin
 */
#include <SDL2/SDL.h>
#include <stdio.h>
#include <iostream>

using namespace std;

// Starts up SDL and creates window
bool init();

// Loads media
bool loadMedia();

// Frees media and shuts down SDL
void close();

SDL_Window* gWindow = NULL;
SDL_Surface* gScreenSurface = NULL;
SDL_Surface* gHelloWorld = NULL;

const int SCREEN_WIDTH  = 1024;
const int SCREEN_HEIGHT = 768;

bool init() {
	// Initialization flag
	bool success = true;

	// Initialization SDL
	if (SDL_Init(SDL_INIT_VIDEO) < 0) {
		printf("SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
		success = false;
	}
	else {
		// Create Window
		gWindow = SDL_CreateWindow("SDL Tutorial",
									SDL_WINDOWPOS_UNDEFINED,
									SDL_WINDOWPOS_UNDEFINED,
									SCREEN_WIDTH,
									SCREEN_HEIGHT,
									SDL_WINDOW_SHOWN);
		if (gWindow == NULL) {
			printf("Window could not be created! SDL_Error: %s\n", SDL_GetError());
			success = false;
		}
		else {
			// Get window surface
			gScreenSurface = SDL_GetWindowSurface(gWindow);
		}
	}
	return success;
}

bool loadMedia() {
	// Loading success flag
	bool success = true;

	// Load splash image
	gHelloWorld = SDL_LoadBMP("astronaut.bmp");
	if (gHelloWorld == NULL) {
		printf("Unable to load image %s! SDL Error: %s\n", "astronaut.bmps", SDL_GetError());
	}
	return success;
}

void close() {
	// Deallocate surface
	SDL_FreeSurface(gHelloWorld);
	gHelloWorld = NULL;

	// Destroy window
	SDL_DestroyWindow(gWindow);
	gWindow = NULL;

	// Quit SDL subsystems
	SDL_Quit();
}

int main(int argc, char* args[]) {
	// Start up SDL and create window
	if (!init()) {
		printf("Failed to initialize!");
	}
	else {
		// Load Media
		if (!loadMedia()) {
			printf("Failed to load media!\n");
		}
		else {
			// Apply the image
			SDL_BlitSurface(gHelloWorld, NULL, gScreenSurface, NULL);

			// Update the surface
			SDL_UpdateWindowSurface(gWindow);

			// Wait two seconds
			SDL_Delay(5000);
		}
	}

	close();
	return 0;
}




