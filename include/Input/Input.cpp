#include <iostream>
#include <limits>
#include "Input.h"


bool InputLimit()
{
    if (std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return true;
    }
    else
    {
        return false;
    }
}