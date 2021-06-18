#include <iostream>
#include <string>
using namespace std;

int main() {
	// the main data type 
	string name;
	int choice;
	char quit;
	bool off;

	cout<<"Type in your name: "<<endl;
	cin>>name;

	cout << "hello " << name <<"  This will be an adventure text game."<<endl;

	cout<<"Type in your choice: "<<endl;
	cin>>choice;

	// The options before starting the game.
	if (choice == 1){
		cout << "lets start the game!";
	}

	if (choice == 2){
		cout <<"This will go to the help page";
	}
	if (choice == 3){
		cout << "Do you want to quit? ";
		char quit = 'n';
		while(quit == 'n'){
			cout <<"Press y to quit"<<endl;
			cout<< "Press n to cancel"<<endl;
			cout<<"Options is yours (y/n)"<<endl;
			cin>>quit;
		}


	}

	cout <<"Hope you liked the game!";
	return 0;
}