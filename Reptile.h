#ifndef REPTILE_H
#define REPTILE_H

#include "Animal.h"

//define reptile class here



#include<iostream>
using namespace std;
class reptile:public animal
{
    private:
    bool isvenomous;
    public:
    reptile(bool iv,string n,int a,bool hun);
    reptile();
    ~reptile();
    
    
    
    
};





#endif
