#include <iostream>
#include <windows.h>
#include <fstream>
#include <string>
#include <iomanip>
#define KOL 2

using namespace std;
fstream water;
int n, i;
class Code
{
	struct sea
	{
		string name;
		int square;
		int depth;
	};
	struct where
	{
		string chact_sveta;
		string ocean;
		sea a;
	}
	h[KOL];
public:
	void menu();
	void vvod();
	void vivod();
	void sort();
	void vibor();
};
void Code::menu()
{
	setlocale(LC_CTYPE, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	do {
		system("cls");
		cout << "Выберите дейстивие:" << endl;
		cout << "1. Создать список" << endl;
		cout << "2. Вывод списка" << endl;
		cout << "3. Сортировка по выбору" << endl;
		cout << "4. Выборка" << endl;
		cout << "5. Выход из программы" << endl;
		cin >> n;
		switch (n) {
		case 1: vvod(); break;
		case 2: vivod(); break;
		case 3: sort(); break;
		case 4: vibor(); break;
		default: printf("Ошибка \n");
		}
		if (n == 5) break;
	} while (1);
}
void Code::vvod()
{
	system("cls");
	
	for (int k = 0; k < KOL; k++)
	{
		cout << "Какая часть света ->";
		cin >> h[k].chact_sveta;
		cout << "К какому океану->";
		cin >> h[k].ocean;
		cout << "Название моря->";
		cin >> h[k].a.name;
		cout << "площадь->";
		cin >> h[k].a.square;
		cout << "высота->";
		cin >> h[k].a.depth;

	} 
	system("pause");
}
void Code::vivod()
{
	system("cls");
	cout << left << setw(30) << "в какой части света" << left << setw(30) << "к какому океану"
		<< left << setw(30) << " море" << left << setw(30) << " площадь" << left << setw(30) << " глубина" << endl;
	for (int k = 0; k < KOL; k++)
	{
		cout << left << setw(30) << h[k].chact_sveta << left << setw(30) << h[k].ocean << left << setw(30)
			<< h[k].a.name << left << setw(30) << h[k].a.square << left << setw(30) << h[k].a.depth << endl;
	}

	system("pause");
	}
	

void Code::sort()
{

	int c = 0;
	system("cls");
	cout << left << setw(30) << "в какой части света" << left << setw(30) << "к какому океану"
		<< left << setw(30) << " море" << left << setw(30) << " площадь" << left << setw(30) << " глубина" << endl;
	for (int k = 0; k < KOL; k++)
	{
		cout << left << setw(30) << h[c].chact_sveta << left << setw(30) << h[c].ocean << left << setw(30)
			<< h[c].a.name << left << setw(30) << h[c].a.square << left << setw(30) << h[c].a.depth << endl;
		c++;
	}
	
	int n;
	cout << "Выберите поле для сортировки:" << endl;
	cout << "1. По глубине " << endl;
	cout << "2. По площади" << endl;
	cin >> n;
	for (int i = 0; i < KOL - 1; i++) {
		for (int j = 0; j < KOL - 1; j++) {
			if (n == 1 && h[j].a.depth > h[j + 1].a.depth || n == 2 && h[j].a.square > h[j + 1].a.square)
			{
				where t = h[j]; // сохраняем текущий элемент во временной переменной
				h[j] = h[j + 1]; // заменяем текущий элемент следующим
				h[j + 1] = t;
			}
		}
	}
	cout << endl;
	for (int i = 0; i < c; i++)
	{
		cout << left << setw(30) << h[i].chact_sveta << left << setw(30) << h[i].ocean << left << setw(30)
			<< h[i].a.name << left << setw(30) << h[i].a.square << left << setw(30) << h[i].a.depth << endl;
	}
	cout << endl;
	system("pause");
}
void Code::vibor()
{
	system("cls");
	int y;
	cout << "Вывести моря глубина или ширина меньше:" << endl;
	cin >> y;
	cout << left << setw(30) << "в какой части света" << left << setw(30) << "к какому океану"
		<< left << setw(30) << " море" << left << setw(30) << " площадь" << left << setw(30) << " глубина" << endl;
	for (int k = 0; k < KOL; k++)
	{
		if ((h[k].a.square < y) || (h[k].a.depth < y))
		{
			cout << left << setw(30) << h[k].chact_sveta << left << setw(30) << h[k].ocean << left << setw(30)
				<< h[k].a.name << left << setw(30) << h[k].a.square << left << setw(30) << h[k].a.depth << endl;
		}
	}
	cout << endl;
	system("pause");
}
void main()
{
	setlocale(LC_CTYPE, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Code a;
	a.menu();
	a.vvod();
	a.vivod();
	a.sort();
	a.vibor();
}