#ifndef BIRD_H_INCLUDED
#define BIRD_H_INCLUDED
using namespace std;
#include <iostream>
#include "Assignment.h"
class Bird:public Animal{
private:
    float wingSpan;
public:
    Bird(string name , int age , bool isHungary , float wingSpan):Animal(name , age , isHungary){
       this->wingSpan=wingSpan;
    }
    Bird();
};



#endif // BIRD_H_INCLUDED
