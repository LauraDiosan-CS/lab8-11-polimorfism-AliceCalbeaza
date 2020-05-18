#pragma once
#include "repository.h"
#include "trains.h"

class TrainService {
    public:
        TrainService(){};
        TrainService(Repository<Train>* trainRepository) { this->trainRepository = trainRepository; }
        int getSize() { return trainRepository->getSize(); }
        void add(Train* t);
        void remove(int id);
        std::vector<Train *> getAllTrains();
        Train* get(int id);
    private:
        Repository<Train>* trainRepository;
};
