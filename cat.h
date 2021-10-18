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
    void red(int ind, string zam);
    void set();
    void set(string a, string b, string c, string d);
    void get();
    void save();

protected:
    string species;
    string color;
    string ovner;
    string nick;
};

