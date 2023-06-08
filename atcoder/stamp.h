//#pragma once

#ifndef _STAMP_		// include guard
#define _STAMP_

#include <iostream>
#include <vector>

#include "scene.h"


class Stamp : public Scene
{
public:
	Stamp();
	~Stamp();

	void Create();
	void Initialize();
	void UnInitialize();
	void Update();
	void Draw();

private:
	void StampRotate(int count);
	void JudgeStampSize();

	std::vector<std::vector<std::string>> quares;
	std::vector<std::vector<std::string>> stampBottom;

};


#endif	// _STAMP_
