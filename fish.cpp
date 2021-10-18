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
	cin.ignore(32767, '\n');
	cout << "введите породу рыбы" << endl;
	getline(cin, species);
	cout << "введите окрас рыбы" << endl;
	getline(cin, color);
	cout << "введите тип питания рыбы" << endl;
	getline(cin, typeoff);
}
void fish::set(string a, string b, string c)
{
	species = a;
	color = b;
	typeoff = c;
}
void fish::red(int ind, string zam)
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
	default:
		cout << "неверный ввод" << endl;
		break;
	}

}
void fish::get()
{
	cout << "Рыба" << endl;
	cout << "--------------------------------------------------------------------------" << endl;
	cout << "порода рыбы :" << species << endl;
	cout << "окрас рыбы :" << color << endl;
	cout << "тип питания рыбы :" << typeoff << endl;
	cout << "--------------------------------------------------------------------------" << endl;

}
void fish::save()
{
	ofstream fout;
	fout.open("kep.txt", ios_base::app);
	if (!fout.is_open())
	{
		cout << "файл не открылсся";
	}
	else
	{
		fout << 3 << endl << species << endl << color << endl << typeoff << endl;
		fout.close();
	}

}
