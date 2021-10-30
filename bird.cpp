#include "bird.h"
bird::bird()
{
	cout << "����������� �����" << endl;
}
bird::bird(string a, string b, string c, string d)
{
	species = a;
	color = b;
	typeoff = c;
	habitat = d;
	cout << "����������� �����" << endl;
}
bird::bird(const bird& copy)
{
	species = copy.species;
	color = copy.color;
	typeoff = copy.typeoff;
	habitat = copy.habitat;
	cout << "����������� �����" << endl;
}
bird::~bird() 
{
	cout << "���������� �����" << endl;
}
void bird::set()
{
	cin.ignore(32767, '\n');
	cout << "������� ������ �����" << endl;
	getline(cin, species);
	cout << "������� ����� �����" << endl;
	getline(cin, color);
	cout << "������� ��� ������� �����" << endl;
	getline(cin, typeoff);
	cout << "������� ����� �������� �����" << endl;
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
		cout << "�������� ����" << endl;
		break;
	}

}
void bird::get()
{
	cout << "�����" << endl;
	cout << "--------------------------------------------------------------------------" << endl;
	cout << "������ ����� :" << species << endl;
	cout << "����� ����� :" << color <<  endl;
	cout << "��� ������� ����� :" << typeoff << endl;
	cout << "����� �������� ����� :" << habitat <<endl;
	cout << "--------------------------------------------------------------------------" << endl;
}
void bird::save()
{
	ofstream fout;
	fout.open("kep.txt", ios_base::app);
	if (!fout.is_open())
	{
		cout << "���� �� ���������";
	}
	else
	{
		fout << 1 << endl << species << endl << color << endl << typeoff << endl << habitat << endl;
		fout.close();
	}

}
