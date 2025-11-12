#ifndef MAMMAL_H
#define MAMMAL_H

#include "Animal.h"

//define mammal class here

#include<iostream>
using namespace std;
class mammal:public animal
{
    private:
    string furcolor;
    public:
    mammal(string fcol,string n,int a,bool hun);
    mammal();
    ~mammal();
    
};




#endif
