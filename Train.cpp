#include "Train.h"
#include <string>
#include <vector>
#include "Utils.h"

Train::Train(){

}
Train::Train( std::string model, std::string madeBy, int noOfCars, int noOfSeats, int availableCars, int  reservedCars ){
    this->model = model;
    this->madeBy = madeBy;
    this->noOfCars = noOfCars;
    this->noOfSeats = noOfSeats;
    this->availableCars = availableCars;
    this->reservedCars = reservedCars;
};
std::string Train::getModel()
{
    return this->model;
}

void Train::setModel( std::string model )
{
    this->model = model;
}

std::string Train::toStringDelimiter(char delim)
{
	return model + delim + madeBy;
} 

Train::Train(std::string line, char delim)
{
    std::vector<std::string> tokens = splitLine(line, delim);
	model = tokens[0];
	madeBy = tokens[1];
}
