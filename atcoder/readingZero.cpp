#include "readingZero.h"

ReadingZero::ReadingZero()
{
}

ReadingZero::~ReadingZero()
{
}

void ReadingZero::Create()
{
	Initialize();
}

void ReadingZero::Initialize()
{

}

void ReadingZero::UnInitialize()
{
}

void ReadingZero::Update()
{
	std::string stringLineNum;
	int stringNum = 0;

	std::cout << "入力する文字列の数を入力" << std::endl;
	
	while (std::getline(std::cin, stringLineNum))
	{
		std::stringstream ss(stringLineNum);
		if (ss >> stringNum)
		{
			if (ss.eof())
			{   // Success
				break;
			}
		}
		std::cout << "Error!" << std::endl;
	}
	
	std::cout << "文字列を入力" << std::endl;
	
	for (int i = 0; i < stringNum; i++)
	{
		std::string inputString;
		std::cin >> inputString;
		inputList.push_back(inputString);
	}

	//inputList.push_back("2");
	//inputList.push_back("1");
	//inputList.push_back("01");
	//inputList.push_back("1");
	//inputList.push_back("0010");

	
	//inputList.push_back("1111111111111111111111");
	//inputList.push_back("00011111111111111111111");
	//inputList.push_back("000000111111111111111111");
	//inputList.push_back("0000000001111111111111111");
	//inputList.push_back("00000000000011111111111111");
	//inputList.push_back("000000000000000111111111111");

	std::sort(inputList.begin(), inputList.end(), Comp());

}

void ReadingZero::Draw()
{
	std::cin.get();

	std::cout << "Result" << std::endl;
	
	for (auto itr = inputList.begin(), end = inputList.end(); itr != end; ++itr)
	{
		std::cout << *itr << std::endl;
	}
	std::cin.get();

}
