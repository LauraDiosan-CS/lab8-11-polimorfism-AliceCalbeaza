#include "utils.h"
#include "repository.h"
#include "trains.h"
#include "_test_data.h"
#include "lab10_tests.h"
#include "lab_12_tests.h"
#include "ui.h"
#include <vector>
#include <string>
#include <iostream>

#include "csv_file_repository.h"
#include "trains.h"
#include "train_service.h"
#include "admin_trains.h"
int main()
{
    /**
     * Admin Trains
     */

    /**
     * Menu
     */
    std::vector<MenuItem> items;
    MenuItem itemGarnituri {'1', "Garnituri"};
    MenuItem itemLab10Test {'2', "Teste laborator 10"};
    MenuItem itemLab12Test{'3', "Teste laborator 12"};
    MenuItem itemExit {'x', "Exit"};
    items.push_back(itemGarnituri);
    items.push_back(itemLab10Test);
    items.push_back(itemLab12Test);
    items.push_back(itemExit);
    while(true) {
        char option = menu(items);
        switch (option) {
            case '1': {
                std::cout << "Garnituri" << std::endl;
                std::cout << "-----------" << std::endl;
                        FileRepository<Train, TrainFactory>* trainRepository = new CsvFileRepository<Train, TrainFactory>("test_files/lab_10.csv");
                        trainRepository->loadFromFile();
                        TrainService trainService(trainRepository);
                        AdminTrains adminTrains(trainService);
                        adminTrains.list();
                        break;
                    }
                    case '2': {
                            Lab10Tests* lab10_tests = new Lab10Tests();
                            lab10_tests->runTests();
                    pressAnyKeyToContinue();
                    break;
                };
            case '3': {
                    Lab12Tests* lab12_tests = new Lab12Tests();
                    lab12_tests->runTests();
                    pressAnyKeyToContinue();
                    break;
                };
            case 'x': {
                          return 0;
                      }
        }
    }
}
