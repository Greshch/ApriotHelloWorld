// ApriotHelloWorld.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::cout << "Your first name: ";
    std::string firstName;
    std::cin >> firstName;
    std::cout << "Your second name: ";
    std::string secondName;
    std::cin >> secondName;
    std::cout << "Your full name is\t" << firstName << " " << secondName << "\n";
    return 0;
}

