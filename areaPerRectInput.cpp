// Copyright (c) 2025 Brandon All rights reserved.

// Created By : Brandon
// Date : September 19th, 2025
// This program displays area and perimeter of a rectangle in c++

#include <iostream>
int length;
int width;

int main() {
    std::cout << "Enter the length of the rectangle (cm): "<< std::endl;
    std::cin >> length;
    std::cout << "Enter the width of the rectangle (cm): " << std::endl;
    std::cin >> width;
    std::cout << "Area = " << length * width << " cm^2\n";
    std::cout << "Perimeter = " << 2 * (length + width) << " cm\n";
}
