/*	DnD 5th Edition Character Sheet Generator, V02

	David Tebo
	Last Update: 03/18/21
	
	Now that I better know what I'm doing in C++ I'm going to restart this project
	from the ground up. Let's a go.
	
	*/

#include "Header.h"

using namespace std;

int main() {

	int selection = 0;


	cout << "\n\n\tWelcome!! To the new and improved DnD Character Sheet Generator 2.0";
	cout << "\n\n\tWhat would you like to do?";
	cout << "\n\t[1] Generate a Character Sheet";
	cout << "\n\n\t";

	cin >> selection;

	while (selection < 1 || selection > 1) {
		cout << "\n\n\tPlease input a valid selection: [1]";
		cout << "\n\n\tand then ENTER";

		cin >> selection;
	}






	return 0;
}