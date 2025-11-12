#ifndef MAMMAL_H_INCLUDED
#define MAMMAL_H_INCLUDED
#include "Assignment.h"
using namespace std;
#include <iostream>
class Mammal: public Animal{
private:
    string furColor;
public:
    Mammal(string name , int age , bool isHungary , string furColor):Animal(name , age , isHungary){
       this->furColor=furColor;
    }
    Mammal();
};




#endif // MAMMAL_H_INCLUDED
