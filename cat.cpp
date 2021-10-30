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
	cin.ignore(32767, '\n');
	cout << "введите породу кота" << endl;
	getline(cin, species);
	cout << "введите окрас кота" << endl;
	getline(cin, color);
	cout << "введите владельца кота" << endl;
	getline(cin, ovner);
	cout << "введите кличку кота" << endl;
	getline(cin, nick);
}
void cat::set(string a, string b, string c, string d)
{
	species = a;
	color = b;
	ovner = c;
	nick = d;
}
void cat::red(int ind, string zam)
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
		ovner = zam;
		break;
	case 4:
		nick = zam;
		break;
	default:
		cout << "неверный ввод" << endl;
		break;
	}

}
void cat::get()
{
	cout << "Кошка" << endl;
	cout << "--------------------------------------------------------------------------" << endl;
	cout << "порода кошки :" << species << endl;
	cout << "окрас кошки :" << color << endl;
	cout << "имя владельца кошки :" << ovner << endl;
	cout << "кличка кошки :" << nick << endl;
	cout << "--------------------------------------------------------------------------" << endl;

}
void cat::save()
{
	ofstream fout;
	fout.open("kep.txt", ios_base::app);
	if (!fout.is_open())
	{
		cout << "файл не открылсся";
	}
	else
	{
		fout << 2 << endl << species << endl << color << endl << ovner << endl << nick << endl;
		fout.close();
	}

}

