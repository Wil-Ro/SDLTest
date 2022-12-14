#pragma once

#include <SDL.h>
#include <SDL_image.h>

#pragma message("compiled renderable")


class Renderable
{
protected:

	SDL_Texture* texture;
	SDL_Rect location;
public:

	virtual void RenderCall(SDL_Renderer* renderer);

	virtual void AddTexture(SDL_Renderer* renderer, const char* fileName);
	virtual SDL_Texture* GetTexture();

	virtual void CenterTexture(SDL_Rect rect);
	virtual void SetLocation(SDL_Rect rect);
	virtual void ShiftLocation(SDL_Rect rect);

	int zOrder = 0;
};

