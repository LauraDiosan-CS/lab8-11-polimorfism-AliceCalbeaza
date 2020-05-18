#include "train.h"
#include  <iostream>
std::string Train::toString() {
    std::string data;
    data = type + ' '
           + model + ' '
           + madeBy + ' '
           + std::to_string(noOfCars) + ' '
           + std::to_string(noOfAvailableCars) + ' '
           + std::to_string(noOfReservedCars)  + ' ';
    return data;
}
Train::Train() {
}
Train::Train(std::string model, std::string madeBy, int noOfCars, int noOfAvailableCars, int noOfReservedCars) {
    this->model = model;
    this->madeBy = madeBy;
    this->noOfCars = noOfCars;
    this->noOfAvailableCars = noOfAvailableCars;
    this->noOfReservedCars = noOfReservedCars;
}
bool Train::operator==(Train t) {
    return model == t.model;
}
