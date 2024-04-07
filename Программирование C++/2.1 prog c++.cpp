#include <iostream>
#include<Windows.h>
using namespace std;

struct element
{
	char brend[20];
	char vid[15];
	int sroc_clygby;
	element* next;
};

element* first, *p, *q;

int main()
{
	setlocale(0, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	system("cls");
	first = new element;
	cout << "Введите бренд техники" << endl;
	cin >> first->brend;
	cout << "Введите вид техники" << endl;
	cin >> first->vid;
	cout << "Введите средний срок службы" << endl;
	cin >> first->sroc_clygby;
	first->next = NULL;

	p = first;
	int flag = 1;
	cout << "Ввести следующий элемент (1-да, 0-нет)" << endl;
	cin >> flag;
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
	

	return 0;

}
