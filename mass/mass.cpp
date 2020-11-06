// Создает целочисленный массив размерности N = 100. 
// Элементы массивы должны принимать случайное значение в диапазоне от -99 до 99.

// 2.Отсортировать заданный в пункте 1 элементы массива […] сортировкой. Определить время, затраченное на сортировку, используя библиотеку chrono

#include <iostream>
#include <ctime>
#include <chrono>

//#include <iomanip>


using namespace std;
using namespace chrono;


void bubbleSort(int a[])
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10 - i - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				//swap(a[j] , a[j+1]);
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;

			}
		}
	}
}

void sort()
{
	const int SIZE = 10;
	int N[SIZE], min, max, midle;

	srand(time(NULL)); // инициализация генерации случайных чисел

	system_clock::time_point start = system_clock::now();

	cout << endl;

	for (int i = 0; i < 10; i++)
	{
		N[i] = (rand() % 100 - 35);
	}

	cout << "Before Sorting: " << " ";
	for (int i = 0; i < 10; i++)
	{

		cout << N[i] << " ";

	}

	cout << endl;
	cout << endl;

	bubbleSort(N);


	cout << "After Sorting: " << " ";
	for (int i = 0; i < 10; i++)
	{
		cout << N[i] << " ";
	}

	cout << endl;
	cout << endl;

	int a;
	cout << "Insert the number: " << " ";
	cin >> a;
	cout << "less than a : " << " ";
	for (int i = 0; i < 10; ++i)
	{
		if (a < N[i]) { cout << N[i] << " "; }
	}

	cout << endl;
	cout << endl;

	int b;
	cout << "Insert the number: " << " ";
	cin >> b;
	cout << "number more a : " << " ";
	for (int i = 0; i < 10; ++i)
	{
		if (b > N[i]) { cout << N[i] << " "; }
	}

	cout << endl;
	cout << endl;

	system_clock::time_point end = system_clock::now();
	duration<double> sec = end - start;

	cout << "seconds: " << sec.count() << endl;
	cout << endl;
	cout << "-----------------------------------------------------" << endl;

	min = N[0];
	max = N[0];

	for (int i = 1; i < SIZE; i++)
	{
		if (N[i] < min) { min = N[i]; }
		if (N[i] > max) { max = N[i]; }
	}

	midle = N[0];
	for (int i = 1; i < SIZE; i++)
	{
		if (N[i] = max / min) { midle = N[i]; }
	}


	cout << "Min: " << min << endl;
	cout << "Max: " << max << endl;
	cout << "Midle: " << midle << endl;

	cout << endl;



	//cout << "Number a: " << a << endl;

	cout << endl;

}

int main()
{

	sort();

	system("pause");
}
