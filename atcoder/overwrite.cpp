#include "overwrite.h"

Overwrite::Overwrite()
{
}

Overwrite::~Overwrite()
{
}

void Overwrite::Create()
{
	Initialize();
}

void Overwrite::Initialize()
{
}

void Overwrite::UnInitialize()
{
}

void Overwrite::Update()
{
    std::cout << "文字列を入力し、Enterを押してください" << std::endl;
    std::cin >> inputString;
    std::string chars = inputString.substr(0, 1);

    for (int i = 0; i < inputString.size(); i++)
    {
        std::string chars = inputString.substr(i, 1);
        for (char c : chars) {
            outputString.erase(std::remove(outputString.begin(), outputString.end(), c), outputString.end());
        }
        outputString = outputString + chars;
    }

    std::cin.get();

}

void Overwrite::Draw()
{
    std::cout << outputString;
    std::cin.get();
}
