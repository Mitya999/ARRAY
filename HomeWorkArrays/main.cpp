#include<iostream>
using namespace std;

//#define ARRAYS_1
//#define ARRAYS_2
//#define ARRAYS_3
//#define ARRAYS_4
//#define ARRAYS_5
//#define ARRAYS_6
//#define TASK_3
//#define TASK_4
#define TASK_5

void main()
{
	setlocale(LC_ALL, "rus");
#ifdef ARRAYS_1
	const int size = 5;
	int arr[size];
	cout << "Введите пять значений элементов массива от нулевого к последнему: "; cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
	cout << arr[0] << "\t" << arr[1] << "\t" << arr[2] << "\t" << arr[3] << "\t" << arr[4];
#endif // ARRAYS_1

#ifdef ARRAYS_2
	const int size = 5; // Объявляем колличество элементов массива.
	int arr[size] = { 3,5,8,13,21 }; // Объявляем массив 'arr' на 'n' элементов.
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
#endif // ARRAYS_2

#ifdef ARRAYS_3
	const int size = 5; // Объявляем колличество элементов массива.
	int arr[size] = { 3,5,8,13,21 }; // Объявляем массив 'arr' на 'n' элементов.
	for (int i = 4; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
#endif // ARRAYS_3

#ifdef ARRAYS_4
	const int size = 5;
	int arr[size];
	cout << "Введите пять значений элементов массива от нулевого к последнему: "; cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
	int sum_arr = arr[0] + arr[1] + arr[2] + arr[3] + arr[4];
	cout << "Сумма этих элементов массива = " << sum_arr;
#endif // ARRAYS_4

#ifdef ARRAYS_5
	const int size = 5;
	int arr[size];
	cout << "Введите пять значений элементов массива от нулевого к последнему: "; cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
	int are_mean = (arr[0] + arr[1] + arr[2] + arr[3] + arr[4]) / 5;
	cout << "Среднее арифметическое этих элементов массива = " << are_mean;
#endif // ARRAYS_5

#ifdef ARRAYS_6
	const int size = 10;
	int arr[size] = { 1,4,8,12,16,20,24,28,32,36 };
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << "  ";
	}
	cout << endl;
	int max, min;
	min = arr[0]; max = arr[9];
	for (int i = 0; i < 10; i++)
	{
		if (min >= arr[i])
		{
			cout << "Минимальный элемент = " << min << endl;
		}
		for (int i = 0; i < 10; i++)
		{
			if (max <= arr[i])
			{
				cout << "Максимальный элемент = " << max << endl;
			}
		}break;
	}
#endif // ARRAYS_6

#ifdef TASK_3
	const int size = 10;
	int arr[size] = { 1,2,3,4,5,6,7,8,9,10 };
	int t; // Временное хранилище для последнего элемента.
	t = arr[size - 1];
	for (int i = size - 2; i >= 0; i--)
	{
		arr[i + 1] = arr[i];
	}
	arr[0] = t;
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "  ";
	}
	cout << endl;
#endif // TASK_3

#ifdef TASK_4
	cout << "\t\t\t Программа перевода десятичного числа в двоичное число." << endl;
	int N;
	cout << "Введите десятичное число: "; cin >> N;

	int i = 1, binary = 0;
	while (N > 0)
	{
		binary += (N % 2) * i;
		N = N / 2;
		i *= 10;
	}
	cout << "Двоичное число: " << binary << endl;
#endif // TASK_4

#ifdef TASK_5
	int N, q;
	cout << "Введите десятичное число: "; cin >> N;
	int hex, hex_ost;
	while (N % 16)
	{
		hex = N / 16;
		hex_ost = N % 16;
		N = hex;
		cout << hex_ost;
	}
#endif // TASK_5

	//cout << "Chislo = " << N << hex << hex_ost;
	//if (hex_ost == 10) cout << hex << "A";
	//if (hex_ost == 11) cout << hex << "B";
	//if (hex_ost == 12) cout << hex << "C";
	//if (hex_ost == 13) cout << hex << "D";
	//if (hex_ost == 14) cout << hex << "E";
	//if (hex_ost == 15) cout << hex << "F";
	//if (hex_ost < 10) cout << hex << hex_ost;
