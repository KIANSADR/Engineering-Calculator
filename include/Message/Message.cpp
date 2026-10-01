#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>

void printLine(char corner_left, char corner_right, int width)
{
    std::cout << corner_left << std::string(width, '-') << corner_right << '\n';
}

void printRowMenu(const std::string &content)
{
    const int WIDTH = 90;

    std::cout << "|"
              << content
              << std::string(WIDTH - static_cast<int>(content.length()), ' ')
              << "|\n";
}

void printRowHelp(const std::string &content)
{
    const int WIDTH = 90;

    std::cout << "|"
              << content
              << std::string(WIDTH - static_cast<int>(content.length()), ' ')
              << "|\n";
}

std::string makeCell(const std::string &text, int width)
{
    std::ostringstream oss;

    oss << std::left << std::setw(width) << text;

    return oss.str();
}

void Menu()
{
    const int WIDTH = 90;

    printLine('+', '+', WIDTH);

    printRowMenu(std::string(34, ' ') + "CALCULATOR MENU");

    printLine('+', '+', WIDTH);

    printRowMenu(" 0. Help");

    printLine('+', '+', WIDTH);

    // Basic Operations
    printRowMenu(
        " " + makeCell("Arithmetic", 15) + makeCell("Unary", 15) + makeCell("Trig", 14) + makeCell("TrigInverse", 14) + makeCell("Hyperbolic", 12) + makeCell("Angle", 11));

    printRowMenu(
        " " + makeCell("1. Add", 15) + makeCell("5. Percentage", 15) + makeCell("8. Sin", 14) + makeCell("11. ArcSin", 14) + makeCell("14. Sinh", 12) + makeCell("17. ToRad", 11));

    printRowMenu(
        " " + makeCell("2. Subtract", 15) + makeCell("6. ChangeSign", 15) + makeCell("9. Cos", 14) + makeCell("12. ArcCos", 14) + makeCell("15. Cosh", 12) + makeCell("18. ToGrad", 11));

    printRowMenu(
        " " + makeCell("3. Multiply", 15) + makeCell("7. Reverse", 15) + makeCell("10. Tan", 14) + makeCell("13. ArcTan", 14) + makeCell("16. Tanh", 12));

    printRowMenu(
        " " + makeCell("4. Divide", 15));

    printLine('+', '+', WIDTH);

    // Exponential / Roots / Stats
    printRowMenu(
        " " + makeCell("Exponential", 20) + makeCell("Roots", 20) + makeCell("Stats", 27));

    printRowMenu(
        " " + makeCell("19. Log10", 20) + makeCell("25. SquareRoot", 20) + makeCell("28. Average", 27));

    printRowMenu(
        " " + makeCell("20. Log", 20) + makeCell("26. CubeRoot", 20) + makeCell("29. Factorial", 27));

    printRowMenu(
        " " + makeCell("21. Power", 20) + makeCell("27. NthRoot", 20));

    printRowMenu(
        " " + makeCell("22. Square", 20));

    printRowMenu(
        " " + makeCell("23. Cube", 20));

    printRowMenu(
        " " + makeCell("24. Exp", 20));

    printLine('+', '+', WIDTH);

    // History
    printRowMenu(
        " " + makeCell("History", 20) + makeCell("History Management", 20));

    printRowMenu(
        " " + makeCell("30. History", 20) + makeCell("31. Clear History", 20));

    printLine('+', '+', WIDTH);
}

void Help()
{
    const int WIDTH = 90;

    printLine('+', '+', WIDTH);

    printRowHelp(std::string(40, ' ') + "HELP");

    printLine('+', '+', WIDTH);

    printRowHelp(" 1. Add -> adds two numbers together");

    printRowHelp(" 2. Subtract -> subtracts one number from another");

    printRowHelp(" 3. Multiply -> multiplies two numbers together");

    printRowHelp(" 4. Divide -> divides one number by another");

    printRowHelp(" 5. Percentage -> calculates what percent one number is of another");

    printRowHelp(" 6. ChangeSign -> flips the sign of a number between positive and negative");

    printRowHelp(" 7. Reciprocal -> calculates one divided by the given number");

    printRowHelp(" 8. Sin -> calculates the sine of an angle");

    printRowHelp(" 9. Cos -> calculates the cosine of an angle");

    printRowHelp(" 10. Tan -> calculates the tangent of an angle");

    printRowHelp(" 11. ArcSin -> calculates the angle whose sine is the given value");

    printRowHelp(" 12. ArcCos -> calculates the angle whose cosine is the given value");

    printRowHelp(" 13. ArcTan -> calculates the angle whose tangent is the given value");

    printRowHelp(" 14. Sinh -> calculates the hyperbolic sine of a number");

    printRowHelp(" 15. Cosh -> calculates the hyperbolic cosine of a number");

    printRowHelp(" 16. Tanh -> calculates the hyperbolic tangent of a number");

    printRowHelp(" 17. ToRadians -> converts an angle from degrees to radians");

    printRowHelp(" 18. ToGradians -> converts an angle from degrees to gradians");

    printRowHelp(" 19. Log10 -> calculates the base-10 logarithm of a number");

    printRowHelp(" 20. Log -> calculates the natural logarithm of a number");

    printRowHelp(" 21. Power -> raises a number to a given exponent");

    printRowHelp(" 22. Square -> raises a number to the power of two");

    printRowHelp(" 23. Cube -> raises a number to the power of three");

    printRowHelp(" 24. Exp -> raises the constant e to the given power");

    printRowHelp(" 25. SquareRoot -> calculates the square root of a number");

    printRowHelp(" 26. CubeRoot -> calculates the cube root of a number");

    printRowHelp(" 27. NthRoot -> calculates the nth root of a number");

    printRowHelp(" 28. Average -> calculates the mean value of a set of numbers");

    printRowHelp(" 29. Factorial -> calculates the product of all positive integers up to the given number");

    printRowHelp(" 30. History -> displays the calculator history");

    printRowHelp(" 31. Clear History -> deletes all saved calculator history");

    printLine('+', '+', WIDTH);
}