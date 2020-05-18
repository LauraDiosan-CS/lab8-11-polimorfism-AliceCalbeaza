#include "lab_12_tests.h"
#include <iostream>
#include "trains.h"
#include "train_service.h"
#include <cassert>
void Lab12Tests::runTests() {
    std::cout << "Lab 12 tests" << std::endl;
    std::cout << "-----------------------------" << std::endl;
    FreightTrain g1("104","Fleishmann",8,"carbuni",30,20);
    FreightTrain g2("104","ron",11,"benzina",12,9);
    PersonTrain g3("106", "Alonso",20,300,10,2);
    FreightTrain g4("103", "Amarra",20, "petrol", 40,10);
    FreightTrain g5("105","Fierra",12,"lemn",13,11);

    Repository<Train> trainRepository;

    TrainService service(&trainRepository);
    service.add(&g1);
    service.add(&g2);
    service.add(&g3);
    service.add(&g4);
    service.add(&g5);
    assert(service.get(0)->getModel() == "104");
    assert(service.get(1)->getModel() == "105");
    assert(service.get(2)->getModel() == "106");
    assert(service.get(3)->getModel() == "103");
    assert(service.get(4)->getModel() == "107");
    std::cout << "Sfarsit teste lab 12" << std::endl;
    std::cout << "-----------------------------" << std::endl;
};
