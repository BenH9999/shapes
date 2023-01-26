#include <SDL2/SDL.h>
#include <vector>

class Screen {
	SDL_Event e;
	SDL_Window* window;
	SDL_Renderer* renderer;
	std::vector<SDL_FPoint> points;

public:
	Screen() {
		SDL_Init(SDL_INIT_VIDEO);
        window = SDL_CreateWindow("Shapes",0,0,640 * 1.5, 480 * 1.5,0);
		renderer = SDL_CreateRenderer(window,-1,0);
		SDL_RenderSetScale(renderer, 1.5, 1.5);
	}

	void pixel(float x, float y) {
		SDL_FPoint p={ x,y };
		points.push_back(p);
	}

	void show() {
		SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
		SDL_RenderClear(renderer);

		SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
		for (auto& point : points) {
			SDL_RenderDrawPointF(renderer, point.x, point.y);
		}

		SDL_RenderPresent(renderer);
	}

	void clear() {
		points.clear();
	}

	void input() {
		while (SDL_PollEvent(&e)) {
			if (e.type == SDL_QUIT) {
				SDL_Quit();
				exit(0);
			}
		}
	}

};
