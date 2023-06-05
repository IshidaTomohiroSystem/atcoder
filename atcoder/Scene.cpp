#include "scene.h"

std::vector<Scene> Scene::sceneList;

Scene::Scene()
{
}

Scene::~Scene()
{
}

void Scene::UpdateAll(void)
{
	for (int i = 0; i < sceneList.size(); i++)
	{
		sceneList[i].Update();
	}
}

void Scene::DrawAll(void)
{
	for (int i = 0; i < sceneList.size(); i++)
	{
		sceneList[i].Draw();
	}
}

//void Scene::ReleaseAll(void)
//{
//	for (int i = 0; i < sceneList.size(); i++)
//	{
//		sceneList[i].Release();
//	}
//}
//
//void Scene::Release(void)
//{
//}
