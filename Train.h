#pragma once
#include <string>
class Train
{
    protected:
        std::string model;
        std::string madeBy;
        int noOfSeats;
        int availableCars;
        int noOfCars;
        int reservedCars;
    public:
        Train();
        Train(std::string line, char delim);
        Train( std::string model, std::string madeBy, int noOfCars, int noOfSeats, int availableCars, int  reservedCars );
        std::string getModel();
        void setModel(std::string model);
        std::string toStringDelimiter(char delim);
};

