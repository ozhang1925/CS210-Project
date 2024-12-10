#ifndef TRAIN_H
#define TRAIN_H
#include <string>
#include <QMap>
#include <iostream>
#include "person.h"

struct Carriage {
    std::string name;
    std::string info;
    Carriage* next;
    Carriage() {
        next = nullptr;
        name = "temp";
    }
};

struct Train {
    QMap<QString, Person*> crew;

    Carriage* head;

    Train() {
        head = new Carriage();
        Carriage* carriage = new Carriage();
        head->next = carriage;
        carriage->name = "carriage";
        Carriage* railcar = new Carriage();
        carriage->next = railcar;
        railcar->name = "railcar";
    }

    ~Train() {
        std::cout << "Train destructor called." << std::endl;
        Carriage* deleteThis = head;
        while (deleteThis != nullptr) {
            Carriage* next = deleteThis->next;
            delete deleteThis;
            deleteThis = next;
        }
        qDeleteAll(crew.begin(), crew.end());
        crew.clear();
    }
};

#endif // TRAIN_H
