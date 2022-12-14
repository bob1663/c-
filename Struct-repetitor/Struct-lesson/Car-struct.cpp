/*
Реализовать структуру «Машина»(цвет, модель, номер).Номер машины может представлять из себя или пятизначный номер или слово до 8 символов.
Рекомендации: номер реализовать как объединение.
Создать экземпляр структуры «Машина» и реализовать для него следующие функции :
Заполнение машины
Печать машины
Создать массив из 10 экземпляров структуры «Машина» и реализовать для него следующие функции :
Редактировать машину
Печать всех машин
Поиск машины по номеру
*/

#include <iostream>
#include <string>
#include <iomanip>
#define N 10

using namespace std;

typedef struct Car
{
	string color;
	string plate;
	string model;

}CAR;

int GetData(CAR* arr);
void PrintData(CAR* arr, int k);

int main()
{
	setlocale(LC_ALL, "");
	CAR carr[N];
	int kst;
	kst = GetData(carr);
	PrintData(carr, kst);
	return 0;
}

int GetData(CAR* arr)
{
	int k;
	cout << " Enter information about car:";
	for (k = 0;k < N; k++)
	{
		cout << endl << k + 1 << ". Color: ";
		cin.ignore();
		getline(cin, arr[k].color);
		if (arr[k].color.length() == 0)
		{
			break;
		}
		cout << "Plate: ";
		getline(cin, arr[k].plate);
		cout << "Model: ";
		getline(cin, arr[k].model);
		rewind(stdin);
	}
	return k;
}

void PrintData(CAR* arr, int k)
{
	CAR* ptr;
	cout << "\n\n\t\t Introduced list of cars:\n\n";
	for (ptr = arr; ptr < arr + k; ptr++)
	{
		cout << ptr - arr + 1 << ". " << setw(3) << ptr->color << setw(3) << ptr->model << setw(3) << ptr->plate << endl;
	}
}

/*
Red
BC0997MO
Kia Cerato

Blue
BC8000II
Citroen C4

British Racing Green
33123
Aston Martin Vantage
*/


