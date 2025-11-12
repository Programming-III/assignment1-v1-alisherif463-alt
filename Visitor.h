#ifndef VISITOR_H
#define VISITOR_H

#include <string>
using namespace std;

//define visitor class here


#include<iostream>
using namespace std;
class visitor
{
    private:
    string visitorname;
    int ticketsbought;
    public:
    visitor(string vn,int tb);
    visitor();
    ~visitor();
    void displayinfo();
    
    
    
    
};




#endif
