using namespace std;
#include <iostream>
#include "Assignment.h"
#include "mammal.h"
#include "bird.h"
#include "reptile.h"
#include "enclousure.h"
#include "visitor.h"
int main(){
   Enclosure e(1);
   Mammal* m1 = new Mammal("Lion" , 5 , "yes");
   Bird* b1= new Bird ("Parrot" , 2 ,"no" );
   Reptile* r1=new Reptile("Snake" , 3 , "Venomous" , "Yes")
   m1->display();
   b1->display();
   r1->display();
   Visitor v1("Sarah Ali" , 3)
   v1.displayInfo();
    return 0;

}



