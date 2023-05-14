#include<iostream>
#include <string>
#include <vector>
#include<windows.h>

#include "color.h"
#include "warcaby.h"
#include "player.h"

//TODO: w zaleznosci oe wybranego kolor takiego kolopru ebda pionki

using namespace std;

int main() {
    Warcaby gra("Tom", 1, "Mark", 0);
    system("cls");

    gra.printScore();
    gra.printBoard();

    return 0;

}

