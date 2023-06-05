#include "main.h"


int main() 
{
    SetConsoleOutputCP(CP_UTF8);
    setvbuf(stdout, nullptr, _IOFBF, 1024);


    std::unique_ptr<Manager> manager = std::make_unique<Manager>();
    manager->Initialize();

    // update
    manager->Update();

    // draw
    manager->Draw();

    return 0;
}
