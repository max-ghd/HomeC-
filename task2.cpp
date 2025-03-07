#include <iostream>
#include <iomanip>
#include <Windows.h>
using namespace std;

int main()
{

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    //int a = 12;
    //int b = 13;
    //int c = 0;

    //c = a;// c 12
    //a = b; // a 13
    //b = c;

    //cout << a << endl;
    //cout << b << endl;

    int a = 10;
    int b = 11;

    a = b + a;
    b = a - b;
    a = a - b;


    cout << a << endl;
    cout << b;





    return 0;
}