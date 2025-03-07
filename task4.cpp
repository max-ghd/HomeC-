#include <iostream>
#include <iomanip>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double a;
    cout << "¬веди час у секундах: ";
    cin >> a;

    cout << "дн€ ";
    int dni = a / 21600;
    cout << dni << "\n";

    cout << "godin ";
    int godyna = a / 3600;
    cout << godyna << "\n";

    cout << "chwilin ";
    int chwylyna = 60 / godyna;
    cout << chwylyna << endl;

    cout << "secund";
    int secunda = 60 / chwylyna;
    cout << secunda;





    return 0;
}