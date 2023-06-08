#include "stamp.h"
#define VALID "#"
#define INVALID "."


Stamp::Stamp()
{
}

Stamp::~Stamp()
{
}

void Stamp::Create()
{
}

void Stamp::Initialize()
{
}

void Stamp::UnInitialize()
{
}

void Stamp::Update()
{
	std::vector<std::string> line1;
	line1.push_back(VALID);
	line1.push_back(INVALID);
	line1.push_back(VALID);

	std::vector<std::string> line2;
	line2.push_back(VALID);
	line2.push_back(VALID);
	line2.push_back(VALID);
		
	std::vector<std::string> line3;
	line3.push_back(INVALID);
	line3.push_back(INVALID);
	line3.push_back(INVALID);

	stampBottom.push_back(line1);
	stampBottom.push_back(line2);
	stampBottom.push_back(line3);

	JudgeStampSize();
	StampRotate(0);
}

void Stamp::Draw()
{
	for (auto i : stampBottom)
	{
		for (auto j : i)
		{
			std::cout << j.c_str();
		}
		std::cout << std::endl;
	}

	std::cin.get();
}

void Stamp::StampRotate(int count)
{
	for (int rotateCount = 0; rotateCount < count; rotateCount++)
	{
		std::vector<std::vector<std::string>> tempstampBottom;
		tempstampBottom.resize(stampBottom[0].size());

		for (int i = 0; i < tempstampBottom.size(); i++)
		{
			std::vector<std::string> tempLine;
			tempLine.resize(stampBottom.size());
			tempstampBottom[i] = tempLine;
		}

		for (int i = 0; i < tempstampBottom.size(); i++)
		{
			int count = 0;
			for (int j = tempstampBottom[i].size() - 1; j >= 0; j--)
			{
				tempstampBottom[i][count] = stampBottom[j][i];
				count++;
			}
		}

		stampBottom.clear();
		stampBottom.shrink_to_fit();
		stampBottom = tempstampBottom;
	}
}

void Stamp::JudgeStampSize()
{
	bool eraseLeft = true;
	bool eraseRight = true;
	bool eraseUpper = true;
	bool eraseLower = true;

	for(auto itr = stampBottom.begin(), end = stampBottom.end(); end != itr; ++itr)
	{
		auto line = *itr;
		if (line[0] == VALID)
		{
			eraseLeft = false;
		}
		if (line[line.size() - 1] == VALID)
		{
			eraseRight = false;
		}

		if (itr == stampBottom.begin())
		{
			for (auto column : line)
			{
				if (column == VALID)
				{
					eraseUpper = false;
				}
			}
		}

		if (itr == stampBottom.end() - 1)
		{
			for (auto column : line)
			{
				if (column == VALID)
				{
					eraseLower = false;
				}
			}
		}
	}

	std::vector<std::vector<std::string>> tempstampBottom;
	if (eraseLeft == true)
	{
		for (auto line : stampBottom)
		{
			line.erase(line.begin());
			line.shrink_to_fit();
			tempstampBottom.push_back(line);
		}

		stampBottom.clear();
		stampBottom.shrink_to_fit();
		stampBottom = tempstampBottom;
	}

	tempstampBottom.clear();
	tempstampBottom.shrink_to_fit();
	if (eraseRight == true)
	{
		for (auto itr = stampBottom.begin(), end =stampBottom.end(); end != itr; ++itr)
		{
			auto line = *itr;
			line.erase(line.end() - 1);
			line.shrink_to_fit();
			tempstampBottom.push_back(line);
		}

		stampBottom.clear();
		stampBottom.shrink_to_fit();
		stampBottom = tempstampBottom;
	}

	if (eraseUpper == true)
	{
		stampBottom.erase(stampBottom.begin());
		stampBottom.shrink_to_fit();
	}

	if (eraseLower == true)
	{
		stampBottom.erase(stampBottom.end() - 1);
		stampBottom.shrink_to_fit();
	}
}
