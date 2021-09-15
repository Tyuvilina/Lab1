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
	cout << "������� ������ ����" << endl;
	cin >> species;
	cout << "������� ����� ����" << endl;
	cin >> color;
	cout << "������� ��� ������� ����" << endl;
	cin >> typeoff;
}
void fish::red()
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
	default:
		cout << "�������� ����" << endl;
		break;
	}

}
void fish::get()
{
	cout << "������ ���� :" << species << endl;
	cout << "����� ���� :" << color << endl;
	cout << "��� ������� ���� :" << typeoff << endl;
}