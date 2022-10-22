/*
Display Class
This is a wrapper object that contains both a Window and a Renderer, 
when creating graphics you should just need one of these to do all 
the jobs you need.

This should deal with text rendering too
*/

#pragma once
#include <SDL.h>
#include <SDL_image.h>
#include <SDL_ttf.h>

#include <list>

#include "Renderable.h"

class Display
{

	std::list<Renderable*> renderList;
	const char* title;

	int w_ = 0;
	int h_ = 0;

public:
	SDL_Window* window;
	SDL_Renderer* renderer;
	SDL_Color backgroundColor = {0, 0, 0, 255};

public:
	Display(int w, int h, const char* windowTitle, SDL_Color backgroundColor = { 0, 0, 0, 255 });
	static void init();
	static void exit();
	void RenderAll();
	void AddRenderable(Renderable *toAdd);
	void ProcessRender();
	void PrepareRender();
	void ClearRenderables();

	int w() const { return w_; }
	int h() const { return h_; }
};

