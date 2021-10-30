#pragma once
#include "animals.h"
class fish :
    public animals
{
public:
    fish();
    fish(string a, string b, string c);
    fish(const fish& copy);
    ~fish();
    void red(int ind, string zam);
    void set();
    void set(string a, string b, string c);
    void get();
    void save();
protected:
    string species;
    string color;
    string typeoff;
};

