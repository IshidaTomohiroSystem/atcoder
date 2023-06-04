
#include "tictactoe.h"

TicTacToe::TicTacToe()
{
}

TicTacToe::~TicTacToe()
{
}

void TicTacToe::Create()
{
	Initialize();
}

void TicTacToe::Initialize()
{
}

void TicTacToe::InputGame()
{
	while (true)
	{
		CircleCrossGameInput.clear();
		std::cout << "oxƒQ[ƒ€‚ÌŒ‹‰Ê‚ðo‚©x‚Å“ü—Í‚µAEnter‚ð‰Ÿ‚µ‚Ä‚­‚¾‚³‚¢" << std::endl;
		std::cin >> CircleCrossGameInput;
		int count = 0;
		if (CircleCrossGameInput.size() == 5)
		{
			for (int i = 0; i < GAMECOUNT; i++)
			{
				if (CircleCrossGameInput.substr(i, 1) == "o" || CircleCrossGameInput.substr(i, 1) == "x")
				{
					count++;
				}
			}
			if (count == 5)
			{
				std::cin.get();
				break;
			}
		}
		else
		{
			std::cout << "“ü—Í‚·‚éŒÂ”‚Í" << GAMECOUNT << "‚Å‚·" << std::endl;
		}
	}
}

void TicTacToe::Result()
{
	bool winO = false;
	bool winX = false;
	for (int i = 0; i < GAMECOUNT - 2; i++)
	{
		if (CircleCrossGameInput.substr(i, 3) == "ooo")
		{
			winO = true;
		}
		else if (CircleCrossGameInput.substr(i, 3) == "xxx")
		{
			winX = true;
		}
	}

	if (winO == true)
	{
		std::cout << "win: " << CIRCLE << std::endl;
	}

	else if (winX == true)
	{
		std::cout << "win: " << CROSS << std::endl;
	}

	else
	{
		std::cout << "draw" << std::endl;
	}


	std::cin.get();
}
