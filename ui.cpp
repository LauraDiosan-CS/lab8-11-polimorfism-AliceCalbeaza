#include "ui.h"
#include <iostream>
char menu(std::vector<MenuItem> items) {
    char option;
    bool optionExists = false;
    while (true) {
        for( MenuItem item : items ) {
            std::cout << item.option << ") "<< item.lable << std::endl;
        }
        std::cout << "Introduceti optiunea: " << std::endl;
        option = input();
        for(MenuItem item : items ) {
            if ( item.option == option ) {
                optionExists = true;
            }
        }
        if( optionExists ) {
            break;
        } else {
            std::cout << "Optiune inexistenta" << std::endl;
            pressAnyKeyToContinue();
        }

    }
    return option;
}
char input() {
    char* s = new char[255];
    char option;
    std::cin.getline(s, 255);
    std::string input = s;
    option=s[0];
    delete[] s;
    return option;
}
std::string inputLine() {
    char* s = new char[255];
    std::string option;
    std::cin.getline(s, 255);
    std::string input = s;
    option=s;
    delete[] s;
    return option;

};
void pressAnyKeyToContinue() {
    std::cout << "Tastați enter pentru a continua" << std::endl;
    input();
}
