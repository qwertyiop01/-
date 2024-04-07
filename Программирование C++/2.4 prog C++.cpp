#include<iostream>
#include <windows.h>
#include<fstream>
#include<conio.h>
#include<string>
#include <iomanip>

using namespace std;
fstream water;
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
};
void vvod();
void vivod();
void sort();
void vibor();
int n, i;
int main()
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
		cout << "5. Удалить файл" << endl;
		cout << "6. Выход из программы" << endl;
		cin >> n;
		switch (n) {
		case 1: vvod(); break;
		case 2: vivod(); break;
		case 3: sort(); break;
		case 4: vibor(); break;
		case 5: water.open("моря.txt", ios::out); water.close(); break;
		case 6: break;
		default: printf("Ошибка \n");
		}
		if (n == 6) break;
	} while (1);
}
void vvod()
{
	system("cls");
	water.open("моря.txt", ios::app);
	where h;
	cout << "Сколько добавить данных" << endl;
	int kolvo;
	cin >> kolvo;
	int y = 0;
	do
	{
		cout << "Какая часть света ->";
		cin >> h.chact_sveta;
		cout << "К какому океану->";
		cin >> h.ocean;
		cout << "Название моря->";
		cin >> h.a.name;
		cout << "площадь->";
		cin >> h.a.square;
		cout << "высота->";
		cin >> h.a.depth;
		y++;
		water << left << setw(30)<< h.chact_sveta << left << setw(30) << h.ocean << left << setw(30)
			<< h.a.name << left << setw(30) << h.a.square << left << setw(30) << h.a.depth << endl;
	} while (y < kolvo);
	water.close();
	_getch();
}
void vivod()
{
	system("cls");
	water.open("моря.txt", ios::in);
	where h;
	cout << left << setw(30)<< "в какой части света" << left << setw(30) << "к какому океану"
		<< left << setw(30) << " море" << left << setw(30) << " площадь" << left << setw(30) << " глубина" << endl;
	while ((!water.eof()))
	{
		water >> h.chact_sveta >> h.ocean >> h.a.name >> h.a.square >> h.a.depth;
		if (water.peek() != EOF)
		{
			cout << left << setw(30) << h.chact_sveta << left << setw(30) << h.ocean << left << setw(30)
				<< h.a.name << left << setw(30) << h.a.square << left << setw(30) << h.a.depth << endl;
		}


	}
	water.close();
	_getch();
}
void sort()
{
	where d[25];
	int c = 0;
	water.open("моря.txt", ios::in);
	system("cls");
	cout << left << setw(30) << "в какой части света" << left << setw(30) << "к какому океану"
		<< left << setw(30) << " море" << left << setw(30) << " площадь" << left << setw(30) << " глубина" << endl;
	while (water >> d[c].chact_sveta >> d[c].ocean >> d[c].a.name >> d[c].a.square >> d[c].a.depth)
	{
		cout << left << setw(30) << d[c].chact_sveta << left << setw(30) << d[c].ocean << left << setw(30)
			<< d[c].a.name << left << setw(30) << d[c].a.square << left << setw(30) << d[c].a.depth << endl;
		c++;
	}
	water.close();
	int n;
	cout << "Выберите поле для сортировки:" << endl;
	cout << "1. По глубине " << endl;
	cout << "2. По площади" << endl;
	cin >> n;
	for (int i = 0; i < c - 1; i++) {
		for (int j = 0; j < c - 1; j++) {
			if (n == 1 && d[j].a.depth > d[j + 1].a.depth || n == 2 && d[j].a.square > d[j + 1].a.square)
			{
				where t = d[j]; // сохраняем текущий элемент во временной переменной
				d[j] = d[j + 1]; // заменяем текущий элемент следующим
				d[j + 1] = t;
			}
		}
	}
	cout << endl;
	for (int i = 0; i < c; i++)
	{
		cout << left << setw(30) << d[i].chact_sveta << left << setw(30) << d[i].ocean << left << setw(30)
			<< d[i].a.name << left << setw(30) << d[i].a.square << left << setw(30) << d[i].a.depth << endl;
	}
	cout << endl;
	system("pause");
}
void vibor()
{
	system("cls");
	where d;
	water.open("моря.txt", ios::in);
	int k;
	cout << "Вывести моря глубина или ширина меньше:" << endl;
	cin >> k;
	cout << left << setw(30) << "в какой части света" << left << setw(30) << "к какому океану"
		<< left << setw(30) << " море" << left << setw(30) << " площадь" << left << setw(30) << " глубина" << endl;
	while (!water.eof())
	{
		water >> d.chact_sveta >> d.ocean >> d.a.name >> d.a.square >> d.a.depth;
		if (water.peek() == EOF) break;
		if ((d.a.square < k) || (d.a.depth < k))
		{
			cout << left << setw(30) << d.chact_sveta << left << setw(30) << d.ocean << left << setw(30)
				<< d.a.name << left << setw(30) << d.a.square << left << setw(30) << d.a.depth << endl;
		}
	}
	water.close();
	system("pause");
}