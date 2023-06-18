//#pragma once

#ifndef _SNAKE_		// include guard
#define _SNAKE_

#include <iostream>
#include <vector>
#include <string>
#include "scene.h"


class Snake : public Scene
{
public:
	Snake();
	~Snake();

	void Create();

	class Position
	{
	public:
		Position() {
			x = 0;
			y = 0;
		}
		~Position() {}

		int x;
		int y;

	private:


	};
	class Test
	{
	public:
		Test(){
			count = 0;
		}
		~Test(){}

		int count;
		std::vector<Position> snakePos;

	private:

	};

private:
	void Initialize();
	void UnInitialize();
	void Update();
	void Draw();


	std::vector<std::string> squaresInSnake1;
	std::vector<std::string> squaresInSnake2;
	std::vector<std::string> squaresInSnake3;
	Test test1;
	Test test2;
	Test test3;
};


#endif	// _SNAKE_
