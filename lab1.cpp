#include"lab1.h"

bool Comparison(int a, int b)                 //функция сравнения чисел
{
    int mask = 1;
    bool more = false;
    for (int i = 31; i >= 0; i--)
    {
        if ((i == 31) && ((a & (mask << i)) > (b & (mask << i))))      //если число отрицательное
            break;
        else if ((a & (mask << i)) > (b & (mask << i)))      //если а больше b
        {
            more = true;
            break;
        }
        else if ((a & (mask << i)) < (b & (mask << i)))    //если b больше а
        {
            break;
        }
    }
    return more;
}

void Increase(int& c)  //функция увеличения числа на единицу
{
    int mask = 1;
    while ((int)c & mask)             //убираем крайние биты справа
    {
        c = c ^ mask;
        mask <<= 1;
    }
    c = c ^ mask;
}
