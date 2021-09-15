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
    void red();
    void set();
    void get();

private:
    string species;
    string color;
    string typeoff;
};

