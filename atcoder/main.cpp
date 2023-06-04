#include "main.h"

int main() 
{
    TicTacToe* tictoctoe = new TicTacToe();
    tictoctoe->Create();
    tictoctoe->InputGame();
    tictoctoe->Result();
    return 0;
}
