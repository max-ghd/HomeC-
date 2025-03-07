#include <iostream>
#include <iomanip>
#include <Windows.h>
#include <cmath>
using namespace std;

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double a;
	cout << "Введи дробову суму в гривнях: ";
	cin >> a;

	int hryvnia = a;
	double kopijka = (a - hryvnia) * 100;
	cout << hryvnia << " Гривень " << kopijka << " Копійок ";


	return 0;
}