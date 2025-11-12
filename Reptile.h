#ifndef REPTILE_H_INCLUDED
#define REPTILE_H_INCLUDED
using namespace std;
#include <iostream>
#include "Assignment.h"
class Reptile:public Animal{
private:
    bool isVenomous:
public:
    Reptile(string name , int age , bool isHungary , bool isVenomous):Animal(name , age , isHungary){
       this->isVenomous=isVenomous; 
    }
    Reptile();
        
    
};



#endif // REPTILE_H_INCLUDED
