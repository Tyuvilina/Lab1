#include "cat.h"
cat::cat()
{
	cout << "����������� �����" << endl;
}
cat::cat(string a, string b, string c, string d)
{
	species = a;
	color = b;
	ovner = c;
	nick = d;
	cout << "����������� �����" << endl;
}
cat::cat(const cat& copy)
{
	species = copy.species;
	color = copy.color;
	ovner = copy.ovner;
	nick = copy.nick;
	cout << "����������� �����" << endl;
}
cat::~cat()
{

	cout << "���������� �����" << endl;
}
void cat::set()
{	
	cin.ignore(32767, '\n');
	cout << "������� ������ ����" << endl;
	getline(cin, species);
	cout << "������� ����� ����" << endl;
	getline(cin, color);
	cout << "������� ��������� ����" << endl;
	getline(cin, ovner);
	cout << "������� ������ ����" << endl;
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
		cout << "�������� ����" << endl;
		break;
	}

}
void cat::get()
{
	cout << "�����" << endl;
	cout << "--------------------------------------------------------------------------" << endl;
	cout << "������ ����� :" << species << endl;
	cout << "����� ����� :" << color << endl;
	cout << "��� ��������� ����� :" << ovner << endl;
	cout << "������ ����� :" << nick << endl;
	cout << "--------------------------------------------------------------------------" << endl;

}
void cat::save()
{
	ofstream fout;
	fout.open("kep.txt", ios_base::app);
	if (!fout.is_open())
	{
		cout << "���� �� ���������";
	}
	else
	{
		fout << 2 << endl << species << endl << color << endl << ovner << endl << nick << endl;
		fout.close();
	}

}

