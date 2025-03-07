#include <iostream>
#include <iomanip>
#include <Windows.h>
#include <cmath>
using namespace std;

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	long double merkurij = 3.3011e23;
	cout << "Маса Меркурія: " << merkurij << endl;

	long double venera = 4.8675e24;
	cout << "Маса Венери: " << venera << endl;

	long double zemlya = 5.9724e24;
	cout << "Маса Землі: " << zemlya << endl;

	long double mars = 6.4171e23;
	cout << "Маса Марсу: " << mars << endl;

	long double yupiter = 1.8982e27;
	cout << "Маса Юпітеру: " << yupiter << endl;

	long double saturn = 5.6834e26;
	cout << "Маса Сатурну: " << saturn << endl;

	long double uran = 8.6810e25;
	cout << "Маса Урану: " << uran << endl;

	long double neptun = 1.0241e26;
	cout << "Маса Нептуну: " << neptun << endl << "\n";

	long double serednia = merkurij + venera + zemlya + mars + yupiter + saturn + uran + neptun / 8;
	cout << "Середня арифм. маса планет: " << serednia << "\n";

	long double zagalna = merkurij + venera + zemlya + mars + yupiter + saturn + uran + neptun;
	cout << "Загальна маса всіх планет: " << zagalna << endl << "\n";

	cout << "Відсоткові відношення" << endl << "\n";

	long double proc_merkur = merkurij / zagalna * 100;
	cout << proc_merkur << endl;

	long double proc_ven = venera / zagalna * 100;
	cout << proc_ven << endl;

	long double proc_zem = zemlya / zagalna * 100;
	cout << proc_merkur << endl;

	long double proc_mars = mars / zagalna * 100;
	cout << proc_mars << endl;

	long double proc_yupiter = yupiter / zagalna * 100;
	cout << proc_yupiter << endl;

	long double proc_saturn = saturn / zagalna * 100;
	cout << proc_saturn << endl;

	long double proc_uran = uran / zagalna * 100;
	cout << proc_uran << endl;

	long double proc_nep = neptun / zagalna * 100;
	cout << proc_nep << endl << "\n";

	long double masa_planet = zagalna - yupiter;
	long double masa_yupiter = yupiter / masa_planet;
	cout << "У " << masa_yupiter << " разів маса юпітеру більше ніж сума всіх інших мас планет";









	return 0;

}