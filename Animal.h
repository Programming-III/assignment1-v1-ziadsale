#ifndef ASSIGNMENT_H_INCLUDED
#define ASSIGNMENT_H_INCLUDED
using namespace std;
#include <iostream>
class Animal{
protected:
    string name;
    int age;
    bool isHungary;
public:
    Animal(string name , int age , bool isHungary){
        this->name=name;
        this->age=age;
        this->isHungary=isHungary;
    }
    Animal();
    void display(){
        cout<<"Name : "<<name<<endl;
        cout<<"Age :"<<age<<endl;
        cout<<"Is Hungary :"<<isHungary<<endl;
    }
    void feed(){
        if(isHungary ="yes"){
            cout<<"I am Hungary"<<endl;
        }else
        cout<< "I am full"<<endl;
    }
};



#endif // ASSIGNMENT_H_INCLUDED

