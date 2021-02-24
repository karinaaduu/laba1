#include"lab1.h"

bool Comparison(int a, int b)                 //������� ��������� �����
{
    int mask = 1;
    bool more = false;
    for (int i = 31; i >= 0; i--)
    {
        if ((i == 31) && ((a & (mask << i)) > (b & (mask << i))))      //���� ����� �������������
            break;
        else if ((a & (mask << i)) > (b & (mask << i)))      //���� � ������ b
        {
            more = true;
            break;
        }
        else if ((a & (mask << i)) < (b & (mask << i)))    //���� b ������ �
        {
            break;
        }
    }
    return more;
}

void Increase(int& c)  //������� ���������� ����� �� �������
{
    int mask = 1;
    while ((int)c & mask)             //������� ������� ���� ������
    {
        c = c ^ mask;
        mask <<= 1;
    }
    c = c ^ mask;
}
