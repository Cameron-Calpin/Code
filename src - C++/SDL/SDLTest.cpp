// Example program:
// Using SDL2 to create an application window

#include <SDL2/SDL.h>
#include <stdio.h>

const int SCREEN_WIDTH  = 1024;
const int SCREEN_HEIGHT = 768;

int main(int argc, char* argv[]) {

	// The windows we'll be rendering to
    SDL_Window* window = NULL;

    // The surface contained by the window
    SDL_Surface* screenSurface = NULL;

    // The image we will load and show on the screen
    SDL_Surface* image = NULL;

    // Initialize SDL
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
    	printf("SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
    }

    else {
		// Create an application window with the following settings:
		window = SDL_CreateWindow(
			"An SDL2 window",                  // window title
			SDL_WINDOWPOS_UNDEFINED,           // initial x position
			SDL_WINDOWPOS_UNDEFINED,           // initial y position
			SCREEN_WIDTH,                               // width, in pixels
			SCREEN_HEIGHT,                               // height, in pixels
			SDL_WINDOW_OPENGL                  // flags - see below
		);
		// Check that the window was successfully created
		if (window == NULL) {
		    // In the case that the window could not be made...
		    printf("Could not create window: %s\n", SDL_GetError());
		    return 1;
		}

		else {
			// Get window surface
			screenSurface = SDL_GetWindowSurface(window);

			// Fill the surface white
			SDL_FillRect(screenSurface, NULL, SDL_MapRGB(screenSurface->format, 0xFF, 0xFF, 0xFF));

			// Update the surface
			SDL_UpdateWindowSurface(window);

			// Wait two seconds
			SDL_Delay(2000);
		}
    }

    // Create a black square
    //SDL_Rect rect = {0, 0, 100, 100}
    //SDL_FillRect(screenSurface, &rect, SDL_MapRGP(screenSurface->format, 0x00, 0x00, 0x00));

    // Close and destroy the window
    SDL_DestroyWindow(window);

    // Clean up
    SDL_Quit();
    return 0;
}

