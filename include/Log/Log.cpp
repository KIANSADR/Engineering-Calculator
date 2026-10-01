#include <iostream>
#include "Message/Message.h"
#include "Log.h"

void OperationLog(std::string value)
{
    std::clog << '\n'
              << "[INFO] Operation selected: " << value << '\n';
}

void HelpLog()
{
    std::cout << '\n';
    Help();
    std::clog << '\n'
              << "[INFO] Option selected: Help" << '\n';
}

void WrongLog()
{
    std::cerr << "[ERROR] Wrong Inputed. Enter agian: ";
}

void ZeroLog1()
{
    std::cerr << "[ERROR] Division by zero. Enter again: ";
}

void ZeroLog2()
{
    std::cerr << "[ERROR] Not be zero. Enter again: ";
}

void RangeLog()
{
    std::cerr << "[ERROR]  Range of -1 to 1. Enter again: ";
}

void NegativeLog()
{
    std::cerr << "[ERROR]  not be a negative number. Enter again: ";
}

