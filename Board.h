#pragma once  

#include <string>
using std::string;

class Board {

    int board[10][10];
    

public:
    Board();
    int(*getBoard())[10];
    void setNewShip(int startRowIDX, int startColIDX, int len, char direc);
    string toString();

};