#include "intro.h"
#include "room.h"
#include "pmove.h"
#include "askOption.h"

const char Right = 'R';
const char Left = 'L';
const char EMPTY = ' ';
const char Straight = 'S';
const char TIE = 'T';
    const char NO_ONE = 'N';;

void displayRoom(const vector<char>& board);

int main() {

    Intro wel;
    wel.hello();
    const int NUM_WAYS = 8;
    vector<char> board(NUM_WAYS, EMPTY);
    

    displayRoom(board);

    return 0;
}