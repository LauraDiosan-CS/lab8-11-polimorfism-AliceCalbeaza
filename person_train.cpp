#include "person_train.h"

std::string PersonTrain::toString() {
    return Train::toString() + std::to_string( noOfSeats ) + ' ';
}

PersonTrain::PersonTrain() {}

PersonTrain::PersonTrain(
        std::string model,
        std::string madeBy,
        int noOfCars,
        int noOfSeats,
        int noOfAvailableCars,
        int noOfReservedCars
        )
    : Train
      (
        model,
        madeBy,
        noOfCars,
        noOfAvailableCars,
        noOfReservedCars
      )
{
    this->noOfSeats = noOfSeats;
    type = "GP";
}
