/*
1. —оздать игровое поле по размерам 28х40, где стенки - это знак "#"
2. —нежинка - "*". —делать так, чтобы верхн€€ строчка случайно заполн€лась снежинкой и после замен€лась
*/
#include <iostream>
#include "windows.h"
using namespace std;
int main()
{

	srand(time(NULL));
	const int N=28 , M=40;
	char arr[N][M];
	int x1, y1,povtor;
	//For zapolnenia
	for (int i = 0; i < N; i++)
	{
		
		for (int j = 0; j < M; j++)
		{
			if (j == 0 || j == M - 1)arr[i][j] = '|';
			else if (i == 0 || i == N - 1)arr[i][j] = '_';
			else arr[i][j] = ' ';
		}
	
	}
	arr[0][0] = '+';
	arr[N-1][M-1] = '+';
	arr[0][M-1] = '+';
	arr[N-1][0] = '+';
	x1 = 1;
	y1 = 1;
	while (true)
	{
		povtor = 1+ rand()%5;
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < M; j++)
			{
				for (int k = 0; k < povtor; k++)
				{
					x1 = 1 + rand() % (N - 2); // coordination of rows
					y1 = 1 + rand() % (M - 2); // coordination of coll0
					arr[x1][y1] = '*';
				}
				for (int k = 0; k < povtor; k++)
				{
					x1 = 1 + rand() % (N - 2); // coordination of rows
					y1 = 1 + rand() % (M - 2); // coordination of coll0
					arr[x1][y1] = ' ';

				}

				cout << arr[i][j];
			}
			cout << "\n";
		}
		Sleep(500);
		system("cls");
	}

}