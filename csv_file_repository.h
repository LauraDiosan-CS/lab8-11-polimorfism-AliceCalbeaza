#pragma once

#include "file_repository.h"
#include <fstream>

template<class T, class F>
class CsvFileRepository : public FileRepository<T,F> {
    public:
        CsvFileRepository(std::string fileName);
        T objectFromString(std::string definitionString);
        virtual void loadFromFile();
        virtual void saveToFile();
};

template<class T, class F>
void CsvFileRepository<T,F>::loadFromFile() {
    this->items.clear();
    std::string line;
    std::ifstream f(this->fileName);
    while (getline(f, line)) {
        T* t;
        t = this->objectFactory.fromString(line);
        this->add(t);
    }
}

template<class T, class F>
void CsvFileRepository<T,F>::saveToFile() {
    std::cout << "save to file" << std::endl;
}


template<class T, class F>
CsvFileRepository<T,F>::CsvFileRepository(std::string fileName) : FileRepository<T,F>(fileName) {}
