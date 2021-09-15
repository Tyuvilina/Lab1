#pragma once
#include "animals.h"
class cat :
    public animals
{
public:
    cat();
    cat(string a, string b, string c, string d);
    cat(const cat& copy);
    ~cat();
    void red();
    void set();
    void get();

private:
    string species;
    string color;
    string ovner;
    string nick;
};

