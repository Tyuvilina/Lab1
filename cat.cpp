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
	cout << "������� ������ �����" << endl;
	cin >> species;
	cout << "������� ����� �����" << endl;
	cin >> color;
	cout << "��������� �����" << endl;
	cin >> ovner;
	cout << "������� ������ �����" << endl;
	cin >> nick;
}
void cat::red()
{
	int choise;
	string a;
	cout << "��������� ��� ��������\n1 - ������\n2 - �����\n3 - �������� �����\n4 - ����� ��������" << endl;
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
		ovner = a;
		break;
	case 4:
		cout << "������� ������" << endl;
		cin >> a;
		nick = a;
		break;
	default:
		cout << "�������� ����" << endl;
		break;
	}

}
void cat::get()
{
	cout << "������ ����� :" << species << endl;
	cout << "����� ����� :" << color << endl;
	cout << "��� ��������� :" << ovner << endl;
	cout << "������ :" << nick << endl;
}