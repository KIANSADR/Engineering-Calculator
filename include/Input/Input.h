#pragma once
#include <iostream>
#include "Out/Out.hpp"
#include "Log/Log.h"

bool InputLimit();

template <typename T>
void InputLimitDone(T &number)
{
    bool Limit{InputLimit()};
    while (Limit)
    {
        WrongLog();
        std::cin >> number;
        Limit = InputLimit();
    }
}

template <typename T>
void InputTwo(T &FirstNumber, T &SecondNumber)
{
    std::cout << '\n'
              << "Enter the first number: ";
    std::cin >> FirstNumber;
    InputLimitDone(FirstNumber);
    std::cout << "Enter the second number: ";
    std::cin >> SecondNumber;
    InputLimitDone(SecondNumber);
    std::cout << '\n'
              << "The result is: ";
}

template <typename T>
void InputDivid(T &FirstNumber, T &SecondNumber, bool &value)
{
    std::cout << '\n'
              << "Enter the first number: ";
    std::cin >> FirstNumber;
    InputLimitDone(FirstNumber);
    std::cout << "Enter the second number: ";
    std::cin >> SecondNumber;
    InputLimitDone(SecondNumber);
    value = ((std::abs(SecondNumber)) < (1e-9));
    while (value)
    {
        void ZeroLog();
        std::cin >> SecondNumber;
        value = ((std::abs(SecondNumber)) < (1e-9));
    }
    std::cout << '\n'
              << "The result is: ";
}

template <typename T>
void InputPercentage(T &FirstNumber, T &SecondNumber, bool &value)
{
    std::cout << '\n'
              << "Enter part: ";
    std::cin >> FirstNumber;
    InputLimitDone(FirstNumber);
    std::cout << "Enter whole: ";
    std::cin >> SecondNumber;
    InputLimitDone(SecondNumber);
    value = (SecondNumber == 0);
    while (value)
    {
        ZeroLog1();
        std::cin >> SecondNumber;
        value = (SecondNumber == 0);
    }
    std::cout << '\n'
              << "The result is: ";
}

template <typename T>
void InputOne(T &FirstNumber)
{
    std::cout << '\n'
              << "Enter the number: ";
    std::cin >> FirstNumber;
    InputLimitDone(FirstNumber);
    std::cout << '\n'
              << "The result is: ";
}

template <typename T>
void InputArcSinAndCos(T &FirstNumber, bool &value)
{
    std::cout << '\n'
              << "Enter the number: ";
    std::cin >> FirstNumber;
    InputLimitDone(FirstNumber);
    value = (FirstNumber < (-1)) || (FirstNumber > 1);
    while (value)
    {
        RangeLog();
        std::cin >> FirstNumber;
        value = (FirstNumber < (-1)) || (FirstNumber > 1);
    }
    std::cout << '\n'
              << "The result is: ";
}

template <typename T>
void InputLog10AndLog(T &FirstNumber, bool &value)
{
    std::cout << '\n'
              << "Enter the number: ";
    std::cin >> FirstNumber;
    InputLimitDone(FirstNumber);
    value = ((FirstNumber < 0) || (FirstNumber == 0));
    while (value)
    {
        ZeroLog2();
        std::cin >> FirstNumber;
        value = ((FirstNumber < 0) || (FirstNumber == 0));
    }
    std::cout << '\n'
              << "The result is: ";
}

template <typename T>
void InputPower(T &FirstNumber, T &SecondNumber)
{
    std::cout << '\n'
              << "Enter number: ";
    std::cin >> FirstNumber;
    InputLimitDone(FirstNumber);
    std::cout << "Enter Power: ";
    std::cin >> SecondNumber;
    InputLimitDone(SecondNumber);
    std::cout << '\n'
              << "The result is: ";
}

template <typename T>
void InputSquareRoot(T &FirstNumber, bool &value)
{
    std::cout << '\n'
              << "Enter the number: ";
    std::cin >> FirstNumber;
    InputLimitDone(FirstNumber);
    value = FirstNumber < 0;
    while (value)
    {
        NegativeLog();
        std::cin >> FirstNumber;
        value = FirstNumber < 0;
    }
    std::cout << '\n'
              << "The result is: ";
}

template <typename T>
void InputFactorial(T &FirstNumber, bool &value)
{
    std::cout << '\n'
              << "Enter the number: ";
    std::cin >> FirstNumber;
    InputLimitDone(FirstNumber);
    value = FirstNumber < 0;
    while (value)
    {
        ZeroLog2();
        std::cin >> FirstNumber;
        value = FirstNumber < 0;
    }
    std::cout << '\n'
              << "The result is: ";
}

template <typename T>
void MenuInput(T &FirstNumber, bool &value1, bool &value2)
{
    std::cout << '\n'
              << "Enter choice: ";
    std::cin >> FirstNumber;
    value1 = OutOfRange(FirstNumber, 31, 0);
    value2 = InputLimit();
    while ((value1) || (value2))
    {
        WrongLog();
        std::cin >> FirstNumber;
        value1 = OutOfRange(FirstNumber, 31, 0);
        value2 = InputLimit();
    }
}

template <typename T>
void InputAgain(T &FirstNumber, bool &value1, bool &value2, bool &value3)
{
    std::cout << '\n'
              << '\n';
    std::cout << "Do you want to try again? [1=y/2=N]: ";
    std::cin >> FirstNumber;
    std::cout << '\n';
    value1 = OutOfRange(FirstNumber, 2, 1);
    value2 = InputLimit();
    while ((value1) || (value2))
    {
        std::cout << '\n';
        WrongLog();
        std::cin >> FirstNumber;
        value1 = OutOfRange(FirstNumber, 2, 1);
        value2 = InputLimit();
    }
    if (FirstNumber == 2)
    {
        value3 = 0;
    }
}
