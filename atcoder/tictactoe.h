//#pragma once

#ifndef _TICTACTOE_H_		// include guard
#define _TICTACTOE_H_

#include <iostream>
#include <List>
#include "scene.h"

class TicTacToe : public Scene
{
public:
	TicTacToe();
	~TicTacToe();
	//TicTacToe(Scene _amount) : TicTacToe{} {};

	void Create();
	void Initialize();
	void UnInitialize();
	void Update();
	void Draw();

	void InputGame();
	void Result();
private:

	std::string CircleCrossGameInput;
	std::string CircleCrossGameResult;
};





#endif	// _TICTACTOE_H_