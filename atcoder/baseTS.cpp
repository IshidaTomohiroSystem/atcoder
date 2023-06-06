#include "baseTS.h"

#define BASE_NUMBER 36

BaseTS::BaseTS()
{
}

BaseTS::~BaseTS()
{
}

void BaseTS::Create()
{
	result = "";
}

void BaseTS::Initialize()
{
}

void BaseTS::UnInitialize()
{
}

void BaseTS::Update()
{
	std::cout << "please number" << std::endl;

	std::string line;
	int num;
	while (std::getline(std::cin, line))
	{
		std::stringstream ss(line);
		if (ss >> num)
		{
			if (ss.eof())
			{   // Success
				break;
			}
		}
		std::cout << "Error!" << std::endl;
	}


	int exponentiation = 0;
	int calBase = BASE_NUMBER;

	for (;;)
	{
		if ((num / calBase) >= 1)
		{
			exponentiation++;
			calBase = calBase * BASE_NUMBER;
		}
		else
		{
			break;
		}
	}

	for (;;)
	{
		int calDigit = std::pow(BASE_NUMBER, exponentiation);
		int digit = num / calDigit;
		std::string resultChar = changeBaseTS(digit);
		result = result + resultChar;
		num = num - calDigit * digit;
		exponentiation--;
		if (exponentiation < 0)
		{
			break;
		}
	}
	//std::cin.get();
}

void BaseTS::Draw()
{
	std::cout << "answer: " << result << std::endl;
	std::cin.get();
}

std::string BaseTS::changeBaseTS(int num)
{
	std::string resultChar;

	switch (num)
	{
	case 0:
		resultChar = "0";
		break;
	case 1:
		resultChar = "1";
		break;
	case 2:
		resultChar = "2";
		break;
	case 3:
		resultChar = "3";
		break;
	case 4:
		resultChar = "4";
		break;
	case 5:
		resultChar = "5";
		break;
	case 6:
		resultChar = "6";
		break;
	case 7:
		resultChar = "7";
		break;
	case 8:
		resultChar = "8";
		break;
	case 9:
		resultChar = "9";
		break;
	case 10:
		resultChar = "A";
		break;
	case 11:
		resultChar = "B";
		break;
	case 12:
		resultChar = "C";
		break;
	case 13:
		resultChar = "D";
		break;
	case 14:
		resultChar = "E";
		break;
	case 15:
		resultChar = "F";
		break;
	case 16:
		resultChar = "G";
		break;
	case 17:
		resultChar = "H";
		break;
	case 18:
		resultChar = "I";
		break;
	case 19:
		resultChar = "J";
		break;
	case 20:
		resultChar = "K";
		break;
	case 21:
		resultChar = "L";
		break;
	case 22:
		resultChar = "M";
		break;
	case 23:
		resultChar = "N";
		break;
	case 24:
		resultChar = "O";
		break;
	case 25:
		resultChar = "P";
		break;
	case 26:
		resultChar = "Q";
		break;
	case 27:
		resultChar = "R";
		break;
	case 28:
		resultChar = "S";
		break;
	case 29:
		resultChar = "T";
		break;
	case 30:
		resultChar = "U";
		break;
	case 31:
		resultChar = "V";
		break;
	case 32:
		resultChar = "W";
		break;
	case 33:
		resultChar = "X";
		break;
	case 34:
		resultChar = "Y";
		break;
	case 35:
		resultChar = "Z";
		break;

	default:
		break;
	}
	return resultChar;
}
