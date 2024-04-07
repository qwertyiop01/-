#include <iostream>
#include<Windows.h>
#include <conio.h>
using namespace std;

struct element
{
	char brend[20];
	char vid[15];
	int sroc_clygby;
	element* next;
};

element* first, *p, *q;

//Прототипы функций программы
void input(int flag);
void output(int flag);

int main()
{
	setlocale(0, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	do
	{
		system("cls");
		cout << "OBRABOTKA SPISKA:" << endl << endl;	//вывод на экран пунктов вертикального меню
		cout << "1 VVOD" << endl;
		cout << "2 VIVOD" << endl;
		cout << "3 EXIT" << endl << endl;
		cout << "Enter nomer punkta:";
		int n, flag;
		flag = 1;
		cin >> n;
		switch (n)			//оператор выбора
		{
		case 1: input(flag); break;	//вызов функции ввода данных
		case 2: output(flag); break;	//вызов функции вывода данных
		case 3:break;
		}
		if (n == 3) break;
	} while (1);
	return 0;

}



void input(int flag)
{
	first = new element;
	cout << "Введите бренд техники" << endl;
	cin >> first->brend;
	cout << "Введите вид техники" << endl;
	cin >> first->vid;
	cout << "Введите средний срок службы" << endl;
	cin >> first->sroc_clygby;
	first->next = NULL;

	p = first;
	cout << "Ввести следующий элемент (1-да, 0-нет)" << endl;
	cin >> flag;
	system("pause");
	while (flag == 1)
	{
		
		q = new element;
		cout << "Введите бред техники" << endl;
		cin >> q->brend;
		cout << "Введите вид техники" << endl;
		cin >> q->vid;
		cout << "Введите средний срок службы" << endl;
		cin >> q->sroc_clygby;
		p->next = q;
		q->next = NULL;
		p = q;
		cout << "Введите следующий эллемент (1-да, 0-нет)" << endl;
		cin >> flag;
	}

	cout << "" << endl;
	cout << "" << endl;
}



//Функция вывода данных
void output(int flag)
{
	do {
		p = first;
		cout << "Бренд " << "\t" << "Вид " << "\t" << "Срок службы " << "\t" << endl;
		while (p != NULL)
		{
			cout << p->brend << "\t" << p->vid << "\t" << p->sroc_clygby << "\t" << endl;
			p = p->next;
		}
		cout << "Удалить первый элемент 1-Да: ";
		cin >> flag;
		if (flag == 1) {
			p = first->next;
			delete first;
			first = p;
		}
	} while (flag == 1);
	system("pause");



}
