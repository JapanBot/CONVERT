
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main() {

	double RUBLE;
	double RATE;
	double EURO;
	double RATE;

	const int COLMFT1 = 35;
	const int COLMFT2 = 15;

	cout << fixed << setprecision(2);

	cout << "WELCOME DADDY" << endl;

	cout << "ENTER a value (RATE): ";
	cin >> RATE;
	cout << endl;

	cout << setw(COLMFT1) << left << "ENTER a value (RUBLE): ";
	cin >> RUBLE;
	cout << endl;


	cout << setw(COLMFT1) << left << "RUBLE: ";
	cout << setw(COLMFT1) << right << RUBLE << endl;

	cout << setw(COLMFT1) << left << "Conversion rate (RUBLE): ";
	cout << setw(COLMFT1) << right << RATE << endl;

	EURO = RUBLE * RATE;

	cout << setw(COLMFT1) << left << "EURO: ";
	cout << setw(COLMFT1) << right << EURO << endl;

	cout << "\n--------------------------- " << endl;
	cout << "\n END OF RATE CONVERTER" << endl;

	system("pause>nul");
	return 0;
}
