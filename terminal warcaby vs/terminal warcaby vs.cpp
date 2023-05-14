#include<iostream>
#include <string>
#include <vector>
#include<windows.h>

#include "color.h"
#include "warcaby.h"
#include "player.h"



//TODO: w zaleznosci oe wybranego kolor takiego kolopru ebda pionki

using namespace std;
/*
class Player {
private:
    vector <vector <int>> pawns = {};
    string name{ "player" };
    int color{ 0 };

public:
    Player() {};
    void init(string pName, int pColor, vector <vector <int>> pPawns) {
        name = pName;
        color = pColor;
        vector <vector <int>> temp = pPawns;
        for (auto row: temp)
        {
            row.push_back(1);
            pawns.push_back(row);
        }
    }

    string getName() {
        return name;
    }

    string getColor() {
        return color == 1 ? "white" : "black";
    }

};


class Warcaby {
private:

    Player player1;
    Player player2;

    vector <vector <int>> white = {
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
    vector <vector <int>> black = {
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
    string board[8][8] = {
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
    Warcaby(string p1Name, int p1Color, string p2Name, int p2Color) {
        player1.init(p1Name, p1Color, p1Color == 1 ? white : black);
        player2.init(p2Name, p2Color, p1Color == 1 ? white : black);
    }
    void printScore() {
        cout << "player 1: " + player1.getName() << " as " << player1.getColor() << " " << "player 2: " << player2.getName() << " as " << player2.getColor() << endl;
    }

    void printBoard() {
        for (int i = 1; i <= 8; i++)
        {
            for (int j = 1; j <= 8; j++)
            {
                //niepodzielne
                if (j % 2 == 0 && i % 2 == 0)
                {
                    cout << dye::white_on_black(board[i - 1][j - 1]);
                }

                if (j % 2 != 0 && i % 2 == 0)
                {
                    cout << dye::black_on_white(board[i - 1][j - 1]);
                }

                //podzielne               
                if (j % 2 != 0 && i % 2 != 0)
                {
                    cout << dye::white_on_black(board[i - 1][j - 1]);
                }

                if (j % 2 == 0 && i % 2 != 0)
                {
                    cout << dye::black_on_white(board[i - 1][j - 1]);
                }
            }
            cout << "\n";
        }
    }

    vector <vector <int>> getWhite() {
        return white;
    }

    vector <vector <int>> getBlack() {
        return black;
    }
};
*/






int main() {
    Warcaby gra("Tom", 1, "Mark", 0);
    system("cls");

    gra.printScore();
    gra.printBoard();

    return 0;

}

