
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

    //std::shared_ptr<Overwrite> overwrite = std::make_shared<Overwrite>();
    //overwrite->Create();

    std::shared_ptr<BaseTS> baseTS = std::make_shared<BaseTS>();
    baseTS->Create();


    sceneManager->RegisterScene(baseTS);
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
