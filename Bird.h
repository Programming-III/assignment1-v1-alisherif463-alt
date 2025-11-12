#ifndef BIRD_H
#define BIRD_H

#include "Animal.h"

//define class bird here 


#include<iostream>
using namespace std;
class bird:public animal
{
    private:
    float wingspan;
    public:
    bird(float ws,string n,int a,bool hun);
    bird();
    ~bird();
    
    
    
};




#endif
