#include "train_service.h"
std::vector<Train *> TrainService::getAllTrains() {
    return trainRepository->getAll();
}

Train* TrainService::get(int i) {
    return trainRepository->get(i);
}

void TrainService::remove(int i) {
    return trainRepository->remove(i);
}

void TrainService::add( Train* t ) {
    trainRepository->add(t);
}
