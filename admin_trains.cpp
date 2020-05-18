#include "admin_trains.h"
#include <stdio.h>
#include "ui.h"
#include "validate.h"
#include <iostream>

void AdminTrains::list() {
    std::vector<Train *> trains = service.getAllTrains(); 
    if ( trains.size() == 0 ) {
        std::cout << "Nu exista trenuri in baza de date" << std::endl;
        input();
        return;
    }
    int i=0;
    std::string option = "";
    while(option[0] != 'b') {
        i = 1;
        trains = service.getAllTrains();
        for ( Train *t : trains ) {
            std::cout << i << ") "<< t->toString() << std::endl;
            i++;
        }
        std::cout << "Selecteaza o garnitura sau <b> pentru intoarcere la meniul principal" << std::endl;
        option = inputLine();
        if(validate.isDigit(option)){
            std::cout << "is digit" << std::endl;
            int i = stoi(option);
            if( i > 0 && i <=trains.size() ) {
                show(i);
                continue;
            }
        };
        if(option[0] != 'b') {
            std::cout << "Optiune invalida" << std::endl;
            pressAnyKeyToContinue();
        
        }

    }

}

void AdminTrains::show(int i) {
    char option = ' ';
    bool done = false;
    while(!done) {
        Train* t = this->service.get(i);
        std::cout << t->toString() << std::endl;
        std::cout << "(e)dit, (s)terge, (b)ack" << std::endl;
        option = input();
        switch(option) {
            case 'e':
                std::cout << "Edit" << std::endl;
                break;
            case 's':
                this->service.remove(i-1);
                done = true;
                std::cout << "Garnitura a fost stearsa" << std::endl;
                pressAnyKeyToContinue();
                break;
            case 'b':
                done = true;
                break;
            default:
                std::cout << "Optiune invalida" << std::endl;
                pressAnyKeyToContinue();
        }
    }
}
void AdminTrains::edit(int id) {
    Train* t = this->service.get(id);
    std::string model;
    std::cout << "Introduceti modelul" << std::endl;
}
