#include "bird.h"
#include "cat.h"
#include "fish.h"
int main(void)
{
	setlocale(LC_ALL, "rus");
	bird br;
	br.set();
	fish fs;
	fs.set();
	cat ca;
	ca.set();
	br.get();
	br.red();
	br.get();
	fs.get();
	fs.red();
	fs.get();
	ca.get();
	ca.red();
	ca.get();
}