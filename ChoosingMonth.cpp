// Copyright (c) 2022 St. Mother Teresa HS All rights reserved.
//
// Created by: Andrew Ten-Den
// Created on: March 2022
// This program prints out the corresponding month


#include <iostream>
#include <string>


int main() {
    // this function prints out the corresponding month
    std::string monthNumberAsString;
    int monthAsInt;

    // input
    std::cout << "Enter the number of a month (ex: 3 for March): ";
    std::cin >> monthNumberAsString;

    // process and output
    try {
        monthAsInt = std::stoi(monthNumberAsString);
        switch (monthAsInt) {
            case 1 :
                std::cout << "January" << std::endl;
                break;
            case 2 :
                std::cout << "February" << std::endl;
                break;
            case 3 :
                std::cout << "March" << std::endl;
                break;
            case 4 :
                std::cout << "April" << std::endl;
                break;
            case 5 :
                std::cout << "May" << std::endl;
                break;
            case 6 :
                std::cout << "June" << std::endl;
                break;
            case 7 :
                std::cout << "July" << std::endl;
                break;
            case 8 :
                std::cout << "August" << std::endl;
                break;
            case 9 :
                std::cout << "September" << std::endl;
                break;
            case 10 :
                std::cout << "October" << std::endl;
                break;
            case 11 :
                std::cout << "November" << std::endl;
                break;
            case 12 :
                std::cout << "December" << std::endl;
                break;

            default :
                std::cout << "Invalid month" << std::endl;
        }
    } catch (std::invalid_argument) {
            std::cout << "No idea!";
    }
    std::cout << "\nDone." << std::endl;
}
