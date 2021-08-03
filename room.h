#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

void displayRoom(const vector<char>& board);

void displayRoom(const vector<char>& board)
{
    cout << "\n\t" <<board[0] << "Go Straight" << board[1] << "Open The door" << board[2];
    cout << "\n\t" << "Choose Your options: ";
    cout <<"\n\t" << board[3] << "Go left" <<board[4]<<"  Use the Elevator"<<board[5];
    cout <<"\n\t" <<"Choose your options: ";
    cout <<"\n\t" <<board[6] << "Head for the Ground floor" <<board[7] << "Go right"<<board[8];
    cout <<"\n\t" << "Choose your options: ";
    cout << "\n\t" <<board[9] << "If you see a way out" << board[10] << "Approach it straight away" << board[11];
    cout <<"\n\t" << "Choose Your options: ";
    cout << "\n\t" <<board[12] << "Go right" << board[13] << "There's a window" << board[14];
    cout <<"\n\t" << "Choose Your options: ";
    cout << "\n\t" <<board[15] << "Jump out of the window" << board[16] << "Go right" << board[17];
    cout <<"\n\t" << "Choose Your options: ";
    cout << "\n\t" <<board[18] << "You will see a fire " << board[19] << "The first exit is displayed on the left hand side" << board[20];
    cout <<"\n\t" << "Congratulations you've escaped";
    



}