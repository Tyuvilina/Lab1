#pragma once
#include "animals.h"
class bird :
    public animals
{
public:
    bird();
    bird(string a, string b, string c, string d);
    bird(const bird& copy);
    ~bird();
    void red();
    void set();
    void get();

private:
    string species;
    string color;
    string typeoff;
    string habitat;
};

