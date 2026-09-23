// Copyright (c) 2026 Victor V-C Name All rights reserved.
// .
// Created by: Victor Victor Calixte
// Date: 09 23, 2026
// This code first takes a radius value from the user.
// Then it'll calculate the circumference of the circle and display it.


#include <iostream>


int main() {
    // Setting variables
    int r;
    float c;
    const float tau = 6.28;

    // Asking for radius to assign (r)
    std::cout << "Enter radius of circle (cm): " << std::endl;
    std::cin >> r;

    // Calculating circumference
    c = tau * r;

    // Displaying the resulting circumference
    std::cout << "The circumference of the circle is: " << c << "cm\n";
}
