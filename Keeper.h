#pragma once
#include <exception>
#include "elem.h"
#include "bird.h"
#include "cat.h"
#include "fish.h"

class Keeper
{
public:
	Keeper();
	~Keeper();
	void push(animals* a);
	animals* operator[] (const int index);
	void save();
	void load();
	int getsize();
private:
	int size;
	elem* head;
};

