#include "menu.h"
int mainMenu()
{
	char choise;
	string zam;
	Keeper massi;
	setlocale(LC_ALL, "rus");
	do {
		system("cls");
		cout << "����" << endl << "�������� ��������" << endl << "1 - ������� ����� ��������\n2 - �������� ������������ ��������\n3 - ������� ������������ ��������\n4 - ��������� �� �����\n5 - ��������� � ����\n6 - ����� ������ �� �����\n0 - �����";
		cout << endl;
		cin >> choise;
		cin.ignore(32767, '\n');
		switch (choise)
		{
		case '1':
			createMenu(massi);
			break;
		case '2':
			changeMenu(massi);
			break;
		case '3':
			deleteMenu(massi);
			break;
		case '4':
			massi.load();
			break;
		case '5':
			massi.save();
			break;
		case '6':
			massi.get();
			break;
		case '0':
			break;
		default:
			cout << "������� ����";
			break;
		}
		system("pause");
	} while (choise != '0');
	return 0;
}
void createMenu(Keeper& massi)
{
	char choise;
	cout << "����� �������� �������\n1 - �����\n2 - ���\n3 - ����\n";
	cin >> choise;
	cin.ignore(32767, '\n');
	if (choise == '1')
	{
		animals* br;
		br = new bird;
		br->set();
		massi.push(br);
	}
	else
	{
		if (choise == '2')
		{
			animals* ca;
			ca = new cat;
			ca->set();
			massi.push(ca);
		}
		else
		{
			if (choise == '3')
			{
				animals* fs;
				fs = new fish;
				fs->set();
				massi.push(fs);
			}
			else
			{
				cout << "������������ ����" << endl;
			}
		}
	}
}
void deleteMenu(Keeper& massi)
{
	int ind;
	massi.get();
	cout << "�������� ����� ������� �������" << endl;
	cin >> ind;
	massi.dele(ind);
}
void changeMenu(Keeper& massi)
{
	string zam;
	int ind, ind2;
	try
	{
		if (massi.getsize() == 0)
		{
			throw exception("��� ���������");
		}
		massi.get();
		cout << "����� �������� �������� c 1 �� " << massi.getsize() << endl;
		cin >> ind;
		if (ind < 0 || ind >= massi.getsize())
		{
			throw exception("��� ���������");
		}
		cin.ignore(32767, '\n');
		massi[ind - 1]->get();
		cout << "����� ������� ��������" << endl;
		cin >> ind2;
		cin.ignore(32767, '\n');
		cout << " �� ����� ������� ��������" << endl;
		getline(cin, zam);
		cin.ignore(32767, '\n');
		massi[ind - 1]->red(ind2, zam);
	}
	catch (const exception& ex)
	{
		cout << "������ " << ex.what();
	}
}