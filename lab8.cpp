#include <iostream>
#include "Train.h"
#include "IRepository.h"
#include "RepositoryFileCSV.h"
#include "TestTrain.h"
#include "TestRepoCSV.h"
#include <vector>
int main()
{

    TestTrain trainTests;
    trainTests.run();
    TestRepoCSV repoTests;
    repoTests.run();
   
}
