//int const size = 10;
//int i;
//int massiv[size];
//srand(time(0));
//for (i = 0; i < size; i++)
//{
//	massiv[i] = rand() % 21 - 10;
//	cout << massiv[i] << " ";
//}
//int sum = 0, min = 0, max = 0, proiz = 1, proizchetnix = 1, proizlf = 0;
//int summinus = 0, k = 0, lastminus, minim;
//for (int i = 0; i < size; i++)
//{
//	if (massiv[i] < 0)
//	{
//		if (k > 0)
//		{
//			sum += massiv[i];
//		}
//		summinus += massiv[i];
//		k++;
//	}
//	if (massiv[i] % 2 == 0)
//	{
//		proizchetnix *= massiv[i];
//	}
//}
//for (int j = 0; j < size; j++)
//{
//	if (massiv[min] > massiv[j])
//	{
//		min = j;
//	}
//	else if (massiv[max] < massiv[j])
//	{
//		max = j;
//	}
//	if (massiv[j] > min && massiv[j] < max)
//	{
//		proiz *= massiv[j];
//	}
//	if (massiv[j] < 0)
//	{
//		lastminus = j;
//	}
//
//}
//for (int j = 0; j < size; j++) {
//	if (massiv[j] < 0)
//	{
//		minim = j;
//		break;
//	}
//}
//for (int j = minim + 1; j < lastminus; j++)
//{
//	proizlf += massiv[j];
//}
//
//cout << "\nСумма отрицательных элементов = " << summinus;
//cout << "\nПроизведение элементов, находящихся между min и max элементами = " << proiz;
//cout << "\nПроизведение элементов с четными номерами = " << proizchetnix;
//cout << "\nСуммa элементов, находящихся между первым и последним отрицательными элементами = " << proizlf;

//Написать программу, реализующую сортировку массива методом усовершенствованной сортировки пузырьковым методом.
//Усовершенствование состоит в том, что бы анализировать количество перестановок на каждом шагу,
//если это количество равно нулю, то продолжать сортировку нет смысла – массив отсортирован.

//#include <iostream>
//#include <stdio.h>
//#include <math.h>
//#include <Windows.h>
//#include <ctime>
//
//using namespace std;
//
//int main() {
//
//	system("chcp 1251");
//	srand(time(NULL));
//	int const size = 100;
//	int arr[size];
//	int count = 0, n = 0;
//	for (int i = 0; i < size; i++)
//	{
//		if (i % 10 == 0)
//		{
//			cout << "\n";
//		}
//		arr[i] = rand() % 10;
//		cout << arr[i] << " ";
//	}
//	cout << "\n\nSorted array: " << endl;
//	for (int i = 0; i < size; i++) {
//		count = 0;
//		n++;
//		for (int j = (size - 1); j > i; j--) {
//			if (arr[j] < arr[j - 1]){
//				count++;
//				swap(arr[j], arr[j - 1]);				
//			}		
//		}
//		if (count == 0)
//		{
//			break;
//		}
//	}
//	for (int i = 0; i < size; i++)
//	{
//		if (i % 10 == 0)
//		{
//			cout << "\n";
//		}
//		cout << arr[i] << " ";
//	}
//	cout << "\n\nКол-во проходов: " << n << endl;
//}

//Напишите программу, которая создает двухмерный массив и заполняет его по следующему принципу :
//пользователь вводит число(например, 3) первый элемент массива принимает значение этого числа,
//последующий элемент массива принимает значение этого числа + 1 (т.е. 4 для нашего примера),
//третий элемент массива предыдущий элемент + 1 (т.е. 5 для нашего примера).Созданный массив вывести на экран.

//#include <iostream>
//#include <stdio.h>
//#include <math.h>
//#include <Windows.h>
//#include <ctime>
//
//using namespace std;
//
//int main() {
//
//	system("chcp 1251");
//	int arr[5][5];
//	for (int i = 0; i < 5; i++)
//	{
//		cin >> arr[i][0];
//	}
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 1; j < 5; j++)
//		{
//			arr[i][j] = arr[i][j - 1] * 2;
//
//		}
//	}
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			cout << arr[i][j] << " ";
//
//		}
//		cout << endl;
//	}
//}

//Создайте двухмерный массив.Заполните его случайными числами и покажите на экран.
//Пользователь выбирает количество сдвигов и положение(влево, вправо, вверх, вниз).
//Выполнить сдвиг массива и показать на экран полученный результат.Сдвиг циклический.
//Например, если мы имеем следующий массив
//120453453901 и пользователь выбрал сдвиг на 2 разряда вправо, то мы получим
//531204014539

//#include <iostream>
//#include <stdio.h>
//#include <math.h>
//#include <Windows.h>
//#include <ctime>
//
//using namespace std;
//
//int main() {
//	system("chcp 1251");
//	srand(time(NULL));
//	int arr[5][5], arr2[5][5];
//	char v;
//	cout << "Массив: " << endl;
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			arr[i][j] = rand() % 10;
//		}
//	}
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			cout << arr[i][j] << " ";
//		}
//		cout << endl;
//	}
//	do {
//		cout << "\nКак сдвинуть массив:\n'l'-Влево\n'r'-Вправо\n'd'-Вниз\n'u'-Вверх\n";
//		cin >> v;
//		switch (v)
//		{
//		case 'l':
//			int sdleft;
//			cout << "\nНа сколько разрядов нужно сдвинуть: " << endl;
//			cin >> sdleft;
//			for (int i = 0; i < 5; i++)
//			{
//				for (int j = 0; j < 5; j++)
//				{
//					if (j < 5 - sdleft)
//						arr2[i][j] = arr[i][j + sdleft];
//					else
//						arr2[i][j] = arr[i][j - (5 - sdleft)];
//				}
//			}
//			cout << "\nВаш массив со сдвигом влево: " << endl;
//			for (int i = 0; i < 5; i++)
//			{
//				for (int j = 0; j < 5; j++)
//				{
//					cout << arr2[i][j] << " ";
//				}
//				cout << endl;
//			}
//			break;
//		case 'r':
//			int sdright;
//			cout << "\nНа сколько разрядов нужно сдвинуть: " << endl;
//			cin >> sdright;
//			for (int i = 0; i < 5; i++)
//			{
//				for (int j = 0; j < 5; j++)
//				{
//					if (5 - sdright + j > 5 - 1)
//						arr2[i][j] = arr[i][j - sdright];
//					else
//						arr2[i][j] = arr[i][5 - sdright + j];
//				}
//			}
//			cout << "\nВаш массив со сдвигом вправо: " << endl;
//			for (int i = 0; i < 5; i++)
//			{
//				for (int j = 0; j < 5; j++)
//				{
//					cout << arr2[i][j] << " ";
//				}
//				cout << endl;
//			}
//			break;
//		case 'd':
//			int sddown;
//			cout << "\nНа сколько разрядов нужно сдвинуть: " << endl;
//			cin >> sddown;
//			for (int i = 0; i < 5; i++)
//			{
//				for (int j = 0; j < 5; j++)
//				{
//					if (5 - sddown + i > 5 - 1)
//						arr2[i][j] = arr[i - sddown][j];
//					else
//						arr2[i][j] = arr[5 - sddown + i][j];
//				}
//			}
//			cout << "\nВаш массив со сдвигом вниз: " << endl;
//			for (int i = 0; i < 5; i++)
//			{
//				for (int j = 0; j < 5; j++)
//				{
//					cout << arr2[i][j] << " ";
//				}
//				cout << endl;
//			}
//			break;
//		case 'u':
//			int sdup;
//			cout << "\nНа сколько разрядов нужно сдвинуть: " << endl;
//			cin >> sdup;
//			for (int i = 0; i < 5; i++)
//			{
//				for (int j = 0; j < 5; j++)
//				{
//					if (sdup + i - 5 < 0)
//						arr2[i][j] = arr[i + sdup][j];
//					else
//						arr2[i][j] = arr[sdup + i - 5][j];
//				}
//			}
//			cout << "\nВаш массив со сдвигом вверх: " << endl;
//			for (int i = 0; i < 5; i++)
//			{
//				for (int j = 0; j < 5; j++)
//				{
//					cout << arr2[i][j] << " ";
//				}
//				cout << endl;
//			}
//			break;
//		default:
//			exit(0);
//		}
//
//		for (int i = 0; i < 5; i++)
//		{
//			for (int j = 0; j < 5; j++)
//			{
//				arr[i][j] = arr2[i][j];
//			}
//		}
//
//	} while (true);
//}