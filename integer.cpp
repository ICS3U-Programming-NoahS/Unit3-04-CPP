// Copyright (c) 2023 Noah Smith All rights reserved.
//
// Created by: Noah Smith
// Date: Oct. 18th, 2023
// This program asks the user to enter an integer
// and tells the user if it is positive, negative or just zero.
#include <iostream>

int main() {
    // Declare variables
    int userNumber;

    // Get the user's guess
    std::cout << "Enter an integer: ";
    std::cin >> userNumber;

    // Check if user's guess is correct
    if (userNumber < 0) {
        std::cout << userNumber;
        std::cout << " is negative." << std::endl;
    } else if (userNumber > 0) {
        std::cout << userNumber;
        std::cout << " is positive." << std::endl;
    } else {
        std::cout << userNumber;
        std::cout << " is just zero!" << std::endl;
    }
}
