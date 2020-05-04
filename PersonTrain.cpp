#include "PersonTrain.h"
PersonsTrain::PersonsTrain(std::string model, 
        std::string madeBy, int noOfCars, int noOfSeats, int availableCars, int  reservedCars )
{
    this->model = model;
    this->madeBy = madeBy;
    this->noOfCars = noOfCars;
    this->noOfSeats = noOfSeats;
    this->availableCars = availableCars;
    this->reservedCars = reservedCars;
}
