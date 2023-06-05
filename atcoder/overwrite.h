#pragma once
#ifndef _OVERWRITE_
#define _OVERWRITE_

#include <iostream>
#include <string>
#include <algorithm>

#include "scene.h"

class Overwrite : public Scene
{
public:
	Overwrite();
	virtual ~Overwrite();

	void Create();

	void Initialize();
	void UnInitialize();
	void Update();
	void Draw();
private:
	std::string inputString;
	std::string outputString;

protected:
};


#endif //_OVERWRITE_