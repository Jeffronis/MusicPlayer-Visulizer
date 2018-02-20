#pragma once
#include<iostream>

using namespace std;

char menu()
{
	char userChoice = 'a';
	do
	{
		cout << "Choose one from the options below." << endl << endl;
		cout << "1 - Play " << endl;
		cout << "2 - next " << endl;
		cout << "3 - Quit" << endl;
		cin >> userChoice;
		cin.ignore();

		if (userChoice != '1' && userChoice != '2' && userChoice != '3') {
			cout << endl;
			cout << "Worng entry try again" << endl;
			system("pause");
		}

	} while (userChoice != '1' && userChoice != '2' && userChoice != '3');

	return userChoice;
}