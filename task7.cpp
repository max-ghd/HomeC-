#include <iostream>
#include <iomanip>
#include <Windows.h>
#include <cmath>
using namespace std;

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int a = 357;
	int b = 702;

	int pershe = a / 100;
	cout << pershe << endl;
	int druge = (a / 10) % 10;
	cout << druge << endl;
	int trete = a % 10;
	cout << trete;

	cout << endl << "\n";

	int pershe1 = b / 100;
	cout << pershe1 << endl;
	int druge1 = (b / 10) % 10;
	cout << druge1 << endl;
	int trete1 = b % 10;
	cout << trete1 << "\n\n";

	int chyslo1 = pershe * 100 + druge1 * 10 + trete;
	cout << chyslo1 << "\n";
	int chyslo = pershe1 * 100 + druge * 10 + trete;
	cout << chyslo << "\n";



	return 0;
}