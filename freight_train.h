#pragma once
#include "train.h"

class FreightTrain : public Train {
    public:
        FreightTrain();
        FreightTrain(std::string model, std::string madeBy, int noOfCars,  std::string cargoType,
                    int noOfAvailableCars, int noOfReservedCars);
        std::string getType() {
            return type;
        }
        std::string toString();
        void setCargoType(std::string cargoType);
        std::string getCargoType() { return cargoType; }
    protected:
        std::string cargoType;
};
