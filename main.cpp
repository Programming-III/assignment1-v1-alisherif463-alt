#include "Animal.h"
#include "Bird.h"
#include "Mammal.h"
#include "Reptile.h"
#include "Enclosure.h"
#include "Visitor.h"
#include <iostream>
using namespace std;
animal::animal(string n,int a,bool hun)
{
    name=n;
    age=a;
    ishungry=hun;
}
animal::animal()
{
    name="";
    age=0;
    ishungry=0;
}
animal::~animal(){};


void animal::display()
{
 cout<<"name:"<<name<<endl;
 cout<<"age:"<<age<<endl;
 cout<<"status:"<<ishungry<<endl;
    
}
void animal::feed()
{
 if(ishungry==0)
 cout<<"not hungry"<<endl;
else
cout<<name<<"is hungry"<<endl;
    
}
mammal::mammal(string fcol,string n,int a,bool hun)
{
    furcolor=fcol;
}
mammal::mammal()
{
    furcolor="";
}
mammal::~mammal(){};
bird::bird(float ws,string n,int a,bool hun)
{
    wingspan=ws;
}
bird::bird()
{
    wingspan=0.0;
}
bird::~bird(){};
reptile::reptile(bool iv,string n,int a,bool hun)
{
    isvenomous=iv;
}
reptile::reptile()
{
    isvenomous=0;
}
reptile::~reptile(){};
enclosure::enclosure(int cap,int c)
{
    capacity=cap;
    count=c;
    enclos=nullptr;
}
enclosure::enclosure()
{
    capacity=0;
    count=0;
    enclos=nullptr;
}
enclosure::~enclosure()
{
    delete[] enclos;
}
void enclosure::addanimal(animal*a)
{
    animal*b=new animal[count+1];
    for(int i=0;i<capacity;i++)
    {
        b[i]=enclos[i];
    }
    b[count]=*a;
    count++;
    enclos=b;
    animal*t=enclos;
    enclos=b;
    delete t;

}
void enclosure::displayanimal()
{
    for(int i=0;i<capacity;i++){
        
        enclos[i].display();
    }
    cout<<"count:"<<count<<endl;
    cout<<"capacity"<<capacity<<endl;
    
}
visitor::visitor(string vn,int tb)
{
    visitorname=vn;
    ticketsbought=tb;
 
}
visitor::visitor()
{
    visitorname="";
    ticketsbought=0;
}
visitor::~visitor(){};

void visitor::displayinfo()
{
    cout<<visitorname<<endl;
    cout<<ticketsbought<<endl;
    
}

// ============== MAIN FUNCTION ==============
int main() {
      enclosure e1(10,1);
    e1.displayanimal();
    visitor v1("ali",5);
    enclosure c1(15,5);
    enclosure c2;
    animal* a = new mammal();
    animal* b = new bird();
    animal* c = new reptile();
    c1.displayanimal();
    
    
    return 0;
}
