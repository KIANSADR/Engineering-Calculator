#include <iostream>
#include <cmath>
#include <numbers>
#include "Math.h"

namespace Math
{
    int Reverse(int number,long double &result)
    {
        long long int reversed{0};
        while (number != 0)
        {
            long long int digit = (number % 10);
            reversed = ((reversed * 10) + digit);
            number = (number / 10);
        }
        result = reversed;
        return result;
    }

    double Divide(double FirstNumber, double SecondNumber,long double &result)
    {
        result = FirstNumber / SecondNumber;
        return result;
    }

    double Percentage(double part, double whole,long double &result)
    {
        result = ((part / whole) * 100);
        return result;
    }

    double Sin(double Angle,long double &result)
    {
        double angle_radians = ((Angle * std::numbers::pi) / 180.0);
        result = sin(angle_radians);
        return result;
    }

    double Cos(double Angle,long double &result)
    {
        double angle_radians = ((Angle * std::numbers::pi) / 180.0);
        result = cos(angle_radians);
        return result;
    }

    double Tan(double Angle,long double &result)
    {
        double angle_radians = ((Angle * std::numbers::pi) / 180.0);
        result = tan(angle_radians);
        return result;
    }

    double ArcSin(double Angle,long double &result)
    {
        result = asin(Angle);
        return result;
    }
    double ArcCos(double Angle,long double &result)
    {
        result = acos(Angle);
        return result;
    }
    double ArcTan(double Angle,long double &result)
    {
        result = atan(Angle);
        return result;
    }
    double Sinh(double Value,long double &result)
    {
        result = sinh(Value);
        return result;
    }
    double Cosh(double Value,long double &result)
    {
        result = cosh(Value);
        return result;
    }
    double Tanh(double Value,long double &result)
    {
        result = tanh(Value);
        return result;
    }
    double ToRadians(double number,long double &result)
    {
        result = ((number * std::numbers::pi) / 180.0);
        return result;
    }
    double ToGradians(double number,long double &result)
    {
        result = ((number * 200.0) / 180.0);
        return result;
    }
}