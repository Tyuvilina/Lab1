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
	cout << "������� ������ �����" <<endl;
	cin >> species;
	cout << "������� ����� �����" << endl;
	cin >> color;
	cout << "������� ��� ������� �����" << endl;
	cin >> typeoff;
	cout << "������� ����� �������� �����" << endl;
	cin >> habitat;
}
void bird::red()
{
	int choise;
	string a;
	cout << "��������� ��� ��������\n1 - ������\n2 - �����\n3 - ��� �������\n4 - ����� ��������" << endl;
	cin >> choise;
	switch (choise)
	{
	case 1:
		cout << "������� ������" << endl;
		cin >> a;
		species = a;
		break;
	case 2:
		cout << "������� �����" << endl;
		cin >> a;
		color = a;
		break;
	case 3:
		cout << "������� ��� �������" << endl;
		cin >> a;
		typeoff = a;
		break;
	case 4:
		cout << "������� ����� ��������" << endl;
		cin >> a;
		habitat = a;
		break;
	default:
		cout << "�������� ����" << endl;
		break;
	}

}
void bird::get()
{
	cout << "������ ����� :" << species << endl;
	cout << "����� ����� :" << color <<  endl;
	cout << "��� ������� ����� :" << typeoff << endl;
	cout << "����� �������� ����� :" << habitat <<endl;
}
