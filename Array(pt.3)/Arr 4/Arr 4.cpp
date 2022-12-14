//Написать функцию, добавляющую столбец двухмерному массиву в указанную позицию.

//#include <iostream>
//#include <ctime>
//#include <Windows.h>
//using namespace std;
//void Func(int** arr, int stroki, int *stolbci,int pos);
//int main()
//{
//    srand(time(0));
//    int stroki,stolbci;
//    cin >> stroki >> stolbci;
//    int** arr = new int* [stroki];
//    for (int i = 0; i < stroki; i++)
//    {
//        arr[i] = new int[stolbci];
//    }
//    for (int i = 0; i < stroki; i++)
//    {
//        for (int j = 0; j < stolbci; j++)
//        {
//            arr[i][j] = rand() % 100;
//        }
//    }
//    for (int i = 0; i < stroki; i++)
//    {
//        for (int j = 0; j < stolbci; j++)
//        {
//            cout << arr[i][j] << " ";
//        }
//        cout << endl;
//    }
//    int pos;
//    cin >> pos;
//    Func(arr, stroki, &stolbci, pos);
//    for (int i = 0; i < stroki; i++)
//    {
//        for (int j = 0; j < stolbci; j++)
//        {
//            cout << arr[i][j] << " ";
//        }
//        cout << endl;
//    }
//    delete[] arr;
//}
//
//void Func(int** arr, int stroki, int *stolbci, int pos)
//{
//    (*stolbci)++;
//    for (int i = 0; i < stroki; i++)
//    {
//        int* newstroka = new int[*stolbci];
//        int tmp = 0;
//        for (int j = 0; j < *stolbci; j++)
//        {
//            if (j == pos)
//            {
//                newstroka[tmp] = 0;
//                tmp++;
//            }
//            newstroka[tmp] = arr[i][j];
//            tmp++;
//        }
//        delete[] arr[i];
//        arr[i] = newstroka;
//    }
//}

//---------------------------------------------------------------------------------------------------------------------

//Написать функцию, удаляющую столбец двухмерного массива по указанному номеру.

//#include <iostream>
//#include <ctime>
//#include <Windows.h>
//using namespace std;
//void Func(int** arr, int stroki, int stolbci, int pos);
//int main()
//{
//	srand(time(0));
//	int stroki, stolbci;
//	cin >> stroki >> stolbci;
//	int** arr = new int* [stroki];
//	for (int i = 0; i < stroki; i++)
//	{
//		arr[i] = new int[stolbci];
//	}
//	for (int i = 0; i < stroki; i++)
//	{
//		for (int j = 0; j < stolbci; j++)
//		{
//			arr[i][j] = rand() % 100;
//		}
//	}
//	for (int i = 0; i < stroki; i++)
//	{
//		for (int j = 0; j < stolbci; j++)
//		{
//			cout << arr[i][j] << " ";
//		}
//		cout << endl;
//	}
//	int pos;
//	cin >> pos;
//	Func(arr, stroki, stolbci, pos);
//	for (int i = 0; i < stroki; i++)
//	{
//		for (int j = 0; j < stolbci-1; j++)
//		{
//			cout << arr[i][j] << " ";
//		}
//		cout << endl;
//	}
//	delete[] arr;
//}
//
//void Func(int** arr, int stroki, int stolbci, int pos)
//{
//	for (int i = 0; i < stroki; i++)
//	{
//		int* newstroka = new int[stolbci-1];
//		int tmp = 0;
//		for (int j = 0; j < stolbci; j++)
//		{
//			if (j < pos)
//			{
//				newstroka[tmp] = arr[i][j];
//				tmp++;
//			}
//			else
//			{
//				newstroka[tmp] = arr[i][j + 1];
//				tmp++;
//			}
//			
//		}
//		delete[] arr[i];
//		arr[i] = newstroka;
//	}
//}


//---------------------------------------------------------------------------------------------------------------------
/*Дана матрица порядка MxN(M строк, N столбцов).
Необходимо заполнить ее значениями и написать функцию,
осуществляющую циклический сдвиг строк и / или столбцов массива указанное количество раз и в указанную сторону.*/

//#include <iostream>
//#include <ctime>
//#include <Windows.h>
//using namespace std;
//
//void Func(int** arr, int** arr2, int stroki, int stolbci);
//int main()
//{
//	setlocale(LC_ALL, "ru");
//	srand(time(0));
//	int stroki, stolbci;
//	cin >> stroki >> stolbci;
//	int** arr = new int* [stroki];
//	for (int i = 0; i < stroki; i++)
//	{
//		arr[i] = new int[stolbci];
//
//	}
//	for (int i = 0; i < stroki; i++)
//	{
//		for (int j = 0; j < stolbci; j++)
//		{
//			arr[i][j] = rand() % 100;
//		}
//	}
//	for (int i = 0; i < stroki; i++)
//	{
//		for (int j = 0; j < stolbci; j++)
//		{
//			cout << arr[i][j] << " ";
//		}
//		cout << endl;
//	}
//	int** arr2 = new int* [stroki];
//	for (int i = 0; i < stroki; i++)
//	{
//		arr2[i] = new int[stolbci];
//
//	}
//	Func(arr,arr2, stroki, stolbci);
//	delete[] arr;
//}
//
//void Func(int** arr,int** arr2, int stroki, int stolbci)
//{
//	char v;
//	do {
//		cout << "\nКак сдвинуть массив:\n'l'-Влево\n'r'-Вправо\n'd'-Вниз\n'u'-Вверх\n";
//		cin >> v;
//		switch (v)
//		{
//		case 'l':
//			int sdleft;
//			cout << "\nНа сколько разрядов нужно сдвинуть: " << endl;
//			cin >> sdleft;
//			for (int i = 0; i < stroki; i++)
//			{
//				for (int j = 0; j < stolbci; j++)
//				{
//					if (j < stolbci - sdleft)
//						arr2[i][j] = arr[i][j + sdleft];
//					else
//						arr2[i][j] = arr[i][j - (stolbci - sdleft)];
//				}
//			}
//			cout << "\nВаш массив со сдвигом влево: " << endl;
//			for (int i = 0; i < stroki; i++)
//			{
//				for (int j = 0; j < stolbci; j++)
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
//			for (int i = 0; i < stroki; i++)
//			{
//				for (int j = 0; j < stolbci; j++)
//				{
//					if (stolbci - sdright + j > stolbci - 1)
//						arr2[i][j] = arr[i][j - sdright];
//					else
//						arr2[i][j] = arr[i][stolbci - sdright + j];
//				}
//			}
//			cout << "\nВаш массив со сдвигом вправо: " << endl;
//			for (int i = 0; i < stroki; i++)
//			{
//				for (int j = 0; j < stolbci; j++)
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
//			for (int i = 0; i < stroki; i++)
//			{
//				for (int j = 0; j < stolbci; j++)
//				{
//					if (stolbci - sddown + i > stolbci - 1)
//						arr2[i][j] = arr[i - sddown][j];
//					else
//						arr2[i][j] = arr[stolbci - sddown + i][j];
//				}
//			}
//			cout << "\nВаш массив со сдвигом вниз: " << endl;
//			for (int i = 0; i < stolbci; i++)
//			{
//				for (int j = 0; j < stroki; j++)
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
//			for (int i = 0; i < stroki; i++)
//			{
//				for (int j = 0; j < stolbci; j++)
//				{
//					if (sdup + i - stolbci < 0)
//						arr2[i][j] = arr[i + sdup][j];
//					else
//						arr2[i][j] = arr[sdup + i - stolbci][j];
//				}
//			}
//			cout << "\nВаш массив со сдвигом вверх: " << endl;
//			for (int i = 0; i < stroki; i++)
//			{
//				for (int j = 0; j < stolbci; j++)
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
//		for (int i = 0; i < stroki; i++)
//		{
//			for (int j = 0; j < stolbci; j++)
//			{
//				arr[i][j] = arr2[i][j];
//			}
//		}
//
//	} while (true);
//}


//---------------------------------------------------------------------------------------------------------------------
/*Транспонирование матрицы – это операция, после которой
столбцы прежней матрицы становятся строками, а строки столбцами.
Напишите функцию транспонирования матрицы.*/

//#include <iostream>
//#include <ctime>
//#include <Windows.h>
//
//using namespace std;
//
//void Func(int** arr, int stroki, int stolbci);
//
//int main()
//{
//    setlocale(LC_ALL, "ru");
//    srand(time(0));
//    int stroki,stolbci;
//    cin >> stroki >> stolbci;
//    int** arr = new int* [stroki];
//    for (int i = 0; i < stroki; i++)
//    {
//        arr[i] = new int[stolbci];
//    }
//    for (int i = 0; i < stroki; i++)
//    {
//        for (int j = 0; j < stolbci; j++)
//        {
//            arr[i][j] = rand() % 100;
//        }
//    }
//    for (int i = 0; i < stroki; i++)
//    {
//        for (int j = 0; j < stolbci; j++)
//        {
//            cout << arr[i][j] << " ";
//        }
//        cout << endl;
//    }  
//    cout << "\nТранспонована матриця\n" << endl;
//    Func(arr, stroki, stolbci);  
//}
//
//void Func(int** arr,int stroki, int stolbci)
//{
//    int** trans;
//    trans = new int* [stolbci];
//    for (int i = 0; i < stolbci; i++) {
//        trans[i] = new int[stroki];
//        for (int j = 0; j < stroki; j++)
//            trans[i][j] = arr[j][i];
//    }
//    for (int i = 0; i < stolbci; i++)
//    {
//        for (int j = 0; j < stroki; j++)
//        {
//            cout << trans[i][j] << " ";
//        }
//        cout << endl;
//    }
//    for (int i = 0; i < stolbci; i++) {
//        delete[] trans[i];
//    }
//    delete[] trans; 
//}

//---------------------------------------------------------------------------------------------------------------------
//Есть 3 двумерных массива A, B, C.Количество строк и столбцов для них вводит пользователь с клавиатуры для каждого из них.Реализуйте
//•     Создайте одномерный массив, который содержит общие значения для A, B, C
//
//•     Создайте одномерный массив, который содержит уникальные значения для A, B, C
//
//•     Создайте одномерный массив, который содержит общие значения для A и C 
//
//•     Создайте одномерный массив, который содержит отрицательные значения для A, B, C 
//без повторений

//#include <iostream>
//#include <string>
//#include <ctime>
//
//void Common_A_C(int** A, int** B, int** C, int strokiA, int stolbciA, int strokiB, int stolbciB, int strokiC, int stolbciC);
//void Negative(int** A, int** B, int** C, int strokiA, int stolbciA, int strokiB, int stolbciB, int strokiC, int stolbciC);
//void Common(int** A, int** B, int** C, int strokiA, int stolbciA, int strokiB, int stolbciB, int strokiC, int stolbciC);
//void Unique(int** A, int** B, int** C, int strokiA, int stolbciA, int strokiB, int stolbciB, int strokiC, int stolbciC);
//
//using namespace std;
//
//int main()
//{
//	srand(time(0));
//	int strokiA, stolbciA;
//	cout << "Enter size for A: ";
//	cin >> strokiA >> stolbciA;
//	int** A = new int* [strokiA];
//	for (int i = 0; i < strokiA; i++)
//	{
//		A[i] = new int[stolbciA];
//	}
//	for (int i = 0; i < strokiA; i++)
//	{
//		for (int j = 0; j < stolbciA; j++)
//		{
//			A[i][j] = rand() % 20 - 10;
//		}
//	}
//
//	int strokiB, stolbciB;
//	cout << "Enter size for B: ";
//	cin >> strokiB >> stolbciB;
//	int** B = new int* [strokiB];
//	for (int i = 0; i < strokiB; i++)
//	{
//		B[i] = new int[stolbciB];
//	}
//	for (int i = 0; i < strokiB; i++)
//	{
//		for (int j = 0; j < stolbciB; j++)
//		{
//			B[i][j] = rand() % 20 - 10;
//		}
//	}
//
//	int strokiC, stolbciC;
//	cout << "Enter size for A: ";
//	cin >> strokiC >> stolbciC;
//	int** C = new int* [strokiC];
//	for (int i = 0; i < strokiC; i++)
//	{
//		C[i] = new int[stolbciC];
//	}
//	for (int i = 0; i < strokiC; i++)
//	{
//		for (int j = 0; j < stolbciC; j++)
//		{
//			C[i][j] = rand() % 20 - 10;
//		}
//	}
//
//	cout << "\nA:" << endl << endl;
//	for (int i = 0; i < strokiA; i++)
//	{
//		for (int j = 0; j < stolbciA; j++)
//		{
//			cout << A[i][j] << " ";
//		}
//		cout << endl;
//	}
//
//	cout << "\n\nB:" << endl << endl;
//	for (int i = 0; i < strokiB; i++)
//	{
//		for (int j = 0; j < stolbciB; j++)
//		{
//			cout << B[i][j] << " ";
//		}
//		cout << endl;
//	}
//
//	cout << "\n\nC:" << endl << endl;
//	for (int i = 0; i < strokiC; i++)
//	{
//		for (int j = 0; j < stolbciC; j++)
//		{
//			cout << C[i][j] << " ";
//		}
//		cout << endl;
//	}
//
//	Common_A_C(A, B, C, strokiA, stolbciA, strokiB, stolbciB, strokiC, stolbciC);
//	Negative(A, B, C, strokiA, stolbciA, strokiB, stolbciB, strokiC, stolbciC);
//	Common(A, B, C, strokiA, stolbciA, strokiB, stolbciB, strokiC, stolbciC);
//	Unique(A, B, C, strokiA, stolbciA, strokiB, stolbciB, strokiC, stolbciC);
//
//	for (int i = 0; i < stolbciA; i++) {
//		delete[] A[i];
//	}
//	delete[] A;
//
//	for (int i = 0; i < stolbciB; i++) {
//		delete[] B[i];
//	}
//	delete[] B;
//
//	for (int i = 0; i < stolbciC; i++) {
//		delete[] C[i];
//	}
//	delete[] C;
//
//}
////---------------------------------------------------------------------------------------------------------------------
//
//void Common_A_C(int** A, int** B, int** C, int strokiA, int stolbciA, int strokiB, int stolbciB, int strokiC, int stolbciC)
//{
//	cout << "\n\nCommon elements of A and C:" << endl;
//	int* arraycommon_A_C = new int[(strokiA * stolbciA) + (strokiC * stolbciC)]{};
//	int cnt = 0;
//
//	for (int i = 0; i < strokiA; i++) {
//		for (int j = 0; j < stolbciA; j++) {
//			for (int z = 0; z < strokiC; z++) {
//				for (int o = 0; o < stolbciC; o++) {
//					if (A[i][j] == C[z][o]) {
//						arraycommon_A_C[cnt++] = A[i][j];
//					}
//				}
//			}
//		}
//
//	}
//
//	for (int i = 0; i < cnt; i++) {
//		for (int j = i + 1; j < cnt; j++) {
//			if (arraycommon_A_C[i] == arraycommon_A_C[j]) {
//				for (int k = j; k < cnt - 1; k++) {
//					arraycommon_A_C[k] = arraycommon_A_C[k + 1];
//				}
//				cnt -= 1;
//				if (arraycommon_A_C[i] == arraycommon_A_C[j]) {
//					j--;
//				}
//			}
//		}
//
//	}
//
//	if (arraycommon_A_C[cnt] != 0) {
//		for (int i = 0; i < cnt; i++) {
//			cout << arraycommon_A_C[i] << " ";
//		}
//	}
//	else cout << "No common matches";
//
//	delete[]arraycommon_A_C;
//}
//
////---------------------------------------------------------------------------------------------------------------------
//
//void Negative(int** A, int** B, int** C, int strokiA, int stolbciA, int strokiB, int stolbciB, int strokiC, int stolbciC)
//{
//	cout << "\n\nNegative elements for three arrays:" << endl << endl;
//	int cnt_all = 0;
//
//	for (int i = 0; i < strokiA; i++) {
//		for (int j = 0; j < stolbciA; j++) {
//			if (A[i][j] < 0) {
//				cnt_all++;
//			}
//		}
//	}
//
//	for (int i = 0; i < strokiB; i++) {
//		for (int j = 0; j < stolbciB; j++) {
//			if (B[i][j] < 0) {
//				cnt_all++;
//			}
//		}
//	}
//
//	for (int i = 0; i < strokiC; i++) {
//		for (int j = 0; j < stolbciC; j++) {
//			if (C[i][j] < 0) {
//				cnt_all++;
//			}
//		}
//	}
//
//	int* negative_elements = new int[cnt_all];
//	int idx = 0;
//
//	for (int i = 0; i < strokiA; i++) {
//		for (int j = 0; j < stolbciA; j++) {
//			if (A[i][j] < 0) {
//				negative_elements[idx++] = A[i][j];
//			}
//		}
//	}
//
//	for (int i = 0; i < strokiB; i++) {
//		for (int j = 0; j < stolbciB; j++) {
//			if (B[i][j] < 0) {
//				negative_elements[idx++] = B[i][j];
//			}
//		}
//	}
//
//	for (int i = 0; i < strokiC; i++) {
//		for (int j = 0; j < stolbciC; j++) {
//			if (C[i][j] < 0) {
//				negative_elements[idx++] = C[i][j];
//			}
//		}
//	}
//
//	for (int i = 0; i < cnt_all; i++) {
//		for (int j = i + 1; j < cnt_all; j++) {
//			if (negative_elements[i] == negative_elements[j]) {
//				for (int k = j; k < cnt_all - 1; k++) {
//					negative_elements[k] = negative_elements[k + 1];
//				}
//				cnt_all -= 1;
//				if (negative_elements[i] == negative_elements[j]) {
//					j--;
//				}
//			}
//		}
//	}
//
//	for (int i = 0; i < cnt_all; i++) {
//		cout << negative_elements[i] << " ";
//	}
//
//	delete[] negative_elements;
//}
////---------------------------------------------------------------------------------------------------------------------
//
//void Common(int** A, int** B, int** C, int strokiA, int stolbciA, int strokiB, int stolbciB, int strokiC, int stolbciC)
//{
//	cout << "\n\nCommon elements for three arrays:" << endl << endl;
//	int size = (strokiA * stolbciA) + (strokiC * stolbciC) + (strokiB * stolbciB);
//	int* common = new int[size];
//	int schtForCommon = 0;
//
//	for (int i = 0; i < strokiA; i++) {
//		for (int j = 0; j < stolbciA; j++) {
//
//			for (int forB = 0; forB < strokiA; forB++) {
//				for (int forB1 = 0; forB1 < stolbciB; forB1++) {
//
//					if (A[i][j] == B[forB][forB1]) {
//						for (int forC = 0; forC < strokiC; forC++) {
//							for (int forC1 = 0; forC1 < stolbciC; forC1++) {
//
//								if (A[i][j] == C[forC][forC1]) {
//									common[schtForCommon] = A[i][j];
//									schtForCommon++;
//
//								}
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//
//	for (int i = 0; i < schtForCommon; i++) {
//		for (int j = i + 1; j < schtForCommon; j++) {
//			if (common[i] == common[j]) {
//				for (int k = j; k < schtForCommon - 1; k++) {
//					common[k] = common[k + 1];
//				}
//				schtForCommon -= 1;
//				if (common[i] == common[j]) {
//					j--;
//				}
//			}
//		}
//	}
//
//	for (int i = 0; i < schtForCommon; i++) {
//		cout << common[i] << " ";
//	}
//	delete[] common;
//}
////---------------------------------------------------------------------------------------------------------------------
//
//void Unique(int** A, int** B, int** C, int strokiA, int stolbciA, int strokiB, int stolbciB, int strokiC, int stolbciC)
//{
//	cout << "\n\nUnique elements for three arrays:" << endl << endl;
//	int count = 0;
//	
//	for (int i = 0; i < strokiA; i++)
//	{
//		for (int j = 0; j < stolbciA; j++)
//		{
//			int currentelement = A[i][j];
//			bool hasequals = false;
//			for (int k = j +1; k < stolbciA; ++k)
//			{
//				if (j == k)
//				{
//					continue;
//				}
//				if (currentelement == A[j][k] && j != k)
//				{
//					hasequals = true;
//				}
//			}
//			if (!hasequals)
//			{
//				count++;
//			}
//		}
//	}
//
//	for (int i = 0; i < strokiB; i++)
//	{
//		for (int j = 0; j < stolbciB; j++)
//		{
//			int currentelement = B[i][j];
//			bool hasequals = false;
//			for (int k = j + 1; k < stolbciB; ++k)
//			{
//				if (j == k)
//				{
//					continue;
//				}
//				if (currentelement == B[j][k] && j != k)
//				{
//					hasequals = true;
//				}
//			}
//			if (!hasequals)
//			{
//				count++;
//			}
//		}
//	}
//
//	for (int i = 0; i < strokiC; i++)
//	{
//		for (int j = 0; j < stolbciC; j++)
//		{
//			int currentelement = C[i][j];
//			bool hasequals = false;
//			for (int k = j + 1; k < stolbciC; ++k)
//			{
//				if (j == k)
//				{
//					continue;
//				}
//				if (currentelement == C[j][k] && j != k)
//				{
//					hasequals = true;
//				}
//			}
//			if (!hasequals)
//			{
//				count++;
//			}
//		}
//	}
//
//	int* unique = new int[count];
//	count = 0;
//	for (int i = 0; i < strokiA; i++)
//	{
//		for (int j = 0; j < stolbciA; j++)
//		{
//			int currentelement = A[i][j];
//			bool hasequals = false;
//			for (int k = j + 1; k < stolbciA; ++k)
//			{
//				if (j == k)
//				{
//					continue;
//				}
//				if (currentelement == A[j][k] && j != k)
//				{
//					hasequals = true;
//				}
//			}
//			if (!hasequals)
//			{
//				unique[count++] = A[i][j];
//			}
//		}
//	}
//
//	for (int i = 0; i < strokiB; i++)
//	{
//		for (int j = 0; j < stolbciB; j++)
//		{
//			int currentelement = B[i][j];
//			bool hasequals = false;
//			for (int k = j + 1; k < stolbciB; ++k)
//			{
//				if (j == k)
//				{
//					continue;
//				}
//				if (currentelement == B[j][k] && j != k)
//				{
//					hasequals = true;
//				}
//			}
//			if (!hasequals)
//			{
//				unique[count++] = B[i][j];
//			}
//		}
//	}
//
//	for (int i = 0; i < strokiC; i++)
//	{
//		for (int j = 0; j < stolbciC; j++)
//		{
//			int currentelement = C[i][j];
//			bool hasequals = false;
//			for (int k = j + 1; k < stolbciC; ++k)
//			{
//				if (j == k)
//				{
//					continue;
//				}
//				if (currentelement == C[j][k] && j != k)
//				{
//					hasequals = true;
//				}
//			}
//			if (!hasequals)
//			{
//				unique[count++] = C[i][j];
//
//			}
//		}
//	}
//	for (int i = 0; i < count; i++) {
//		for (int j = i + 1; j < count; j++) {
//			if (unique[i] == unique[j]) {
//				for (int k = j; k < count - 1; k++) {
//					unique[k] = unique[k + 1];
//				}
//				count -= 1;
//				if (unique[i] == unique[j]) {
//					j--;
//				}
//			}
//		}
//	}
//	for (int i = 0; i < count; i++)
//	{
//		cout << unique[i] << " ";
//	}
//}
