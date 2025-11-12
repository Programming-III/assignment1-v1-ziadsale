#ifndef VISITOR_H_INCLUDED
#define VISITOR_H_INCLUDED
using namespace std;
#include <iostream>
class Visitor{
private:
    string visitorName;
    int ticketsBought;
public:
    Visitor(string visitorName , int ticketsBought){
        this->visitorName=visitorName;
        this->ticketsBought=ticketsBought;
    }
    Visitor();
    ~Visitor();
        void displayInfo(){
        cout<<"Visitor Name :"<<visitorName<<endl;
        cout<<"Tickets Bought :"<<ticketsBought<<endl;
    }
};



#endif // VISITOR_H_INCLUDED
