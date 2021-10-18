#include "Keeper.h"
Keeper::Keeper()
{
	head = 0;
	size = 0;
}
Keeper::~Keeper()
{
	elem* buf;
	while (head->ukaz != 0)
	{
		buf = head;
		head = head->ukaz;
		buf->str->~animals();
		delete(buf);
	}
	head->str->~animals();
	delete(head);
}
void Keeper::push(animals* a)
{
	elem* newHead;
	newHead = new elem;
	if (size == 0)
	{
		newHead->str = a;
		size++;
		newHead->ukaz = 0;
	}
	else
	{
		newHead->str = a;
		newHead->ukaz = head;
		size++;

	}
	head = newHead;
}
animals* Keeper::operator[] (const int index)
{
	elem* buf = head;
	for (int i = 0; i < size - index - 1; i++)
	{
		buf = buf->ukaz;
	}
	return(buf->str);
}
void Keeper::save()
{
	ofstream fout;
	fout.open("kep.txt", ios_base::out);
	if (!fout.is_open())
	{
		cout << "файл не открылся" << endl;
	}
	else
	{
		fout << size << endl;
		fout.close();
		elem* buf = head;
		for (int i = 0; i < size; i++)
		{
			buf->str->save();
			buf = buf->ukaz;
		}
	}
	
}
void Keeper::load()
{
	ifstream fin;
	int choise;
	int specsize;
	string a, b, c, d;
	animals* an;
	fin.open("kep.txt");
	if (!fin.is_open())
	{
		cout << "файл не открылся" << endl;
	}
	else
	{
		fin >> specsize;
		for (int i = 0; i < specsize; i++)
		{
			fin >> choise;
			fin.ignore(32767, '\n');
			if (choise == 1)
			{
				getline(fin, a);
				getline(fin, b);
				getline(fin, c);
				getline(fin, d);
				bird* br;
				br = new bird;
				br->set(a, b, c, d);
				an = br;
				push(an);
			}
			if (choise == 2)
			{
				getline(fin, a);
				getline(fin, b);
				getline(fin, c);
				getline(fin, d);
				cat* ca;
				ca = new cat;
				ca->set(a, b, c, d);
				an = ca;
				push(an);
			}
			if (choise == 3)
			{
				getline(fin, a);
				getline(fin, b);
				getline(fin, c);
				fish* fs;
				fs = new fish;
				fs->set(a, b, c);
				an = fs;
				push(an);
			}

		}

	}

}
int Keeper::getsize()
{
	return size;
}