#include <iostream>
#include "../include/Message/Message.h"
#include "../include/Math/Math.h"
#include "../include/Input/Input.h"
#include "../include/Log/Log.h"
#include "../include/History/History.h"

struct CalculatorState
{
    int menuChoice{};
    int retryChoice{};

    bool hasInvalidInput{};
    bool hasInvalidChoice{};
    bool isRunning{true};
};

struct CalculationInput
{
    long double firstNumber{};
    long double secondNumber{};
    long double part{};
    long double whole{};
    long double exponent{};
};

struct CalculationResult
{
    long double result{};
};

int main()
{
    CalculatorState state;
    CalculationInput input;
    CalculationResult result;

    while (state.isRunning)
    {
        createFileIfMissing("History.txt");
        Menu();
        MenuInput(state.menuChoice, state.hasInvalidChoice, state.hasInvalidInput);

        switch (state.menuChoice)
        {
        case 0:
            HelpLog();
            break;
        case 1:
            InputTwo(input.firstNumber, input.secondNumber);
            std::cout << Math::Add(input.firstNumber, input.secondNumber, result.result);
            AddHistory(input.firstNumber, input.secondNumber, '+', result.result);
            OperationLog("Addition");
            break;
        case 2:
            InputTwo(input.firstNumber, input.secondNumber);
            std::cout << Math::Subtract(input.firstNumber, input.secondNumber, result.result);
            AddHistory(input.firstNumber, input.secondNumber, '-', result.result);
            OperationLog("Subtract");
            break;
        case 3:
            InputTwo(input.firstNumber, input.secondNumber);
            std::cout << Math::Multiply(input.firstNumber, input.secondNumber, result.result);
            AddHistory(input.firstNumber, input.secondNumber, '*', result.result);
            OperationLog("Multiply");
            break;
        case 4:
            InputDivid(input.firstNumber, input.secondNumber, state.hasInvalidChoice);
            std::cout << Math::Divide(input.firstNumber, input.secondNumber, result.result);
            AddHistory(input.firstNumber, input.secondNumber, '/', result.result);
            OperationLog("Divide");
            break;
        case 5:
            InputPercentage(input.part, input.whole, state.hasInvalidChoice);
            std::cout << Math::Percentage(input.part, input.whole, result.result);
            AddHistory(input.part, input.whole, '%', result.result);
            OperationLog("Percentage");
            break;
        case 6:
            InputOne(input.firstNumber);
            std::cout << Math::ChangeSign(input.firstNumber, result.result);
            AddHistory2("ChangeSign", input.firstNumber, result.result);
            OperationLog("Change Sign");
            break;
        case 7:
            InputOne(input.firstNumber);
            std::cout << Math::Reverse(input.firstNumber, result.result);
            AddHistory2("Reverse", input.firstNumber, result.result);
            OperationLog("Reverse");
            break;
        case 8:
            InputOne(input.firstNumber);
            std::cout << Math::Sin(input.firstNumber, result.result);
            AddHistory2("Sin", input.firstNumber, result.result);
            OperationLog("Sin");
            break;
        case 9:
            InputOne(input.firstNumber);
            std::cout << Math::Cos(input.firstNumber, result.result);
            AddHistory2("Cos", input.firstNumber, result.result);
            OperationLog("Cos");
            break;
        case 10:
            InputOne(input.firstNumber);
            std::cout << Math::Tan(input.firstNumber, result.result);
            AddHistory2("Tan", input.firstNumber, result.result);
            OperationLog("Tan");
            break;
        case 11:
            InputArcSinAndCos(input.firstNumber, state.hasInvalidChoice);
            std::cout << Math::ArcSin(input.firstNumber, result.result);
            AddHistory2("ArcSin", input.firstNumber, result.result);
            OperationLog("Arc Sin");
            break;
        case 12:
            InputArcSinAndCos(input.firstNumber, state.hasInvalidChoice);
            std::cout << Math::ArcCos(input.firstNumber, result.result);
            AddHistory2("ArcCos", input.firstNumber, result.result);
            OperationLog("Arc Cos");
            break;
        case 13:
            InputOne(input.firstNumber);
            std::cout << Math::ArcTan(input.firstNumber, result.result);
            AddHistory2("ArcTan", input.firstNumber, result.result);
            OperationLog("Arc Tan");
            break;
        case 14:
            InputOne(input.firstNumber);
            std::cout << Math::Sinh(input.firstNumber, result.result);
            AddHistory2("Sinh", input.firstNumber, result.result);
            OperationLog("Sinh");
            break;
        case 15:
            InputOne(input.firstNumber);
            std::cout << Math::Cosh(input.firstNumber, result.result);
            AddHistory2("Cosh", input.firstNumber, result.result);
            OperationLog("Cosh");
            break;
        case 16:
            InputOne(input.firstNumber);
            std::cout << Math::Tanh(input.firstNumber, result.result);
            AddHistory2("Tanh", input.firstNumber, result.result);
            OperationLog("Tanh");
            break;
        case 17:
            InputOne(input.firstNumber);
            std::cout << Math::ToRadians(input.firstNumber, result.result);
            AddHistory2("ToRadians", input.firstNumber, result.result);
            OperationLog("ToRadians");
            break;
        case 18:
            InputOne(input.firstNumber);
            std::cout << Math::ToGradians(input.firstNumber, result.result);
            AddHistory2("ToGradians", input.firstNumber, result.result);
            OperationLog("ToGradians");
            break;
        case 19:
            InputLog10AndLog(input.firstNumber, state.hasInvalidChoice);
            std::cout << Math::Log10(input.firstNumber, result.result);
            AddHistory2("Log10", input.firstNumber, result.result);
            OperationLog("Log10");
            break;
        case 20:
            InputLog10AndLog(input.firstNumber, state.hasInvalidChoice);
            std::cout << Math::Ln(input.firstNumber, result.result);
            AddHistory2("Ln", input.firstNumber, result.result);
            OperationLog("Ln");
            break;
        case 21:
            InputPower(input.firstNumber, input.exponent);
            std::cout << Math::Power(input.firstNumber, input.exponent, result.result);
            AddHistory2("Power", input.firstNumber, result.result);
            OperationLog("Power");
            break;
        case 22:
            InputOne(input.firstNumber);
            std::cout << Math::Square(input.firstNumber, result.result);
            AddHistory2("Square", input.firstNumber, result.result);
            OperationLog("Square");
            break;
        case 23:
            InputOne(input.firstNumber);
            std::cout << Math::Cube(input.firstNumber, result.result);
            AddHistory2("Cube", input.firstNumber, result.result);
            OperationLog("Cube");
            break;
        case 24:
            InputOne(input.firstNumber);
            std::cout << Math::Exp(input.firstNumber, result.result);
            AddHistory2("Exp", input.firstNumber, result.result);
            OperationLog("Exp");
            break;
        case 25:
            InputSquareRoot(input.firstNumber, state.hasInvalidChoice);
            std::cout << Math::SquareRoot(input.firstNumber, result.result);
            AddHistory2("SquareRoot", input.firstNumber, result.result);
            OperationLog("SquareRoot");
            break;
        case 26:
            InputOne(input.firstNumber);
            std::cout << Math::CubeRoot(input.firstNumber, result.result);
            AddHistory2("CubeRoot", input.firstNumber, result.result);
            OperationLog("CubeRoot");
            break;
        case 27:
            InputPower(input.firstNumber, input.secondNumber);
            std::cout << Math::NthRoot(input.firstNumber, input.secondNumber, result.result);
            AddHistory(input.firstNumber, input.secondNumber, '^', result.result);
            OperationLog("NthRoot");
            break;
        case 28:
            std::cout << Math::Average(input.firstNumber, result.result);
            AddHistory2("Average", input.firstNumber, result.result);
            OperationLog("Average");
            break;
        case 29:
            InputFactorial(input.firstNumber, state.hasInvalidChoice);
            std::cout << Math::Factorial(input.firstNumber, result.result);
            AddHistory2("Factorial", input.firstNumber, result.result);
            OperationLog("Factorial");
            break;
        case 30:
            readFile();
            OperationLog("Checked History");
            break;
        case 31:
            deleteHistory();
            OperationLog("Delete History");
            break;
        }
        InputAgain(state.retryChoice, state.hasInvalidChoice, state.hasInvalidChoice, state.isRunning);
    }
}