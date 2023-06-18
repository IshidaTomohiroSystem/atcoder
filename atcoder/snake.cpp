#include "snake.h"

Snake::Snake()
{
}

Snake::~Snake()
{
}

void Snake::Create()
{
	Initialize();
}

void Snake::Initialize()
{
	// test 1
	std::string square1 = "##.";
	std::string square2 = ".##";
	std::string square3 = "###";

	squaresInSnake1.push_back(square1);
	squaresInSnake1.push_back(square2);
	squaresInSnake1.push_back(square3);


	// test 2
	std::string square4 = "####";
	std::string square5 = "####";
	std::string square6 = ".#..";

	squaresInSnake2.push_back(square4);
	squaresInSnake2.push_back(square5);
	squaresInSnake2.push_back(square6);


	// test 3
	std::string square7 = ".##";
	std::string square8 = "###";
	std::string square9 = "###";

	squaresInSnake3.push_back(square7);
	squaresInSnake3.push_back(square8);
	squaresInSnake3.push_back(square9);
}

void Snake::UnInitialize()
{
}

void Snake::Update()
{
	// test 1
	for (int i = 0; i< squaresInSnake1.size(); i++)
	{
		for (int j = 0; j < squaresInSnake1[i].size(); j++)
		{
			if (squaresInSnake1[i].substr(j, 1) == "#")
			{
				test1.count++;
				Position pos;
				pos.x = i + 1;
				pos.y = j + 1;
				test1.snakePos.push_back(pos);
			}
		}
	}

	// test 2
	for (int i = 0; i < squaresInSnake2.size(); i++)
	{
		for (int j = 0; j < squaresInSnake2[i].size(); j++)
		{
			if (squaresInSnake2[i].substr(j, 1) == "#")
			{
				test2.count++;
				Position pos;
				pos.x = i + 1;
				pos.y = j + 1;
				test2.snakePos.push_back(pos);
			}
		}
	}

	// test 3
	for (int i = 0; i < squaresInSnake3.size(); i++)
	{
		for (int j = 0; j < squaresInSnake3[i].size(); j++)
		{
			if (squaresInSnake3[i].substr(j, 1) == "#")
			{
				test3.count++;
				Position pos;
				pos.x = i + 1;
				pos.y = j + 1;
				test3.snakePos.push_back(pos);
			}
		}
	}
}

void Snake::Draw()
{
	// test 1
	std::cout << "snake Test1:" << test1.count << std::endl;

	for (auto snakePos : test1.snakePos)
	{
		std::cout << "x:" << snakePos.x;
		std::cout << " y:" << snakePos.y << std::endl;
	}
	std::cout << std::endl;

	// test 2
	std::cout << "snake Test2:" << test2.count << std::endl;
	for (auto snakePos : test2.snakePos)
	{
		std::cout << "x:" << snakePos.x;
		std::cout << " y:" << snakePos.y << std::endl;
	}
	std::cout << std::endl;

	// test3
	std::cout << "snake Test3:" << test3.count << std::endl;
	for (auto snakePos : test3.snakePos)
	{
		std::cout << "x:" << snakePos.x;
		std::cout << " y:" << snakePos.y << std::endl;
	}
	std::cin.get();
}
