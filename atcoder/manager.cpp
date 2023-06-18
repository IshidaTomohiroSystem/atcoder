
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

    //std::shared_ptr<BaseTS> baseTS = std::make_shared<BaseTS>();
    //baseTS->Create();

    //std::shared_ptr<ReadingZero> readingZero = std::make_shared<ReadingZero>();
    //readingZero->Create();

    //std::shared_ptr<Stamp> stamp = std::make_shared<Stamp>();
    //stamp->Create();

    //std::shared_ptr<ChemicalsExplosion> chemicalsExplosion = std::make_shared<ChemicalsExplosion>();
    //chemicalsExplosion->Create();
    //
    //sceneManager->RegisterScene(chemicalsExplosion);

    std::shared_ptr<Snake> snake = std::make_shared<Snake>();
    snake->Create();

    sceneManager->RegisterScene(snake);
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
