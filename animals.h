#pragma once
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

};

