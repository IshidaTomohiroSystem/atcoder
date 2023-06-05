#pragma once
#ifndef _SCENE_
#define _SCENE_

#include <iostream>
#include <vector>

class Scene
{
public:
	Scene();
	virtual ~Scene();

	virtual void Initialize(){}
	virtual void UnInitialize() = 0;
	virtual void Update() = 0;
	virtual void Draw() = 0;
private:


protected:
};


#endif