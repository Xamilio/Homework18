﻿#include <iostream>
using namespace std;

const int Size = 9;

void sum(int num[])
{
    float nul = 0;
    for (int i = 0; i < Size; i++)
    {
            nul = nul + num[i];
    }
    nul = nul / Size;
    cout << "Cредние арифметическое элементов масива: " << nul << "\n";
}

int main()
{
    setlocale(LC_ALL, "");
    int num[Size]{ 2, 3, 5, 7, 87, 34, 54, 786, 2 };
    for (int i = 0; i < Size; i++) 
    {
        cout << num[i] << " ";
    }
    cout << "\n";

    sum(num);
}

//void ot(int num[])
//{
//    int ot = 0;
//    for (int i = 0; i < Size; i++)
//    {
//        if (num[i] < 0)
//        {
//            ot = ot + 1;
//        }
//    }
//    cout << "Количество отрецательных элементов: " << ot << "\n";
//}
//void pl(int num[])
//{
//    int pl = 0;
//    for (int i = 0; i < Size; i++)
//    {
//        if (num[i] > 0)
//        {
//            pl = pl + 1;
//        }
//    }
//    cout << "Количество положительных элементов: " << pl << "\n";
//}
//void nul(int num[])
//{
//    int nul = 0;
//    for (int i = 0; i < Size; i++)
//    {
//        if (num[i] == 0)
//        {
//            nul = nul + 1;
//        }
//    }
//    cout << "Количество нулевых элементов: " << nul << "\n";
//}
//
//int main()
//{
//    setlocale(LC_ALL, "");
//    int num[Size]{ 2, -3, 3, 5, 87, 0, -5, 5, -82 };
//    for (int i = 0; i < 9; i++) 
//    {
//        cout << num[i] << " ";
//    }
//    cout << "\n";
//
//    ot(num);
//    pl(num);
//    nul(num);
//}
