//#pragma once

#ifndef _TICTACTOE_H_		// include guard
#define _TICTACTOE_H_

#include <iostream>
#include <List>
#include<memory>

using string = std::string;

#define CROSS "x"
#define CIRCLE "o"
#define GAMECOUNT 5
class TicTacToe
{
public:
	TicTacToe();
	~TicTacToe();

	void Create();
	void Initialize();
	void InputGame();
	void Result();
private:

	string CircleCrossGameInput;
	string CircleCrossGameResult;
};





#endif	// _TICTACTOE_H_