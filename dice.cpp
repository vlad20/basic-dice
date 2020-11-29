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
