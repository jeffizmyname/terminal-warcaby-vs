#pragma once
#include <vector>
#include <string>
#include <iostream>
#include "player.h"

class Warcaby {
private:

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
        {"[B]","   ","[B]","   ","[B]","   ","[B]","   "},
        {"   ","[B]","   ","[B]","   ","[B]","   ","[B]"},
        {"[B]","   ","[B]","   ","[B]","   ","[B]","   "},
        {"   ","   ","   ","   ","   ","   ","   ","   "},
        {"   ","   ","   ","   ","   ","   ","   ","   "},
        {"   ","[W]","   ","[W]","   ","[W]","   ","[W]"},
        {"[W]","   ","[W]","   ","[W]","   ","[W]","   "},
        {"   ","[W]","   ","[W]","   ","[W]","   ","[W]"},
    };

public:

    Warcaby() {};
    Warcaby(std::string p1Name, int p1Color, std::string p2Name, int p2Color);

    void printScore();
    void printBoard();

    std::vector <std::vector <int>> getWhite();
    std::vector <std::vector <int>> getBlack();
};

