#include "bird.h"
#include "cat.h"
#include "fish.h"
#include "Keeper.h"
int main(void)
{
	char choise, choise1;
	int ind, ind2;
	string zam;
	Keeper massi;
	animals* mas;
	setlocale(LC_ALL, "rus");
	do {
		system("cls");
		cout << "меню" << endl << "выбирете действие" << endl << "1 - создать новое животное\n2 - изменить существующие\n3 - загрузить из файла\n4 - выгрузить в файл\n5 - вывод данных на экран";
		cout << endl;
		cin >> choise;
		cin.ignore(32767, '\n');
		switch (choise)
		{
		case '1':
			cout << "какое животное создать\n1 - птица\n2 - кот\n3 - рыба\n";
			cin >> choise1;
			cin.ignore(32767, '\n');
			if (choise1 == '1')
			{
				animals* br;
				br = new bird;
				br->set();
				massi.push(br);
			}
			else
			{
				if (choise1 == '2')
				{
					animals* ca;
					ca = new cat;
					ca->set();
					massi.push(ca);
				}
				else
				{
					if (choise1 == '3')
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
			break;
		case '2':
			try
			{
				if (massi.getsize() == 0)
				{
					throw exception("нет элементов");
				}
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
			break;
		case '3':
			massi.load();
			break;
		case '4':
			massi.save();
			break;
		case '5':
			for (int i = 0; i < massi.getsize(); i++)
			{
				massi[i]->get();

			}
			break;
		case '0':
			break;
		default:
			cout << "неверны ввод";
			break;
		}
		system("pause");
	} while (choise != '0');

}
