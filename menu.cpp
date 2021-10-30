#include "menu.h"
int mainMenu()
{
	char choise;
	string zam;
	Keeper massi;
	setlocale(LC_ALL, "rus");
	do {
		system("cls");
		cout << "меню" << endl << "выбирете действие" << endl << "1 - создать новое животное\n2 - изменить существующие животное\n3 - удалить существующие животное\n4 - загрузить из файла\n5 - сохранить в файл\n6 - вывод данных на экран\n0 - выход";
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
			cout << "неверны ввод";
			break;
		}
		system("pause");
	} while (choise != '0');
	return 0;
}
void createMenu(Keeper& massi)
{
	char choise;
	cout << "какое животное создать\n1 - птица\n2 - кот\n3 - рыба\n";
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
				cout << "неправильный ввод" << endl;
			}
		}
	}
}
void deleteMenu(Keeper& massi)
{
	int ind;
	massi.get();
	cout << "выберите какой элемент удалить" << endl;
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
			throw exception("нет элементов");
		}
		massi.get();
		cout << "какое животное изменить c 1 по " << massi.getsize() << endl;
		cin >> ind;
		if (ind < 0 || ind >= massi.getsize())
		{
			throw exception("нет элементов");
		}
		cin.ignore(32767, '\n');
		massi[ind - 1]->get();
		cout << "какую строчку изменить" << endl;
		cin >> ind2;
		cin.ignore(32767, '\n');
		cout << " на какую строчку изменить" << endl;
		getline(cin, zam);
		cin.ignore(32767, '\n');
		massi[ind - 1]->red(ind2, zam);
	}
	catch (const exception& ex)
	{
		cout << "Ошибка " << ex.what();
	}
}