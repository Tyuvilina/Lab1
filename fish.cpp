#include "fish.h"
fish::fish()
{
	cout << "конструктор рыб" << endl;
}
fish::fish(string a, string b, string c)
{
	species = a;
	color = b;
	typeoff = c;
	cout << "конструктор рыб" << endl;
}
fish::fish(const fish& copy)
{
	species = copy.species;
	color = copy.color;
	typeoff = copy.typeoff;
	cout << "конструктор рыб" << endl;
}
fish::~fish()
{

	cout << "диструктор рыб" << endl;
}
void fish::set()
{
	cout << "введите породу рыбы" << endl;
	cin >> species;
	cout << "введите окрас рыбы" << endl;
	cin >> color;
	cout << "введите тип питания рыбы" << endl;
	cin >> typeoff;
}
void fish::red()
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
	default:
		cout << "неверный ввод" << endl;
		break;
	}

}
void fish::get()
{
	cout << "порода рыбы :" << species << endl;
	cout << "окрас рыбы :" << color << endl;
	cout << "тип питания рыбы :" << typeoff << endl;
}