#pragma once
#include <vector>
#include <string>
struct MenuItem {
    char option;
    std::string lable;
};
char menu(std::vector<MenuItem>);
char input(); 
std::string inputLine();
void pressAnyKeyToContinue();

