//to check your reponse in the room.

//
int room_Display(int answer);


int room_Display(int answer){

    cout << "You see a door on  your left, are you going left  or right\n";
    cout <<"You reach the elevator are you going left or right\n";
    cout <<"You are in the ground floor are you going left or right\n";
    cout <<"You come through and see and exit on the left are you going to use left or right?\n";
    cout << "There's a window on your right are you going left or right\n";
    cout << "You can jump on the left wall, are you going left or right\n";
    cout << "The escape room is on the right, are you going right or left\n";

    cin >> answer;

    return answer;
};