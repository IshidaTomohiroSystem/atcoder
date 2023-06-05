//#pragma once


#ifndef _SCENE_MANAGER_		// include guard
#define _SCENE_MANAGER_

#include <iostream>
#include <vector>
#include <memory>
#include "scene.h"

class SceneManager
{
public:
	SceneManager();
	~SceneManager();

	void RegisterScene(std::shared_ptr<Scene> scene);

	void UpdateAll();
	void DrawAll();

private:
	std::vector<std::shared_ptr<Scene>> sceneList;
};


#endif	// _SCENE_MANAGER_