// Copyright 2025 Joanna Keza All rights reserved
//
// Created by: Joanna Keza
// Data: February 28, 2025
// This program asks the user for a radius and then
// calculates the circumference of a circle using tau

#include <iostream>

int main() {
    // declare constants
    const float TAU = 6.28;

    // declare variables
    float radius, circumference;

    // get the radius from the user
    std::cout << "Enter the radius (mm): ";
    std::cin >> radius;

    // calculate the circumference using tau
    circumference = TAU * radius;

    // display the circumference to the user
    std::cout << "\n";
    std::cout << "Circumference = " << circumference << " mm" << std::endl;
}
