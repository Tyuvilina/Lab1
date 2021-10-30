#include "bird.h"
bird::bird()
{
	cout << "конструктор птицы" << endl;
}
bird::bird(string a, string b, string c, string d)
{
	species = a;
	color = b;
	typeoff = c;
	habitat = d;
	cout << "конструктор птицы" << endl;
}
bird::bird(const bird& copy)
{
	species = copy.species;
	color = copy.color;
	typeoff = copy.typeoff;
	habitat = copy.habitat;
	cout << "конструктор птицы" << endl;
}
bird::~bird() 
{
	cout << "диструктор птицы" << endl;
}
void bird::set()
{
	cin.ignore(32767, '\n');
	cout << "введите породу птицы" << endl;
	getline(cin, species);
	cout << "введите окрас птицы" << endl;
	getline(cin, color);
	cout << "введите тип питания птицы" << endl;
	getline(cin, typeoff);
	cout << "введите место обитания птицы" << endl;
	getline(cin, habitat);
}
void bird::set(string a, string b, string c, string d)
{
	species = a;
	color = b;
	typeoff = c;
	habitat = d;
}
void bird::red(int ind, string zam)
{
	switch (ind)
	{
	case 1:
		species = zam;
		break;
	case 2:
		color = zam;
		break;
	case 3:
		typeoff = zam;
		break;
	case 4:
		habitat = zam;
		break;
	default:
		cout << "неверный ввод" << endl;
		break;
	}

}
void bird::get()
{
	cout << "Птица" << endl;
	cout << "--------------------------------------------------------------------------" << endl;
	cout << "порода птицы :" << species << endl;
	cout << "окрас птицы :" << color <<  endl;
	cout << "тип питания птицы :" << typeoff << endl;
	cout << "место обитания птицы :" << habitat <<endl;
	cout << "--------------------------------------------------------------------------" << endl;
}
void bird::save()
{
	ofstream fout;
	fout.open("kep.txt", ios_base::app);
	if (!fout.is_open())
	{
		cout << "файл не открылсся";
	}
	else
	{
		fout << 1 << endl << species << endl << color << endl << typeoff << endl << habitat << endl;
		fout.close();
	}

}
