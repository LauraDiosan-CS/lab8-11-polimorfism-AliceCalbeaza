#include "Train.h"

class PersonsTrain : public Train
{
    protected:
        int noOfSeats;
    public:
        PersonsTrain(std::string model, std::string madeBy, int noOfCars, int noOfSeats, int availableCars, int  reservedCars );

};
