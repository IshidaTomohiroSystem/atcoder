
#include "manager.h"


Manager::Manager()
{
	sceneManager = std::make_unique<SceneManager>();
}

Manager::~Manager()
{
}

void Manager::Initialize()
{
    //std::shared_ptr<TicTacToe> tictoctoe = std::make_shared<TicTacToe>();
    //tictoctoe->Create();

    std::shared_ptr<Overwrite> overwrite = std::make_shared<Overwrite>();
    overwrite->Create();

    sceneManager->RegisterScene(overwrite);
}

void Manager::UnInitialize()
{
}

void Manager::Update()
{
    sceneManager->UpdateAll();
}

void Manager::Draw()
{
    sceneManager->DrawAll();
}
