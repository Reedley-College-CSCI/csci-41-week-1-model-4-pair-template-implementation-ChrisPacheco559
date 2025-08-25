#include <iostream>

using namespace std;

//Prototype functions
void printMusicMenu();

int main() {

	int choice;

	do {
		cout << "Welcome to the Music dataset!" << endl;
		cout << endl; // Print blank space
		printMusicMenu();
		cin >> choice;

	} while (choice != 3);

	return 0;
}

void printMusicMenu() {
	cout << "Select option:" << endl;
	cout << endl; // Print blank space
	cout << "#1: add music" << endl;
	cout << "#2: remove music" << endl;
	cout << "#3: Quit the program\n";
}
