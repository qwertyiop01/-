#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	setlocale(0, "Russian");
	int M, N, a[3][5],x=0 ,y=0 ;

	cout << "Ввод количества строк и столбцов == " << endl;
	cin >> N >> M;

	cout << "a[N][M], ввод значений ==" << endl;

	for (int i = 0; i < N; i++)
		for ( int j = 0; j < M; j++)
			cin >> a[i][j];


	cout << "Вывод исходной матрицы = "<< endl;

	for (int i = 0; i < N; i++)
	{

		for (int j = 0; j < M; j++)
		{
			cout << a[i][j] << "\t";
		}
		cout << endl;
	}


	int min = a[0][0];

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
	
	cout << "min = " << min << " [" << x+1 << "," << y+1 << "]" << endl;
	for (int i = 0; i < N; i++)
	
{
		a[i][y] = 0;
	
	}
	
	for (int i = 0; i < M; i++)
	{
		
		a[x][i] = 0;
	}

	cout << "Вывод результата =" << endl;
	for (int i = 0; i < N; i++)
	{

		for (int j = 0; j < M; j++)
		{
			cout << a[i][j] << "\t";
		}
		cout << endl;
	}
	
	
	system("pause");

}
