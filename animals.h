#pragma once
#include <fstream>
#include <string>
#include <iostream>

using namespace std;
class animals
{
public:
	animals();
	virtual ~animals();
	virtual void get() = 0;
	virtual void set() = 0;
	virtual void red(int a, string zam) = 0;
	virtual void save() = 0;
};

