// Copyright (c) 2022 Marshall Demars All rights reserved

// Created by: Marshall Demars
// Created on: Dec 2022
// This program converts a level grade to middle percentage

#include <iostream>

int ConvertMarkToPercentage(std::string mark) {
    // This function converts a level mark to a percentage
    int percentage;

    if (mark == "4+") {
        percentage = 97;
    } else if (mark == "4") {
        percentage = 90;
    } else if (mark == "4-") {
        percentage = 83;
    } else if (mark == "3+") {
        percentage = 78;
    } else if (mark == "3") {
        percentage = 75;
    } else if (mark == "3-") {
        percentage = 71;
    } else if (mark == "2+") {
        percentage = 68;
    } else if (mark == "2") {
        percentage = 65;
    } else if (mark == "2-") {
        percentage = 61;
    } else if (mark == "1+") {
        percentage = 58;
    } else if (mark == "1") {
        percentage = 55;
    } else if (mark == "1-") {
        percentage = 51;
    } else if (mark == "R") {
        percentage = 25;
    } else if (mark == "NE") {
        percentage = 0;
    } else {
        percentage = -1;
    }

    return percentage;
}

int main() {
    // this function gets the mark and catches errors
    std::string markInput;
    int FinalPercent;

    // Input
    std::cout << "Enter the level you want converted to percentage: ";
    std::cin >> markInput;

    // Call function
    FinalPercent = ConvertMarkToPercentage(markInput);

    // Output
    if (FinalPercent == -1) {
        std::cout << "\nInvalid Input." << std::endl;
    } else {
        std::cout << "\nLevel " << markInput << " has a percentage of "
                  << FinalPercent << "%." << std::endl;
    }

    std::cout << "\nDone." << std::endl;
}
