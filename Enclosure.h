#ifndef ENCLOUSURE_H_INCLUDED
#define ENCLOUSURE_H_INCLUDED
using namespace std;
#include <iostream>
#include "Assignment.h"

class Enclosure {
private:
    Animal** animals;
    int capacity;
    int currentCount;

public:
    Enclosure(int capacity) {
      this->capacity = capacity;
        currentCount = 0;
        animals = new Animal*[capacity];
    }


    void addAnimal(Animal* a) {
        if (currentCount < capacity) {
            animals[currentCount++] = a;
            cout << "Animal added successfully ";
        } else {
            cout << "Enclosure is full! Cannot add more animals.\n";
        }
    }


    void displayAnimals() const {
        cout << "Animals in the enclosure: ";
        for (int i = 0; i < currentCount; i++) {
            animals[i]->display();
        }
        if (currentCount == 0)
            cout << "No animals in the enclosure";
    }


    Enclosure() ;


};




#endif // ENCLOUSURE_H_INCLUDED
