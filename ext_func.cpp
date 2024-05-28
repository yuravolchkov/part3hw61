#include "ext_func.h"
#include <iostream>
#include <cmath>

inline void addition(int& Num1, int& Num2)
{
    std::cout << "\n ���� ������� " << Num1 << " � " << Num2 << " ,�� ��������� ����� ����� " << Num1 + Num2 << std::endl;
}

inline void subtraction(int& Num1, int& Num2)
{
    std::cout << "\n ���� �� " << Num1 << " ������� " << Num2 << " ,�� ��������� ����� ����� " << Num1 - Num2 << std::endl;
}

inline void multiplication(int& Num1, int& Num2)
{
    std::cout << "\n ���� �������� " << Num1 << " � " << Num2 << " ,�� ��������� ����� ����� " << Num1 * Num2 << std::endl;
}

inline void division(int& Num1, int& Num2)
{
    if (Num2 != 0)
    {
        std::cout << "\n ���� " << Num1 << " ��������� �� " << Num2 << " ,�� ��������� ����� ����� " << Num1 / Num2 << std::endl;
    }
    else
    {
        std::cout << "\n �� ���� ������ ������" << std::endl;
    }
}

inline void exponentiation(int& Num1, int& Num2)
{
    std::cout << "\n ���� " << Num1 << " �������� � ������� " << Num2 << " ,�� ��������� ����� ����� " << pow(Num1, Num2) << std::endl;
}