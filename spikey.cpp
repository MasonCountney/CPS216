// spikey.cpp 
// Mason Countney

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{

	for (int i = 0; i < 3; i++) {
		for (int j = 2; j >= i; j--)
			cout << " ";
		for (int j = 0; j <= i; j++)
			cout << "\\";
		for (int j = 0; j <= i; j++)
			cout << "/";

		cout << endl;
	}

	for (int k = 0; k < 3; k++) {
		for (int l = 0; l <= k; l++)
			cout << " ";
		for (int l = 2; l >= k; l--)
			cout << "/";
		for (int l = 2; l >= k; l--)
			cout << "\\";

		cout << endl;
	}

    return 0;
}

