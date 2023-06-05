//#pragma once


#ifndef _MANAGER_		// include guard
#define _MANAGER_

#include <iostream>
#include <memory>
#include "sceneManager.h"
#include "tictactoe.h"

class Manager
{
public:
	Manager();
	~Manager();

	void Initialize();
	void UnInitialize();
	void Update();
	void Draw();

private:
	std::unique_ptr<SceneManager> sceneManager;
};


#endif	// _MANAGER_