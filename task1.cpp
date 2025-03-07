

#include <iostream>
#include <iomanip>
#include <Windows.h>

int main()
{

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    const float PI = 3.14;
    int x;
    float y;
    float c;
    cout << "Введи радіус окружності: \n";
    cin >> x;
    cout << "Площа окружності\n";
    y = PI * x * x;
    cout << y << endl;
    cout << "Довжина окружності\n";
    c = 2 * PI * x;
    cout << c;


    return 0;


}

