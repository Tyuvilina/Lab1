#include "cat.h"
cat::cat()
{
	cout << "конструктор кошек" << endl;
}
cat::cat(string a, string b, string c, string d)
{
	species = a;
	color = b;
	ovner = c;
	nick = d;
	cout << "конструктор кошек" << endl;
}
cat::cat(const cat& copy)
{
	species = copy.species;
	color = copy.color;
	ovner = copy.ovner;
	nick = copy.nick;
	cout << "конструктор кошек" << endl;
}
cat::~cat()
{

	cout << "диструктор кошек" << endl;
}
void cat::set()
{
	cout << "введите породу кошки" << endl;
	cin >> species;
	cout << "введите окрас кошки" << endl;
	cin >> color;
	cout << "владельца кошки" << endl;
	cin >> ovner;
	cout << "введите кличку кошки" << endl;
	cin >> nick;
}
void cat::red()
{
	int choise;
	string a;
	cout << "ввыберите что поменять\n1 - порода\n2 - окрас\n3 - владелец кошки\n4 - место обитания" << endl;
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
		ovner = a;
		break;
	case 4:
		cout << "смените кличку" << endl;
		cin >> a;
		nick = a;
		break;
	default:
		cout << "неверный ввод" << endl;
		break;
	}

}
void cat::get()
{
	cout << "порода птицы :" << species << endl;
	cout << "окрас птицы :" << color << endl;
	cout << "имя владельца :" << ovner << endl;
	cout << "кличка :" << nick << endl;
}