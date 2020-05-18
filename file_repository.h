#pragma once
#include "repository.h"
#include <string>

template <class T, class F>
class FileRepository : public Repository<T> {
    public:
        FileRepository(std::string fileName);
        T objectFromString(std::string definitionString);
        virtual void loadFromFile()=0;
        virtual void saveToFile()=0;
    protected:
        std::string fileName;
        F objectFactory;
};

template <class T, class F>
FileRepository<T,F>::FileRepository(std::string fileName){
    this->fileName=fileName;
}

template <class T, class F> T FileRepository<T,F>::objectFromString(std::string definitionString){
    return objectFromString();
}
