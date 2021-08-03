#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

void displayRoom(const vector<char>& board);

void displayRoom(const vector<char>& board)
{
    cout << "\n\t" <<board[0] << " | " << board[1] << " | " << board[2];
    cout << "\n\t" << "Open the Dooor";
}