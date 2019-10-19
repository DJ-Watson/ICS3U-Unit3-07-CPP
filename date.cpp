// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: DJ Watson
// Created on: October 2019
// this program asks a grandmother if you can date her grandchild


#include <iostream>
#include <string>


int main() {
    // variables
    std::string numinput;
    int numcheck;
    // input
    std::cout << "enter age: ";
    std::cin >> numinput;
    std::cout << "" << std::endl;
    // process
    try {
        numcheck = std::stoi(numinput);
        if (numcheck >= 0) {
            if (numcheck >= 25 && numcheck <= 40) {
                std::cout << "You can date my grandchild";
            } else {
                std::cout << "You can't date my grandchild " << std::endl;
            }
        } else {
            std::cout << "invalid input";
        }
    } catch (std::invalid_argument) {
        std::cout << "invalid input";
    }
}
