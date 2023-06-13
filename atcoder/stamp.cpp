#include "stamp.h"
#define VALID "#"
#define INVALID "."
#define ROTATEMAX 4
#define YES "Yes"
#define NO "No"


Stamp::Stamp()
{
}

Stamp::~Stamp()
{
}

void Stamp::Create()
{
	Initialize();
}

void Stamp::Initialize()
{
	judge = false;
}

void Stamp::UnInitialize()
{
}

void Stamp::Update()
{
	std::vector<std::string> line1;
	line1.push_back(INVALID);
	line1.push_back(INVALID);
	
	std::vector<std::string> line2;
	line2.push_back(INVALID);
	line2.push_back(VALID);
	
	std::vector<std::string> line3;
	line3.push_back(VALID);
	line3.push_back(VALID);
	
	std::vector<std::string> line4;
	line4.push_back(VALID);
	line4.push_back(VALID);
	
	std::vector<std::string> line5;
	line5.push_back(INVALID);
	line5.push_back(INVALID);
	
	
	stampBottom.push_back(line1);
	stampBottom.push_back(line2);
	stampBottom.push_back(line3);
	stampBottom.push_back(line4);
	stampBottom.push_back(line5);
	
	
	std::vector<std::string> squreLine1;
	squreLine1.push_back(INVALID);
	squreLine1.push_back(INVALID);
	
	std::vector<std::string> squreLine2;
	squreLine2.push_back(INVALID);
	squreLine2.push_back(INVALID);
	
	std::vector<std::string> squreLine3;
	squreLine3.push_back(INVALID);
	squreLine3.push_back(VALID);
	
	std::vector<std::string> squreLine4;
	squreLine4.push_back(INVALID);
	squreLine4.push_back(INVALID);
	
	std::vector<std::string> squreLine5;
	squreLine5.push_back(INVALID);
	squreLine5.push_back(INVALID);
	
	
	quares.push_back(squreLine1);
	quares.push_back(squreLine2);
	quares.push_back(squreLine3);
	quares.push_back(squreLine4);
	quares.push_back(squreLine5);

	//std::vector<std::string> line1;
	//line1.push_back(INVALID);
	//line1.push_back(INVALID);
	//line1.push_back(VALID);
	//line1.push_back(VALID);
	//line1.push_back(INVALID);
	//
	//std::vector<std::string> line2;
	//line2.push_back(INVALID);
	//line2.push_back(VALID);
	//line2.push_back(VALID);
	//line2.push_back(VALID);
	//line2.push_back(INVALID);
	//
	//stampBottom.push_back(line1);
	//stampBottom.push_back(line2);
	//
	//
	//std::vector<std::string> squreLine1;
	//squreLine1.push_back(INVALID);
	//squreLine1.push_back(INVALID);
	//squreLine1.push_back(INVALID);
	//squreLine1.push_back(INVALID);
	//squreLine1.push_back(INVALID);
	//
	//std::vector<std::string> squreLine2;
	//squreLine2.push_back(INVALID);
	//squreLine2.push_back(INVALID);
	//squreLine2.push_back(VALID);
	//squreLine2.push_back(INVALID);
	//squreLine2.push_back(INVALID);
	//
	//
	//quares.push_back(squreLine1);
	//quares.push_back(squreLine2);


	JudgeStampSize();

	bool collision = false;
	for (int rotateCount = 0; rotateCount < ROTATEMAX; rotateCount++)
	{
		if (stampBottom.size() > quares.size())
		{
			collision = true;
		}
		else
		{
			for (int i = 0; i <= quares.size() - stampBottom.size(); i++)
			{
				if (stampBottom[0].size() > quares[0].size())
				{
					collision = true;
				}
				else
				{
					for (int j = 0; j <= quares[i].size() - stampBottom[i].size(); j++)
					{
						for (int k = 0; k < stampBottom.size(); k++)
						{
							for (int l = 0; l < stampBottom[k].size(); l++)
							{
								if (stampBottom[k][l] == VALID && quares[k + i][l + j] == VALID)
								{
									collision = true;
								}
							}
						}
						if (collision == false)
						{
							break;
						}
					}
				}
				
				if (collision == false)
				{
					break;
				}
			}
		}
		
		if (collision == false)
		{
			judge = true;
			break;
		}
		else
		{
			StampRotate(1);
			collision = false;
		}
	}
	
	std::cout << std::endl;
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
	
	for (auto i : quares)
	{
		for (auto j : i)
		{
			std::cout << j.c_str();
		}
		std::cout << std::endl;
	}
	
	if (judge == true)
	{
		std::cout << YES << std::endl;
	}
	else
	{
		std::cout << NO << std::endl;
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
