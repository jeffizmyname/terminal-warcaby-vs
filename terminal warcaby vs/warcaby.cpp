#include <iostream>
#include "warcaby.h"
#include "color.h"

Warcaby::Warcaby(std::string p1Name, int p1Color, std::string p2Name, int p2Color) {
    player1.init(p1Name, p1Color, p1Color == 1 ? white : black);
    player2.init(p2Name, p2Color, p2Color == 1 ? white : black);
}
void Warcaby::printScore() {
    std::cout << board[0][0];
    std::cout << "player 1: " + player1.getName() << " as " << player1.getColor() << " " << "player 2: " << player2.getName() << " as " << player2.getColor() << std::endl;
}

void Warcaby::printBoard() {
    for (int i = 0; i <= 8; i++)
    {
        for (int j = 0; j <= 8; j++)
        {
            //numeracja
            if (j == 0) {
                std::cout << dye::white_on_grey(" " + board[i][0]+ " ");
                continue;
            }
            if (i == 8) {
                std::cout << dye::white_on_grey(board[8][j]);
                continue;
            }

            //niepodzielne
            if (j % 2 == 0 && i % 2 == 0)
            {
                std::cout << dye::white_on_black(board[i][j]);
            }

            if (j % 2 != 0 && i % 2 == 0)
            {
                std::cout << dye::black_on_white(board[i][j]);
            }

            //podzielne               
            if (j % 2 != 0 && i % 2 != 0)
            {
                std::cout << dye::white_on_black(board[i][j]);
            }

            if (j % 2 == 0 && i % 2 != 0)
            {
                std::cout << dye::black_on_white(board[i][j]);
            }
        }
        std::cout << "\n";
    }
}

std::vector <std::vector <int>> Warcaby::getWhite() {
    return white;
}

std::vector <std::vector <int>> Warcaby::getBlack() {
    return black;
}
