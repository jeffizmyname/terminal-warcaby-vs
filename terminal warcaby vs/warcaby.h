#pragma once
#include <vector>
#include <string>
#include <iostream>
#include "player.h"

class Warcaby {
private:

    int currentMove = 1;

    Player player1;
    Player player2;

    std::vector <std::vector <int>> white = {
        {5, 1},
        {5, 3},
        {5, 5},
        {5, 7},
        {6, 0},
        {6, 2},
        {6, 4},
        {6, 6},
        {7, 1},
        {7, 3},
        {7, 5},
        {7, 7},
    };
    std::vector <std::vector <int>> black = {
        {0, 0},
        {0, 2},
        {0, 4},
        {0, 6},
        {1, 1},
        {1, 3},
        {1, 5},
        {1, 7},
        {2, 0},
        {2, 2},
        {2, 4},
        {2, 6},
    };
    std::vector <std::vector <std::string>> board = {
        {"1","[B]","   ","[B]","   ","[B]","   ","[B]","   "},
        {"2","   ","[B]","   ","[B]","   ","[B]","   ","[B]"},
        {"3","[B]","   ","[B]","   ","[B]","   ","[B]","   "},
        {"4","   ","   ","   ","   ","   ","   ","   ","   "},
        {"5","   ","   ","   ","   ","   ","   ","   ","   "},
        {"6","   ","[W]","   ","[W]","   ","[W]","   ","[W]"},
        {"7","[W]","   ","[W]","   ","[W]","   ","[W]","   "},
        {"8","   ","[W]","   ","[W]","   ","[W]","   ","[W]"},
        {" "," A "," B "," C "," D "," E "," F "," G "," H "}
    };

public:

    Warcaby() {};
    Warcaby(std::string p1Name, int p1Color, std::string p2Name, int p2Color);

    void printScore();
    void printBoard();

    std::vector <std::vector <int>> getWhite();
    std::vector <std::vector <int>> getBlack();
};

