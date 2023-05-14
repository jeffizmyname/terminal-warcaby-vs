#include "player.h"


std::vector <std::vector <int>> pawns = {};
std::string name{ "player" };
int color{ 0 };

void Player::init(std::string pName, int pColor, std::vector <std::vector <int>> pPawns) {
    name = pName;
    color = pColor;
    std::vector <std::vector <int>> temp = pPawns;
    for (auto row : temp)
    {
        row.push_back(1);
        pawns.push_back(row);
    }
}

void Player::makeMove() {

}

std::string Player::getName() {
    return name;
}

std::string Player::getColor() {
    return color == 1 ? "white" : "black";
}


