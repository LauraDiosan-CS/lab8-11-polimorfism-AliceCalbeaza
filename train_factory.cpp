#include "train_factory.h"
#include <sstream>
#include <iostream>
Train* TrainFactory::fromString(std::string trainDefinition) {
    std::vector<std::string> fieldValues = this->splitString(trainDefinition, ',');
    Train *t;
    if( fieldValues[0] == "GM" ) {
        FreightTrain* freightTrain = new FreightTrain(
                    fieldValues[1],
                    fieldValues[2],
                    stoi(fieldValues[3]),
                    fieldValues[4],
                    stoi(fieldValues[5]),
                    stoi(fieldValues[6])
                );
        t = freightTrain;
    } else {
        PersonTrain *personTrain;
        personTrain = new PersonTrain(
                    fieldValues[1],
                    fieldValues[2],
                    stoi(fieldValues[3]),
                    stoi(fieldValues[4]),
                    stoi(fieldValues[5]),
                    stoi(fieldValues[6])
                );
        t = personTrain;
    }
    return t;
}
std::vector<std::string> TrainFactory::splitString(std::string str, char delim) {
    std::vector<std::string> fieldValues;
    std::stringstream stringStream(str);
    std::string fieldValue;
    while(std::getline( stringStream , fieldValue, delim)){
        fieldValues.push_back(fieldValue);
    }
    return fieldValues;
}
