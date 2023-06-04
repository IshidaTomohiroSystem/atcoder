
#include "HelloWorld.h"


HelloWorld::HelloWorld()
{
}

HelloWorld::~HelloWorld()
{

}
void HelloWorld::Draw()
{
	std::string HelloWorld = "HelloWorld";
	std::cout << HelloWorld << std::endl;
	std::cout << "please push Enter" << std::endl;
	std::cin.get();
}
