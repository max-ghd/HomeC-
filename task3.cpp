#include <iostream>
#include <iomanip>
#include <Windows.h>
#include <cmath>
using namespace std;

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double a;
	cout << "����� ������� ���� � �������: ";
	cin >> a;

	int hryvnia = a;
	double kopijka = (a - hryvnia) * 100;
	cout << hryvnia << " ������� " << kopijka << " ������ ";


	return 0;
}