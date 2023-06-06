//#pragma once

#ifndef _BASE_TS_		// include guard
#define _BASE_TS_

#include <iostream>
#include <cmath>
#include <string>
#include <sstream>

#include "scene.h"

class BaseTS : public Scene
{
public:
	BaseTS();
	~BaseTS();

	void Create();
	void Initialize();
	void UnInitialize();
	void Update();
	void Draw();

	std::string changeBaseTS(int num);

private:
	std::string result;
};


#endif	// _BASE_TS_
