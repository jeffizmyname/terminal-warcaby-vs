#pragma once
#include <vector>
#include <string>
#include <iostream>

class Player
{
private:
    std::vector <std::vector <int>> pawns;
    std::string name;
    int color;

public:
    Player() {};
    void init(std::string pName, int pColor, std::vector <std::vector <int>> pPawns);

    void makeMove();

    std::string getName();
    std::string getColor();
};

