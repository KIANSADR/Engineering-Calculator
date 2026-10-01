#include <iostream>
#include <fstream>
#include "History.h"

bool fileExists(const std::string &fileName)
{
    std::ifstream file(fileName);
    return file.good();
}

void createFileIfMissing(const std::string &fileName)
{
    if (fileExists(fileName))
    {
        return;
    }

    std::ofstream newFile(fileName);
    newFile << "History" << '\n'
            << '\n';
}

void deleteHistory()
{
    std::string FileName{"History.txt"};
    std::ofstream File{FileName, std::ios::trunc};
    File << "History" << '\n'
         << '\n';
}

void readFile()
{
    std::string FileName{"History.txt"};
    std::ifstream file(FileName);
    std::string content{};
    while (std::getline(file, content))
    {
        std::cout << content << '\n';
    }
}