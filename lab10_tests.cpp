#include "lab10_tests.h"
#include "file_repository.h"
#include "csv_file_repository.h"
#include "trains.h"
#include <cassert>
void Lab10Tests::runTests() {
    CsvFileRepository<Train,TrainFactory>* repo = new CsvFileRepository<Train,TrainFactory>("test_files/lab_10.csv");
    Train* g1 = new FreightTrain("KBT8","Fleishmann",8,"carbuni",10,20);
    Train* g2 = new PersonTrain("A0JK","Neumann",10, 200,4, 30);
    Train* g3 = new FreightTrain("B1xC","Aron",11,"benzina",9,12);
    Train* g4 = new PersonTrain("DIJ9","Stora",9,150,5, 28);
    repo->loadFromFile();
    assert(repo->getSize()==2);
    assert(*(repo->get(0)) == *g2);
    assert(*(repo->get(1)) == *g1);
    repo->add(g3);
    assert(repo->getSize()==3);
    assert(*(repo->get(0)) == *g2);
    assert(*(repo->get(1)) == *g3);
    assert(*(repo->get(2)) == *g1);
    repo->add(g4);
    assert(repo->getSize()==4);
    assert(*(repo->get(0)) == *g2);
    assert(*(repo->get(1)) == *g3);
    assert(*(repo->get(2)) == *g4);
    assert(*(repo->get(3)) == *g1);
    std::cout << "Teste lab10 ok" << std::endl;
}
