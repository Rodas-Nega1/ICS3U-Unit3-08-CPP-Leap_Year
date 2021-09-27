// Copyright (c) 2021 Rodas Nega All rights reserved
//
// Created by: Rodas Nega
// Created on: Sept 2021
// This program asks for the user's year to determine if it is a leap year

#include <iostream>


int main() {
    // this function checks if the user's chosen year is a leap or common year

    std::string year;
    int integerAsNumber;

    // input
    std::cout << "Enter a year: ";
    std::cin >> year;
    std::cout << std::endl;

    // process & output
    try {
        integerAsNumber = std::stoi(year);

        if (integerAsNumber % 4 == 0) {
            if (integerAsNumber % 100 == 0) {
                if (integerAsNumber % 400 == 0) {
                    std::cout << "It is a leap year.";
                } else {
                    std::cout << "It is a common year.";
                }
            } else {
                std::cout << "It is a leap year.";
            }
        } else {
            std::cout << "It is a common year.";
        }
    } catch (std::invalid_argument) {
        std::cout << "That is not a year.";
    }

    std::cout << "" << std::endl;
    std::cout << "\nDone." << std::endl;
}
