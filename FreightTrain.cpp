#include "FreightTrain.h"
#include <string>
FreightTrain::FreightTrain(std::string model, 
        std::string madeBy, int noOfCars, std::string commodity, int availableCars, int  reservedCars )
{
    this->model = model;
    this->madeBy = madeBy;
    this->noOfCars = noOfCars;
    this->commodity = commodity;
    this->availableCars = availableCars;
    this->reservedCars = reservedCars;
}
