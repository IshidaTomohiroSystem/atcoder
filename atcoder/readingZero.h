//#pragma once

#ifndef _READING_ZERO_		// include guard
#define _READING_ZERO_

#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>

#include "scene.h"

class ReadingZero : public Scene
{
public:
	ReadingZero();
	~ReadingZero();

	void Create();
	void Initialize();
	void UnInitialize();
	void Update();
	void Draw();

private:
	std::vector<std::string> inputList;
	std::string result;
};



class Comp {
public:
	bool operator() (std::string lh, std::string rh) {
		bool result = false;
		if (lh != rh)
		{
			std::string hNumstring = GetNumberString(lh);
			std::string rNumstring = GetNumberString(rh);

			int hDigit = hNumstring.size();
			int rDigit = rNumstring.size();
			if (hNumstring.size() == rNumstring.size()) {
				int loopMax = hNumstring.size();
				int hNum = 0;
				int rNum = 0;
				for (int i = 0; i < loopMax; i++)
				{

					hNum = GetDigitNumber(hNumstring.substr(i, 1));
					rNum = GetDigitNumber(rNumstring.substr(i, 1));

					if (hNum != rNum) {
						break;
					}
					else {
						result = CountZero(lh) > CountZero(rh);
					}
				}
				if (hNum < rNum) {
					result = hNum < rNum;
				}
			}
			else
			{
				result = hDigit < rDigit;
			}
		}

		return result;
	}

private:
	int CountZero(std::string string)
	{
		int count = 0;
		for (char c : string) {
			if (c == '0')
			{
				count++;
			}
			else {
				break;
			}
		}
		return count;
	}

	std::string GetNumberString(std::string string)
	{
		int count = CountZero(string);
		std::string result = string.erase(0, count);
		return result;
	}

	int GetDigitNumber(std::string string)
	{
		std::istringstream ss;

		ss = std::istringstream(string);

		int num = atoi(string.c_str());
		ss >> num;

		return num;
	}
};


#endif	// _READING_ZERO_
