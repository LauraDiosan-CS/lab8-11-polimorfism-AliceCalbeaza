#include "TestRepoCSV.h"
#include <assert.h>
#include <iostream>
#include "IRepository.h"
#include "RepositoryFileCSV.h"
#include "Train.h"
#include "PersonTrain.h"
#include "FreightTrain.h"
#include <vector>
void TestRepoCSV::run()
{
    IRepository<Train>* repo = new RepositoryFileCSV<Train>("fisier-111-1.csv");
    Train* g1 = new FreightTrain("KBT8","Fleishmann",8,"carbuni",10,20);
    Train* g2 = new PersonsTrain("A0JK","Neumann",10, 200,4, 30);
    Train* g3 = new FreightTrain("B1xC","Aron",11,"benzina",9,12);
    Train* g4 = new PersonsTrain("DIJ9","Stora",9,150,5, 28);
    assert(repo->size()==2);
    //assert(*(repo->get(0)) == *g2);
    //assert(*(repo->get(1)) == *g1);
    repo->add(g3);
    assert(repo->size()==3);
    //assert(*(repo->get(0)) == *g2);
    //assert(*(repo->get(1)) == *g3);
    //assert(*(repo->get(2)) == *g1);
    repo->add(g4);
    assert(repo->size()==4);
    //assert(*(repo->get(0)) == *g2);
    //assert(*(repo->get(1)) == *g3);
    //assert(*(repo->get(2)) == *g4);
    //assert(*(repo->get(3)) == *g1);
    std::cout << "Finished" << std::endl;
}
