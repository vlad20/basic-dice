// dice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int roll(unsigned int a) {
	cout << ">>rolling<<" << endl;
	switch (a) {
	case 4:
		return (rand() % 4) + 1;
		break;
	case 6:
		return (rand() % 6) + 1;
		break;
	case 8:
		return (rand() % 8) + 1;
		break;
	case 10:
		return (rand() % 10) + 1;
		break;
	case 12:
		return (rand() % 12) + 1;
		break;
	case 100:
		return (rand() % 100) + 1;
		break;
	case 20:
		return (rand() % 20) + 1;
		break;
	default:
		cout << "Invalid format" << endl;

	}
	return 0;
}
unsigned int die=1;
int main()
{
	srand(time(0)); // initialize random number generator
	
		while (die != 0) {
			cout << "Enter your 1dx dice to roll..." << endl;
			cout << "1d";
			cin >> die;
			cout << ">>   "<<roll(die)<<"   <<"<< endl;
			cout << "To exit, press 0" << endl;
			cout << "================" << endl;
		}
	return 0;
	
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
