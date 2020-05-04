#include "Train.h"
#include <string>

class FreightTrain : public Train
{
    protected:
        std::string commodity;
    public:
        FreightTrain(std::string model, std::string madeBy, int noOfCars, std::string commodity, int availableCars, int  reservedCars );

};
