#include "TestTrain.h"
#include "Train.h"
#include <iostream>
#include <string>
#include <assert.h>
void TestTrain::run()
{
    Train train;
    train.setModel("model_test");
    std::string expected_model = "model_test";
    std::string actual_model  = train.getModel();
    assert(expected_model == actual_model);
    std::cout << "Train tests passed" << std::endl;
}
