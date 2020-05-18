#include "freight_train.h"
#include <iostream>

std::string FreightTrain::toString() {
    return Train::toString() + cargoType + ' ';
};

FreightTrain::FreightTrain(){

}

FreightTrain::FreightTrain(
        std::string model,
        std::string madeBy,
        int noOfCars,
        std::string cargoType,
        int noOfAvailableCars,
        int noOfReservedCars
        )
    :Train(
        model,
        madeBy,
        noOfCars,
        noOfAvailableCars,
        noOfReservedCars
         ) 
{
    this->cargoType = cargoType;
    this->type = "GM";
}
