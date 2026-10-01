#pragma once
#include <cmath>
#include <iostream>
#include <vector>
#include "Input/Input.h"

namespace Math
{
    int Reverse(int number, long double &result);
    double Divide(double FirstNumber, double SecondNumber, long double &result);
    double Percentage(double part, double whole, long double &result);
    double Sin(double Angle, long double &result);
    double Cos(double Angle, long double &result);
    double Tan(double Angle, long double &result);
    double ArcSin(double Angle, long double &result);
    double ArcCos(double Angle, long double &result);
    double ArcTan(double Angle, long double &result);
    double Sinh(double Value, long double &result);
    double Cosh(double Value, long double &result);
    double Tanh(double Value, long double &result);
    double ToRadians(double number, long double &result);
    double ToGradians(double number, long double &result);

    template <typename T>
    T Add(T FirstNumber, T SecondNumber, T &result)
    {
        result = FirstNumber + SecondNumber;
        return result;
    }

    template <typename T>
    T Subtract(T FirstNumber, T SecondNumber, T &result)
    {
        result = FirstNumber - SecondNumber;
        return result;
    }

    template <typename T>
    T Multiply(T FirstNumber, T SecondNumber, T &result)
    {
        result = FirstNumber * SecondNumber;
        return result;
    }

    template <typename T>
    T ChangeSign(T number, T &result)
    {
        result = -(number);
        return result;
    }

    template <typename T>
    T Square(T number, T &result)
    {
        result = (number * number);
        return result;
    }

    template <typename T>
    T Cube(T number, T &result)
    {
        result = number * number * number;
        return result;
    }

    template <typename T>
    T Log10(T number, T &result)
    {
        result = log10(number);
        return result;
    }

    template <typename T>
    T Ln(T number, T &result)
    {
        result = log(number);
        return result;
    }

    template <typename T>
    T Power(T Base, T Exponent, T &result)
    {
        result = pow(Base, Exponent);
        return result;
    }

    template <typename T>
    T Exp(T number, T &result)
    {
        result = exp(number);
        return result;
    }

    template <typename T>
    T SquareRoot(T number, T &result)
    {
        result = sqrt(number);
        return result;
    }

    template <typename T>
    T CubeRoot(T number, T &result)
    {
        result = cbrt(number);
        return result;
    }

    template <typename T>
    T NthRoot(T number, int n, T &result)
    {
        result = pow(number, 1.0 / n);
        return result;
    }

    template <typename T>
    T Average(T &FirstNumber, T &result)
    {
        std::cout << '\n'
                  << "Enter the number of values: ";
        std::cin >> FirstNumber;
        InputLimitDone(FirstNumber);
        bool Vaildinput{FirstNumber == 0};
        while (Vaildinput)
        {
            std::cerr << "[ERROR] Not be zero";
            std::cout << '\n'
                      << "Enter the number of values: ";
            std::cin >> FirstNumber;
            Vaildinput=FirstNumber == 0;
        }
        std::vector<double> number(FirstNumber);
        std::cout << '\n';
        for (int i{0}; i < FirstNumber; i++)
        {
            std::cout << "Enter number " << i + 1 << " : ";
            std::cin >> number[i];
            InputLimitDone(number[i]);
        }
        double sum{0};
        for (double value : number)
        {
            sum += value;
        }
        std::cout << '\n'
                  << "The result: ";
        result = sum / number.size();
        return result;
    }

    template <typename T>
    T Factorial(long long int number, T &result)
    {
        long long int sum{1};
        for (int i = 1; i < number + 1; i++)
        {
            sum *= i;
        }
        result = sum;
        return result;
    }
}
