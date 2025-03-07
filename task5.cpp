#include <iostream>
#include <iomanip>
#include <Windows.h>
#include <cmath>
using namespace std;

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	const int ch = 15;
	int god1;
	int chwyl1;
	int secund1;
	int god2;
	int chwyl2;
	int secund2;

	cout << "¬веди  годину початку розмови: ";
	cin >> god1;

	cout << "¬веди  хвилину початку розмови: ";
	cin >> chwyl1;

	cout << "¬веди  секунду початку розмови: ";
	cin >> secund1;

	cout << "¬веди  годину  к≥нц€ розмови: ";
	cin >> god2;

	cout << "¬веди  хвилину  к≥нц€ розмови: ";
	cin >> chwyl2;

	cout << "¬веди  секунду к≥нц€ розмови: ";
	cin >> secund2;

	cout << "ѕочаток розмови: " << god1 << ":" << chwyl1 << ":" << secund1 << endl;
	cout << " ≥нець розмови: " << god2 << ":" << chwyl2 << ":" << secund2 << endl;

	int pochatok = god1 * 3600 + chwyl1 * 60 + secund1;
	int kinec = god2 * 3600 + chwyl2 * 60 + secund2;

	int zagalno = kinec - pochatok;
	cout << zagalno << endl;

	double chwylyna3 = zagalno / 60;
	cout << chwylyna3 << endl;


	double znyato = chwylyna3 * ch;
	cout << znyato;








	return 0;
}