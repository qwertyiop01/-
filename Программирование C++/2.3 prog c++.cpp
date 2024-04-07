#include <iostream>
#include <math.h>
using namespace std;

const int m = 3, n = 5;

void vvod(int a[m][n]);
void vivod(int a[m][n]);
void min_z(int a[m][n]);


int main()
{
	setlocale(0, "Russian");
	
	setlocale(0, "Russian");
	int b[m][n];
	vvod(b);
	cout << "Вывод исходной матрицы = " << endl;
	vivod(b);
	min_z(b);
	cout << "Вывод результата =" << endl;
	vivod(b);
	system("pause");

}


void vvod(int a[m][n])
{
	int M=3, N=5, x = 0, y = 0;
	

	cout << "a[N][M], ввод значений ==" << endl;

	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			cin >> a[i][j];
}


void vivod(int a[m][n])
{
	int M = 3, N = 5, x = 0, y = 0;
	for (int i = 0; i < N; i++)
	{

		for (int j = 0; j < M; j++)
		{
			cout << a[i][j] << "\t";
		}
		cout << endl;
	}
}
void min_z(int a[m][n])
{
	int M = 3, N = 5, x = 0, y = 0,min;
	min = a[0][0];

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (a[i][j] < min)
			{
				min = a[i][j];
				x = i;
				y = j;
			}
		}
	}

	cout << "min = " << min << " [" << x + 1 << "," << y + 1 << "]" << endl;
	for (int i = 0; i < N; i++)

	{
		a[i][y] = 0;

	}

	for (int i = 0; i < M; i++)
	{

		a[x][i] = 0;
	}

}
