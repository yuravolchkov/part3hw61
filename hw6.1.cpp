#include <iostream>
#include "ext_func.h"

int main()
{
    setlocale(LC_ALL, "Russian"); // задать русский текст
    std::system("chcp 1251"); // настроить кодировку консоли
    std::system("cls"); // очистить экран

    int Num1, Num2, Selector;

    std::cout << "Введите первое число: ";
    std::cin >> Num1;

    std::cout << "Введите второе число: ";
    std::cin >> Num2;
    
    std::cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
    std::cin >> Selector;

    switch (Selector)
    {
    case 1: 
        addition(Num1, Num2);
        break;
    case 2:
        subtraction(Num1, Num2);
        break;
    case 3:
        multiplication(Num1, Num2);
        break;
    case 4:
        division(Num1, Num2);
        break;
    case 5:
        exponentiation(Num1, Num2);
        break;
    }
    return 61;
}

