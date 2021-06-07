// Copyright (c) 2021 Felipe Affonso All rights reserved
//
// Created by: Felipe Affonso
// Created on: June 2021
// This program get marks in porcentage and shows the average

#include <iostream>
#include <cmath>
#include <iomanip>
#include <random>
#include <array>
#include <list>

float listAverage(std::list<float> listOfNumbers) {
    // This function outputs the average of a list
    float average = 0;

    for (float number : listOfNumbers) {
        average = average + number;
    }

    average = average / listOfNumbers.size();

    return average;
}

int main() {
    // This function is the main function
    float average;
    std::list<float> marks;
    bool boolean = true;

    std::cout <<
    "Enter one mark at a time in percentage. If you are done, enter -1."
    << std::endl;

    while (boolean == true) {
        try {
            float tempMark = 0;

            std::cout << std::endl;

            while (tempMark != -1) {
                std::cout << "Enter your mark(%): ";
                std::cin >> tempMark;

                if (tempMark != -1) {
                    marks.push_back(tempMark);
                }
            }
        boolean = false;
        } catch (std::invalid_argument) {
            std::cout <<
            "\nThis input is invalid, please, insert an integer."
            << std::endl;
            boolean = true;
        }
    }

    average = listAverage(marks);

    std::cout << "\nThe average is: " << average << "%." << std::endl;

    std::cout << "\nDone." << std::endl;
}
