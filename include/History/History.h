#pragma once
#include <iostream>
#include <fstream>

void createFileIfMissing(const std::string &fileName);
bool fileExists(const std::string &fileName);
void deleteHistory();
void readFile();


template <typename T>
void AddHistory(T &FirstNumber, T &SecondNumber, char seprator, T &reslut)
{
    std::string FileName{"History.txt"};
    std::ofstream File{FileName, std::ios::app};
    File << FirstNumber << " " << seprator << " " << SecondNumber << " = " << reslut << '\n';
}

template <typename T>
void AddHistory2(const std::string &value, T &FirstNumber, T &result)
{
    std::string FileName{"History.txt"};
    std::ofstream File{FileName, std::ios::app};
    File << value << "(" << FirstNumber << ")" << " = " << result << '\n';
}
