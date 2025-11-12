#ifndef ENCLOSURE_H
#define ENCLOSURE_H

#include "Animal.h"

//define enclosure class here 

#include<iostream>
using namespace std;
class enclosure
{
    private:
    animal*enclos;
    int capacity;
    int count;
    public:
    enclosure(int cap,int c);
    enclosure();
    ~enclosure();
    void addanimal(animal*a);
    void displayanimal();
    
    
    
};






#endif
