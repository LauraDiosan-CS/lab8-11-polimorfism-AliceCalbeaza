#pragma once

#include <string>
class Train {
    public:
        Train();
        Train(std::string model, std::string madeBy, int noOfCars, int noOfAvailableCars, int noOfReservedCars);
        bool operator==(Train t);
        void setId(int id) { this->id = id; }
        virtual std::string getType(){ return type; };
        virtual std::string toString();
        void setModel(std::string model) { this->model = model; }
        void setMadBy(std::string madeBy) {this->madeBy = madeBy;}
        void setNoOfCars(int noOfCars) { this->noOfCars = noOfCars; }
        void setNoOfAvaiableCars(int noOfAvailableCars) { this->noOfAvailableCars = noOfAvailableCars; }
        void setNoOfReservedCars(int noOfReservedCars) { this->noOfReservedCars = noOfReservedCars; }
        std::string getModel() { return model; }
        std::string getMadeBy() { return madeBy; }
        int getNoOfCars() { return noOfCars; }
        int getNoOfAvailableCars() { return noOfAvailableCars; }
        int getNoOfReservedCars() { return noOfReservedCars; }
    protected:
        int id;
        std::string type;
        std::string model;
        std::string madeBy;
        int noOfCars;
        int noOfAvailableCars;
        int noOfReservedCars;
};
