#include "ext_func.h"
#include <iostream>
#include <cmath>

inline void addition(int& Num1, int& Num2)
{
    std::cout << "\n Если сложить " << Num1 << " и " << Num2 << " ,то результат будет равен " << Num1 + Num2 << std::endl;
}

inline void subtraction(int& Num1, int& Num2)
{
    std::cout << "\n Если из " << Num1 << " вычесть " << Num2 << " ,то результат будет равен " << Num1 - Num2 << std::endl;
}

inline void multiplication(int& Num1, int& Num2)
{
    std::cout << "\n Если умножить " << Num1 << " и " << Num2 << " ,то результат будет равен " << Num1 * Num2 << std::endl;
}

inline void division(int& Num1, int& Num2)
{
    if (Num2 != 0)
    {
        std::cout << "\n Если " << Num1 << " разделить на " << Num2 << " ,то результат будет равен " << Num1 / Num2 << std::endl;
    }
    else
    {
        std::cout << "\n На нуль делить нельзя" << std::endl;
    }
}

inline void exponentiation(int& Num1, int& Num2)
{
    std::cout << "\n Если " << Num1 << " возвести в степерь " << Num2 << " ,то результат будет равен " << pow(Num1, Num2) << std::endl;
}