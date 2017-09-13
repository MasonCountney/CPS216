// victoryIsMine.cpp
// Mason Countney

#include <iostream>
#include <string>

using namespace std;

void top(string input);
void bottom(string input);
void phrase(string input);

int main()
{
	string input;

	cout << "Enter phrase here: ";
	getline(cin, input);

	phrase(input);

    return 0;
}

void top(string input) {
	for (int i = 0; i < (input.length() + 6); i++)
		cout << "/";

	cout << endl;
}

void bottom(string input) {
	for (int i = 0; i < (input.length() + 6); i++)
		cout << "\\";

	cout << endl;
}

void phrase(string input) {
	top(input);
	cout << "|| " << input << " ||" << endl;
	bottom(input);
}
