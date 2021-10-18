#include "fish.h"
fish::fish()
{
	cout << "����������� ���" << endl;
}
fish::fish(string a, string b, string c)
{
	species = a;
	color = b;
	typeoff = c;
	cout << "����������� ���" << endl;
}
fish::fish(const fish& copy)
{
	species = copy.species;
	color = copy.color;
	typeoff = copy.typeoff;
	cout << "����������� ���" << endl;
}
fish::~fish()
{

	cout << "���������� ���" << endl;
}
void fish::set()
{
	cin.ignore(32767, '\n');
	cout << "������� ������ ����" << endl;
	getline(cin, species);
	cout << "������� ����� ����" << endl;
	getline(cin, color);
	cout << "������� ��� ������� ����" << endl;
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
		cout << "�������� ����" << endl;
		break;
	}

}
void fish::get()
{
	cout << "����" << endl;
	cout << "--------------------------------------------------------------------------" << endl;
	cout << "������ ���� :" << species << endl;
	cout << "����� ���� :" << color << endl;
	cout << "��� ������� ���� :" << typeoff << endl;
	cout << "--------------------------------------------------------------------------" << endl;

}
void fish::save()
{
	ofstream fout;
	fout.open("kep.txt", ios_base::app);
	if (!fout.is_open())
	{
		cout << "���� �� ���������";
	}
	else
	{
		fout << 3 << endl << species << endl << color << endl << typeoff << endl;
		fout.close();
	}

}
