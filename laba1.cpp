#include"lab1.h"

int main()
{
    cout << "Input a number a: ";
    int a,b,c;
    cin >> a;
    cout << "Input a number b: ";
    cin >> b;
    cout << "Input a number c, which will increase by one: ";
    cin >> c;
    if (Comparison(a, b))     //сравнение двух чисел
        cout << "Number a > b" << endl;
    else
        cout << "Number a is not more than b" << endl;
    Increase(c);             //увеличение на единицу
        cout << "The value of the number after increasing by one c=" <<c<< endl;
    system("pause");
    return 0;
}

