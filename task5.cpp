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

	cout << "�����  ������ ������� �������: ";
	cin >> god1;

	cout << "�����  ������� ������� �������: ";
	cin >> chwyl1;

	cout << "�����  ������� ������� �������: ";
	cin >> secund1;

	cout << "�����  ������  ���� �������: ";
	cin >> god2;

	cout << "�����  �������  ���� �������: ";
	cin >> chwyl2;

	cout << "�����  ������� ���� �������: ";
	cin >> secund2;

	cout << "������� �������: " << god1 << ":" << chwyl1 << ":" << secund1 << endl;
	cout << "ʳ���� �������: " << god2 << ":" << chwyl2 << ":" << secund2 << endl;

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