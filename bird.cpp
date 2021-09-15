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
	cout << "введите породу птицы" <<endl;
	cin >> species;
	cout << "введите окрас птицы" << endl;
	cin >> color;
	cout << "введите тип питания птицы" << endl;
	cin >> typeoff;
	cout << "введите место обитания птицы" << endl;
	cin >> habitat;
}
void bird::red()
{
	int choise;
	string a;
	cout << "ввыберите что поменять\n1 - порода\n2 - окрас\n3 - тип питания\n4 - место обитания" << endl;
	cin >> choise;
	switch (choise)
	{
	case 1:
		cout << "смените породу" << endl;
		cin >> a;
		species = a;
		break;
	case 2:
		cout << "смените окрас" << endl;
		cin >> a;
		color = a;
		break;
	case 3:
		cout << "смените тип питания" << endl;
		cin >> a;
		typeoff = a;
		break;
	case 4:
		cout << "смените место обитания" << endl;
		cin >> a;
		habitat = a;
		break;
	default:
		cout << "неверный ввод" << endl;
		break;
	}

}
void bird::get()
{
	cout << "порода птицы :" << species << endl;
	cout << "окрас птицы :" << color <<  endl;
	cout << "тип питания птицы :" << typeoff << endl;
	cout << "место обитания птицы :" << habitat <<endl;
}
