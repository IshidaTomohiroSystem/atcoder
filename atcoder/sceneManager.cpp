#include "sceneManager.h"


SceneManager::SceneManager()
{
}

SceneManager::~SceneManager()
{
}


void SceneManager::RegisterScene(std::shared_ptr<Scene> scene)
{
	sceneList.push_back(scene);
}

void SceneManager::UpdateAll(void)
{
	for (int i = 0; i < sceneList.size(); i++)
	{
		sceneList[i]->Update();
	}
}

void SceneManager::DrawAll(void)
{
	for (int i = 0; i < sceneList.size(); i++)
	{
		sceneList[i]->Draw();
	}
}