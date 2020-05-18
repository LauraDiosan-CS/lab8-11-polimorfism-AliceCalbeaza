#pragma once
#include "train.h"

class PersonTrain : public Train {
    public:
        PersonTrain(); 
        PersonTrain(std::string model, std::string madeBy, int noOfCars, int noOfSeats, int noOfAvailableCars, int noOfReservedCars );
        std::string getType() {
            return type;
        }
        void setNoOfSeats( int noOfSeats ) { this->noOfSeats = noOfSeats; }
        int getNoOfSeats() { return this->noOfSeats; }
        std::string toString();
    protected:
        int noOfSeats;
};
