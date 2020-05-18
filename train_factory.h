#pragma once
#include "train.h"
#include "freight_train.h"
#include "person_train.h"
#include "vector"
#include <iostream>
class TrainFactory {
    public:
        Train* fromString( std::string );
    private:
        std::vector<std::string> splitString(std::string str, char delim);
};
