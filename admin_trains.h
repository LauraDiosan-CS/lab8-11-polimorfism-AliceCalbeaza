#pragma once

#include "train_service.h"
#include "validate.h"
class AdminTrains {
    public:
        AdminTrains( TrainService service ){ this->service = service; }
        void list();
        void show(int i);
        void edit( int i );
    private:
        TrainService service;
        Validate validate;
};
