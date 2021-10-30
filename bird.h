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
    void red(int ind, string zam);
    void set();
    void set(string a, string b, string c, string d);
    void get();
    void save();

protected:
    string species;
    string color;
    string typeoff;
    string habitat;
};

