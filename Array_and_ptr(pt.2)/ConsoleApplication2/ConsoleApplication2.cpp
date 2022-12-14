////Написать перегруженные функции(int, double, char) для выполнения следующих задач :
//
////•     Инициализация квадратной матрицы;
////
////•     Вывод матрицы на экран;
////
////•     Определение максимального и минимального элемента на главной диагонали матрицы;
////
////•     Сортировка элементов по возрастанию отдельно для каждой строки матрицы.

//#include <iostream>
//#include <stdio.h>
//#include <math.h>
//#include <Windows.h>
//#include <ctime>
//
//using namespace std;
//
//void initialisation(int arr[5][5]);
//void initialisation(double arr1[5][5]);
//void initialisation(char arr2[5][5]);
//
//void printm(int arr[5][5]);
//void printm(double arr[5][5]);
//void printm(char arr[5][5]);
//
//void maxminel(int arr[5][5]);
//void maxminel(double arr[5][5]);
//void maxminel(char arr[5][5]);
//
//void sort(int arr[5][5]);
//void sort(double arr[5][5]);
//void sort(char arr[5][5]);
//
//int main()
//{
//	srand(time(NULL));
//	setlocale(LC_ALL, "ru");
//	int arr[5][5];
//	double arr1[5][5];
//	int datatype, actions;
//	while (1)
//	{
//	TryAgain:
//		cout << "С каким типом данных вы хотите работать?\n1-int\n2-double\n3-char\n";
//		cin >> datatype;
//		if (datatype < 1 || datatype > 3)
//		{
//			cout << "Некорректный вариант" << endl;
//			exit(1);
//		}
//		switch (datatype)
//		{
//		case 1:
//					
//				cout << "Инициализация массива типа int..." << endl;
//				Sleep(1000);
//				initialisation(arr);
//				cout << "\nВывод массива...\n" << endl;
//				Sleep(1000);
//				printm(arr);
//				Sleep(500);
//				while (1) {
//					Sleep(500);
//					cout << "\n1-Определить макс. и мин. елемент массива на главной диагонали\n\n2-Отсоритровать массив\n";
//					cin >> actions;
//					if (actions < 1 || actions > 2)
//					{
//						goto TryAgain;
//					}
//					switch (actions)
//					{
//					case 1:
//						Sleep(500);
//						cout << "\nОпределение максимального и минимального элемента на главной диагонали матрицы...\n" << endl;
//						Sleep(500);
//						maxminel(arr);
//						break;
//
//					case 2:
//						Sleep(500);
//						cout << "\nСортировка...\n" << endl;
//						Sleep(1000);
//						sort(arr);
//						break;
//					}
//				}
//				break;
//
//		case 2:
//
//			cout << "Инициализация массива типа double..." << endl;
//			Sleep(1000);
//			initialisation(arr1);
//			cout << "\nВывод массива...\n" << endl;
//			Sleep(1000);
//			printm(arr1);
//			Sleep(500);
//			while (1) {
//				Sleep(500);
//				cout << "\n1-Определить макс. и мин. елемент массива на главной диагонали\n\n2-Отсоритровать массив\n";
//				cin >> actions;
//				if (actions < 1 || actions > 2)
//				{
//					goto TryAgain;
//				}
//				switch (actions)
//				{
//				case 1:
//					Sleep(500);
//					cout << "\nОпределение максимального и минимального элемента на главной диагонали матрицы...\n" << endl;
//					Sleep(500);
//					maxminel(arr1);
//					break;
//
//				case 2:
//					Sleep(500);
//					cout << "\nСортировка...\n" << endl;
//					Sleep(1000);
//					sort(arr1);
//					break;
//				}
//			}
//			break;
//
//		case 3:
//
//			cout << "Инициализация массива типа char..." << endl;
//			Sleep(1000);
//			initialisation(arr);
//			cout << "\nВывод массива...\n" << endl;
//			Sleep(1000);
//			printm(arr);
//			Sleep(500);
//			while (1) {
//				Sleep(500);
//				cout << "\n1-Определить макс. и мин. елемент массива на главной диагонали\n\n2-Отсоритровать массив\n";
//				cin >> actions;
//				if (actions < 1 || actions > 2)
//				{
//					goto TryAgain;
//				}
//				switch (actions)
//				{
//				case 1:
//					Sleep(500);
//					cout << "\nОпределение максимального и минимального элемента на главной диагонали матрицы...\n" << endl;
//					Sleep(500);
//					maxminel(arr);
//					break;
//
//				case 2:
//					Sleep(500);
//					cout << "\nСортировка...\n" << endl;
//					Sleep(1000);
//					sort(arr);
//					break;
//				}
//			}
//			break;
//		}
//		int choice;
//		cout << "Продолжить?\n1-Да\n2-Нет\n";
//		cin >> choice;
//		if (choice == 2)
//		{
//			exit(1);
//		}
//	}
//	return 0;
//}
////--------------------------------------------------------------------------------
//void initialisation(int arr[5][5])
//{
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			arr[i][j] = rand() % 21 - 10;
//		}
//	}
//}
//
//void initialisation(double arr[5][5])
//{
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			arr[i][j] = (rand() % 100) / 10.0;
//		}
//	}
//}
//
//void initialisation(char arr[5][5])
//{
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			arr[i][j] = 32 + rand() % 94;
//		}
//	}
//}
//
////-----------------------------------------------------------------------------------
//
//void printm(int arr[5][5])
//{
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			cout << arr[i][j] << "  ";
//		}
//		cout << endl;
//	}
//}
//
//void printm(double arr[5][5])
//{
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			cout << arr[i][j] << "  ";
//		}
//		cout << endl;
//	}
//}
//
//void printm(char arr[5][5])
//{
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			cout << arr[i][j] << "  ";
//		}
//		cout << endl;
//	}
//}
//
////---------------------------------------------------------------------------------------
//
//void maxminel(int arr[5][5])
//{
//	int minelement = arr[0][0], maxelement = arr[0][0];
//	for (int i = 0; i < 5; i++)
//	{	
//			if (minelement > arr[i][i])
//			{
//				minelement = arr[i][i];
//			}
//			if (maxelement < arr[i][i])
//			{
//				maxelement = arr[i][i];
//			}	
//	}
//	cout << "Минимальныйелемент на главной диагонали равен " << minelement << endl;
//	cout << "Максимальный елемент на главной диагонали равен" << maxelement << endl;
//}
//void maxminel(double arr[5][5])
//{
//	int minelement = arr[0][0], maxelement = arr[0][0];
//	for (int i = 0; i < 5; i++)
//	{
//		if (minelement > arr[i][i])
//		{
//			minelement = arr[i][i];
//		}
//		if (maxelement < arr[i][i])
//		{
//			maxelement = arr[i][i];
//		}
//	}
//	cout << "Минимальный елемент на главной диагонали равен " << minelement << endl;
//	cout << "Максимальный елемент на главной диагонали равен " << maxelement << endl;
//}
//
//void maxminel(char arr[5][5])
//{
//	int minelement = arr[0][0], maxelement = arr[0][0];
//	for (int i = 0; i < 5; i++)
//	{
//		if (minelement > arr[i][i])
//		{
//			minelement = arr[i][i];
//		}
//		if (maxelement < arr[i][i])
//		{
//			maxelement = arr[i][i];
//		}
//	}
//	cout << "Минимальный елемент на главной диагонали равен " << minelement << endl;
//	cout << "Максимальный елемент на главной диагонали равен " << maxelement << endl;
//}
//
////-----------------------------------------------------------------------------------------
//
//void sort(int arr[5][5])
//{
//	for (int q = 0; q < 5; q++)
//	{
//		for (int i = 0; i < 5; i++)
//		{
//			for (int j = 4; j > i; j--)
//			{
//				if (arr[q][j] < arr[q][j - 1])
//					swap(arr[q][j], arr[q][j - 1]);
//			}
//		}
//	}
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			cout << arr[i][j] << "  ";
//		}
//		cout << endl;
//	}
//}
//
//void sort(double arr[5][5])
//{
//	for (int q = 0; q < 5; q++)
//	{
//		for (int i = 0; i < 5; i++)
//		{
//			for (int j = 4; j > i; j--)
//			{
//				if (arr[q][j] < arr[q][j - 1])
//					swap(arr[q][j], arr[q][j - 1]);
//			}
//		}
//	}
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			cout << arr[i][j] << "  ";
//		}
//		cout << endl;
//	}
//}
//
//void sort(char arr[5][5])
//{
//	for (int q = 0; q < 5; q++)
//	{
//		for (int i = 0; i < 5; i++)
//		{
//			for (int j = 4; j > i; j--)
//			{
//				if (arr[q][j] < arr[q][j - 1])
//					swap(arr[q][j], arr[q][j - 1]);
//			}
//		}
//	}
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			cout << arr[i][j] << "  ";
//		}
//		cout << endl;
//	}
//}
////------------------------------------------------------------------------------------



//Написать игру «Быки и коровы».Программа "загадывает" четырёхзначное число и играющий должен угадать его.
//После ввода пользователем числа программа сообщает, сколько цифр числа угадано(быки) и сколько цифр угадано и стоит на нужном месте(коровы).
//После отгадывания числа на экран необходимо вывести количество сделанных пользователем попыток.В программе необходимо использовать рекурсию.

//#include <iostream>
//#include <stdio.h>
//#include <math.h>
//#include <Windows.h>
//#include <ctime>
//
//using namespace std;
//
//bool endgame = false;
//void bullncow(int playernum, int consolenum[]);
//void consolenumgenerator(int consolenum[]);
//
//int main()
//{
//	setlocale(LC_ALL, "");
//	srand(time(NULL));
//	int playernum, consolenum[4], counter = 0;
//	consolenumgenerator(consolenum);
//	while (1)
//	{
//		while (1)
//		{
//			if (endgame)
//				break;
//
//			cout << "Введите 4-значное число с разными цифрами: ";
//			cin >> playernum;
//			int n1 = playernum % 10;
//			int n2 = (playernum / 10) % 10;
//			int n3 = (playernum / 100) % 10;
//			int n4 = playernum / 1000;
//			if (n1 == n2 || n1 == n3 || n1 == n4 || n2 == n3 || n2 == n4 || n3 == n4)
//			{
//				cout << "Цифры должны быть разными" << endl;
//				exit(1);
//			}
//			if (playernum < 1000 || playernum > 9999)
//			{
//				cout << "Число должно быть четырёхзначным" << endl;
//				exit(1);
//			}
//			counter++;
//			bullncow(playernum, consolenum);			
//		}
//		int again;
//		cout << "\nПобеда ,победа!Кол-во попыток: " << counter <<  "\nЕщё раз ? \n1 - Да\n2 - Нет" << endl;
//		cin >> again;
//		if (again == 1)
//		{
//			endgame = false;
//		}
//		else break;
//	}
//	return 0;
//}
//
//void consolenumgenerator(int consolenum[])
//{
//	for (int i = 0; i < 4; i++)
//	{
//		consolenum[i] = rand() % 9 + 1;
//		for (int j = 0; j < i; j++)
//			if (consolenum[i] == consolenum[j])
//				i--;
//	}
//}
//
//void bullncow(int playernum, int consolenum[])
//{
//	
//
//	int cow = 0, bull = 0, playernumarr[4];
//	playernumarr[0] = playernum / 1000;
//	playernumarr[1] = (playernum / 100) % 10;
//	playernumarr[2] = (playernum / 10) % 10;
//	playernumarr[3] = playernum % 10;
//
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			if (playernumarr[j] == consolenum[i])
//			{
//				bull++;
//				break;
//			}
//		}
//	}
//	for (int i = 0; i < 4; i++)
//	{
//		if (playernumarr[i] == consolenum[i])
//		{
//			cow++;
//			bull--;
//		}
//	}
//
//	cout << bull << " bulls, " << cow << " cows\n";
//
//	if (cow == 4)
//	{
//		endgame = true;
//	}
//}


//Написать игру "Крестики-нолики"

//#include <iostream>
//#include <stdio.h>
//#include <math.h>
//#include <Windows.h>
//#include <ctime>
//
//using namespace std;
//
//char sym = '-';
//char xo[9] = { '-','-', '-', '-', '-', '-', '-', '-', '-' };
//char playername1[10], playername2[10];
//
//void makingmove(int num);
//
//void printxo();
//
//char gameplay();
//
//void res();
//
//int main()
//{
//	setlocale(LC_ALL, "");
//	srand(time(NULL));
//		cout << "Имя первого игрока: ";
//		cin >> playername1;
//		cout << "Имя второго игрока: ";
//		cin >> playername2;
//	
//		printxo();
//
//		for (int hod = 1; hod < 9; hod++)
//		{
//			if (hod % 2) makingmove(1);
//			else makingmove(2);
//
//			printxo();
//
//			if (hod >= 5)
//			{
//				sym = gameplay();
//				if (sym != '-')
//					break;
//			}
//		}
//		res();
//	return 0;
//}
//
//void printxo()
//{
//	system("cls");
//
//	cout << "Номера клеток" << endl;
//	cout << " " << 1 << " " << "|" << " " << 2 << " " << "|" << " " << 3 << " " << endl;
//	cout << " " << 4 << " " << "|" << " " << 5 << " " << "|" << " " << 6 << " " << endl;
//	cout << " " << 7 << " " << "|" << " " << 8 << " " << "|" << " " << 9 << " " << endl;
//
//	cout << endl;
//
//	cout << " " << xo[0] << " " << '|' << " " << xo[1] << " " << '|' << " " << xo[2] << " " << endl;
//	cout << " " << xo[3] << " " << '|' << " " << xo[4] << " " << '|' << " " << xo[5] << " " << endl;
//	cout << " " << xo[6] << " " << '|' << " " << xo[7] << " " << '|' << " " << xo[8] << " " << endl;
//
//
//}
//
//void makingmove(int num)
//{
//	if (num == 1) cout << playername1;
//	else cout << playername2;
//	int kletka;
//	cout << " ,введите номер клетки, чтобы сделать ход: ";
//	TryAgain:
//	cin >> kletka;
//
//	while (kletka < 1 || kletka > 9 || xo[kletka - 1] == 'O' || xo[kletka - 1] == 'X') {
//		cout << "Введите правильный номер: ";
//		goto TryAgain;
//	}
//		if (num == 1) xo[kletka - 1] = 'X';
//		else xo[kletka - 1] = 'O';		
//}
//
//char gameplay()
//{
//	for (int i = 0; i < 3; i++)
//	{
//		if (xo[i] == xo[i + 3] && xo[i + 3] == xo[i + 6])
//			return xo[i];
//		else if ((xo[2] == xo[4] && xo[4] == xo[6]) || (xo[0] == xo[4] && xo[4] == xo[8]))
//			return xo[i];
//		else if (xo[i * 3] == xo[i * 3 + 1] && xo[i * 3 + 1] == xo[i * 3 + 2])
//			return xo[i];
//		return '-';
//	}
//}
//
//void res()
//{
//	int count1 = 0, count2 = 0;
//	if (sym == 'X') {
//		count1++;
//		cout << playername1 << " победил" << endl;
//
//	}
//	else if (sym == 'O') {
//		count2++;
//		cout << playername2 << " победил" << endl;
//	}
//	else if (sym == '-')
//		cout << "Ничья" << endl;
//	cout << "Счёт " << count1 << " : " << count2 << endl;
//}


//Написать игру "Пятнашки"

//#include <iostream>
//#include <stdio.h>
//#include <Windows.h>
//#include <ctime>
//
//using namespace std;
//
//int pole[3][3];
//int Ox, Oy;
//
//void createpole();
//
//void printpole();
//
//void moving(char key);
//
//bool result();
//
//int main()
//{
//	setlocale(LC_ALL, "ru");
//
//	createpole();	
//	printpole();
//
//	char key;
//	
//
//	while (!result()) {
//		cout << "Двигаться на w,a,s,d: ";
//		cin >> key;
//
//		switch (key)
//		{
//		case 119: //w
//			moving(119);
//			break;
//
//		case 97: //a
//			moving(97);
//			break;
//
//		case 115: //s
//			moving(115);
//			break;
//
//		case 100: //d
//			moving(100);
//			break;
//		}
//		printpole();
//	}
//	cout << "You win!" << endl;
//
//	return 0;
//}
//
//void createpole()
//{
//	int arr[9],buf,k=0;
//	bool flag = false;
//	srand(time(NULL));
//	for (int i = 0; i < 9; )
//	{
//		flag = false;
//		buf = rand() % 9 + 1;
//		for (int j = 0; j < i; j++)
//		{
//			if (arr[j] == buf)
//			{
//				flag = true;
//				break;
//			}
//		}
//		if (!flag)
//		{
//			arr[i] = buf;
//			i++;
//		}
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			pole[i][j] = arr[k];
//			k++;
//		}
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//			if (pole[i][j] == 9)
//			{
//				pole[i][j] = 0;
//				Ox = j;
//				Oy = i;
//			}
//	}	
//	return;
//}
//
//void printpole()
//{
//	system("cls");
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			cout << pole[i][j] << " ";
//		}
//		cout << "\n\n";
//	}
//	return;
//}
//
//void moving(char key)
//{
//	switch (key)
//	{
//	case 119: //w
//		if (Oy > 0) {
//			pole[Oy][Ox] = pole[Oy - 1][Ox];
//			pole[Oy - 1][Ox] = 0;
//			Oy--;
//		}
//		else cout << "Нельзя выходить за поле"; 
//		break;
//
//	case 97: //a
//		if (Ox > 0 ) {
//			pole[Oy][Ox] = pole[Oy][Ox - 1];
//			pole[Oy][Ox - 1] = 0;
//			Ox--;
//		}
//		else cout << "Нельзя выходить за поле";
//		break;
//
//	case 115: //s
//		if (Oy < 3) {
//			pole[Oy][Ox] = pole[Oy + 1][Ox];
//			pole[Oy + 1][Ox] = 0;
//			Oy++;
//		}
//		else cout << "Нельзя выходить за поле";
//		break;
//
//	case 100: //d
//		if (Ox < 3) {
//			pole[Oy][Ox] = pole[Oy][Ox + 1];
//			pole[Oy][Ox + 1] = 0;
//			Ox++;
//		}
//		else cout << "Нельзя выходить за поле";
//		break;
//	}
//}
//
//bool result()
//{
//	int k = 1;
//	bool flag = true;
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; i++) {
//			if (pole[i][j] != k % 9)
//				flag = true;
//			else {
//				flag = false;
//				break;
//			}
//			k++;
//		}
//	}
//	return flag;
//}

//Используя два указателя на массив целых чисел, скопировать один массив в другой.
//Использовать в программе арифметику указателей для продвижения по массиву, а также оператор разыменования.

//#include <iostream>
//#include <stdio.h>
//#include <Windows.h>
//#include <ctime>
//
//using namespace std;
//
//int main()
//{
//	setlocale(LC_ALL, "");
//	srand(time(NULL));
//	int const size = 10;
//	int arr1[size], arr2[size];
//	int* parr2 = arr2;
//	cout << "1st array" << endl;
//	for (int *parr1 = arr1; parr1 < &arr1[size]; parr1++)
//	{
//		*parr1 = rand() % 10 + 1;
//	}
//	for (int* parr1 = arr1; parr1 < &arr1[size]; parr1++)
//	{
//		if (parr1 == &arr1[5])
//		{
//			cout << endl;
//		}
//		cout << *parr1 << " ";
//	}
//	cout << "\n\n2nd array after copying" << endl;
//	for (int* parr1 = arr1; parr1 < &arr1[size]; parr1++)
//	{
//		*parr2 = *parr1;
//		if (parr1 == &arr1[5])
//		{
//			cout << endl;
//		}
//		cout << *parr2 << " ";
//		parr2++;
//	}
//	return 0;
//
//}


//Используя указатель на массив целых чисел, изменить порядок следования элементов массива на противоположный.
//Использовать в программе арифметику указателей для продвижения по массиву, а также оператор разыменования.

//#include <iostream>
//#include <stdio.h>
//#include <Windows.h>
//#include <ctime>
//
//using namespace std;
//
//int main()
//{
//	setlocale(LC_ALL, "");
//	srand(time(NULL));
//	int const size = 10;
//	int arr1[size], arr2[size];
//	int* ptr1 = arr1;
//	int* ptr2 = arr2;
//	//int* end = &arr1[10];
//	cout << "1st array" << endl;
//	for (int* ptr1 = arr1; ptr1 < &arr1[size]; ptr1++)
//	{
//		*ptr1 = rand() % 10 + 1;
//	}
//	for (int* ptr1 = arr1; ptr1 < &arr1[size]; ptr1++)
//	{
//		if (ptr1 == &arr1[5])
//		{
//			cout << endl;
//		}
//		cout << *ptr1 << " ";
//	}
//	cout << "\n\n1st array after changing elements vice versa" << endl;
//
//	for (int* ptr1 = arr1; ptr1 < &arr1[size]; ptr1++)
//	{
//		*ptr2 = *ptr1;
//		ptr2++;
//	}
//	for (int *end = &arr2[9];  end >= &arr2[0]; end--)
//	{
//		if (end == &arr2[4])
//		{
//			cout << endl;
//		}
//		cout << *end << " ";
//	}
//	
//	return 0;
//
//}



//Даны два массива : А[M] и B[N](M и N вводятся с клавиатуры).
//Необходимо создать третий массив минимально возможного размера,
//в котором нужно собрать элементы массивов A и B, которые не являются общими для них, без повторений.
//
//Даны два массива : А[M] и B[N](M и N вводятся с клавиатуры).
//Необходимо создать третий массив минимально возможного размера,
//в котором нужно собрать элементы массива A, которые не включаются в массив B, без повторений.


//#include <iostream>
//#include <stdio.h>
//#include <Windows.h>
//#include <ctime>
//
//using namespace std;
//
//int main()
//{
//	srand(time(0));
//	setlocale(LC_ALL, "");
//	int n, m;
//	cout << "Введите размeр первого массива: ";
//	cin >> n;
//	cout << "Введите размeр второго массива: ";
//	cin >> m;
//	int* a = new int[n];
//	int* b = new int[m];
//	for (int i = 0; i < n; i++)
//	{
//		a[i] = rand() % 1000;
//		cout << a[i] << " ";
//	}
//	cout << endl;
//	for (int i = 0; i < m; i++)
//	{
//		b[i] = rand() % 1000;
//		cout << b[i] << " ";
//	}
//	cout << endl;
//	int count, size = 0;
//	bool flag;
//	for (int i = 0; i < n; i++)
//	{
//		count = 0;
//		flag = true;
//		for (int j = 0; j < m; j++)
//		{
//			if (a[i] != b[j])
//				count++;
//		}
//		if (count == m)
//		{
//			for (int q = 0; q < i; q++)
//				if (a[i] == a[q])
//					flag = false;
//			if (flag)
//				size++;
//		}
//	}
//	int* c = new int[size];
//	size = 0;
//	for (int i = 0; i < n; i++)
//	{
//		count = 0;
//		flag = true;
//		for (int j = 0; j < m; j++)
//		{
//			if (a[i] != b[j])
//				count++;
//		}
//		if (count == m)
//		{
//			for (int q = 0; q < i; q++)
//				if (a[i] == a[q])
//					flag = false;
//			if (flag)
//				c[size++] = a[i];
//		}
//	}
//	for (int i = 0; i < size; i++)
//		cout << c[i] << " ";
//	cout << endl;
//}


//#include <iostream>
//#include <stdio.h>
//#include <Windows.h>
//#include <ctime>
//
//using namespace std;
//
//int main()
//{
//	srand(time(0));
//	setlocale(LC_ALL, "");
//	int n, m;
//	cout << "Введите размeр первого массива: ";
//	cin >> n;
//	cout << "Введите размeр второго массива: ";
//	cin >> m;
//	int* a = new int[n];
//	int* b = new int[m];
//	for (int i = 0; i < n; i++)
//	{
//		a[i] = rand() % 10;
//		cout << a[i] << " ";
//	}
//	cout << endl;
//	for (int i = 0; i < m; i++)
//	{
//		b[i] = rand() % 10;
//		cout << b[i] << " ";
//	}
//	cout << endl;
//	int* pa;
//	pa = &a[0];
//	int* pb;
//	pb = &b[0];
//	int* c = new int[m + n];
//	int* pc;
//	pc = &c[0];
//	int tmp = 0;
//	pc = c;
//	for (pa = a; pa < a + m; pa++ )
//	{
//		for (pb = b;pb < b + n; pb++)
//		{
//			if (*pa == *pb)
//			{
//				tmp++;
//			}
//		}
//		if (tmp == 0)
//		{
//			*pc = *pa;
//			pc++;
//		}
//		tmp = 0;
//	}
//	for (pb = b; pb < b + n; pb++)
//	{
//		for (pa = a; pa < a + m; pa++)
//		{
//			if (*pb == *pa)
//			{
//				tmp++;
//			}
//		}
//		if (tmp == 0)
//		{
//			*pc = *pb;
//			pc++;
//		}
//		tmp = 0;
//	}
//	for (int i = 0; i < m+n; i++,c++)
//	{
//		if (*c> 0)
//		{
//			cout << *c << " ";
//		}
//	}
//}


//Написать следующие функции для работы с динамическим массивом :
//•     Функция распределения динамической памяти
//
//•     Функция инициализации динамического массива
//
//•     Функция печати динамического массива
//
//•     Функция удаления динамического массива
//
//•     Функция добавления элемента в конец массива
//
//•     Функция вставки элемента по указанному индексу
//
//•     Функция удаления элемента по указанному индексу


#include <iostream>
#include <stdio.h>
#include <Windows.h>
#include <ctime>

using namespace std;

int n = 0;

int* rasp(int size);

void initialisation(int* arr, int size);

void printarr(int* arr, int size);

void deletearr(int* arr);

int *addend(int* arr, int size, int element);

void enterel(int* arr, int size, int index,int el);

int *deleteel(int* arr, int size, int pos);



int main()
{
	setlocale(LC_ALL, "");
	srand(time(0));
	int size = 0;
int* arr = nullptr;
	int digit = 0;
	do
	{	
		cout << "1-Функция распределения динамической памяти\n2-Функция инициализации динамического массива\n3-Функция печати динамического массива\n4-Функция удаления динамического массива\n5-Функция добавления элемента в конец массива\n6-Функция вставки элемента по указанному индексу\n7-Функция удаления элемента по указанному индексу" << endl;
		cin >> digit;
		switch (digit)
		{
		case 1:
			
			cout << "Размер массива: ";
			cin >> n;
			arr = rasp(n);
			break;

		case 2:
			initialisation(arr, n);
			break;

		case 3:
			printarr(arr, n);
			break;

		case 4:
			deletearr(arr);
			break;

		case 5:
			int element;
			cout << "Введите значение елемента: ";
			cin >> element;
			arr = addend(arr, n, element);
			break;

		case 6:
			int index,el;
			cout << "Введите индекс елемента массива и его значение: ";
			cin >> index >> el;
			enterel(arr, n, index,el);
			break;

		case 7:
			int pos;
			cout << "Выберите индекс елемента, который нужно удалить: ";
			cin >> pos;
			arr = deleteel(arr, n, pos);
			break;
		}
	} while (digit != 8);

	return 0;
}

int* rasp(int size)
{
	int* arr = new int[size];
	return arr;
}

void initialisation(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
	}
}

void printarr(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		if (i % 10 == 0)
		{
			cout << endl;
		}
		cout << arr[i] << " ";
	}
	cout << endl;
}

void deletearr(int* arr)
{
	delete[] arr;
}

int *addend(int* arr, int size, int element)
{
	int* temparr = new int[size++];
	n++;
	for (int i = 0; i < size - 1; i++)
	{
		temparr[i] = arr[i];
	}
	
	temparr[size - 1] = element;
	
	return temparr;
	
}

void enterel(int* arr, int size, int index,int el)
{
	int temp;

	int* temparr = new int[size++];

	for (int i = 0; i < index; i++)
	{
		temparr[i] = arr[i];
	}
	temparr[index] = el;

	for (int i = index+1; i < size+1; i++)
	{
		temparr[i] = arr[i - 1];
	}

	for (int i = 0; i < size; i++)
	{
		if (i % 10 == 0)
		{
			cout << endl;
		}
		cout << temparr[i] << " ";
	}
	cout << endl;
}

int *deleteel(int* arr, int size, int pos)
{
	int temp;
	int* temparr = new int[size--];
	n--;
	/*for (int i = 0; i < size; i++)
	{
		temparr[i] = arr[i];
	}*/

	for (int i = 0, x=0; x < size; i++,x++)
	{
		if (i == pos)
		{
			i++;
			 temparr[x] = arr[i];
		}
		else
		{
			temparr[x] = arr[i];
		}
	}
	return temparr;
}


//Написать функцию, которая получает указатель на динамический массив и его размер.
//Функция должна удалить из массива все простые числа и вернуть указатель на новый динамический массив.

//#include <iostream>
//#include <stdio.h>
//#include <Windows.h>
//#include <ctime>
//int n = 10;
//int* func(int* arr, int  size);
//bool primenumber(int num);
//
//using namespace std;
//
//int main()
//{
//	setlocale(LC_ALL, "");
//	srand(time(0));
//	int size = 10;
//	int* arr = new int[size];
//	for (int i = 0; i < size; i++)
//	{
//		arr[i] = rand() % 10 + 1;
//
//	}
//	for (int i = 0; i < size; i++)
//	{
//		cout << arr[i] << " ";
//
//	}
//	cout << endl;
//	cout << "Массив после удаления: " << endl;
//	arr = func(arr, n);
//	for (int i = 0; i < n; i++)
//	{
//		cout << arr[i] << " ";
//	}
//}
//
//bool primenumber(int num)
//{
//	for (int i = 2; i < num; i++)
//	{
//		if (num % i == 0)
//		{
//			return false;
//		}
//	}
//	return true;
//}
//
//int* func(int* arr, int size)
//{
//	int tmp = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (!primenumber(arr[i]))
//			tmp++;
//	}
//	int* newarr = new int[n - tmp];
//	//size--;
//	tmp = 0;
//	for (int i = 0, x = 0; i < n; i++, x++)
//	{
//		if (!primenumber(arr[i]))
//		newarr[tmp++] = arr[i];
//	}
//	n = tmp;
//	return newarr;
//}


//Написать функцию, которая получает указатель на статический массив и его размер.
//Функция распределяет положительные, отрицательные и нулевые элементы в отдельные динамические массивы.


//#include <iostream>
//#include <stdio.h>
//#include <Windows.h>
//#include <ctime>
//
//void func(int *ptrarr, int size);
//
//using namespace std;
//
//
//int main()
//{
//	setlocale(LC_ALL, "");
//	srand(time(0));
//	const int size = 10;
//	int arr[size];
//	for (int i = 0; i < size; i++)
//	{
//		arr[i] = rand() % 20 - 10;
//	}
//	for (int i = 0; i < size; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//	int* ptrarr = arr;
//	func(ptrarr, size);
//}
//
//void func(int *ptrarr, int size)
//{
//	int* arr1 = new int[size];
//	int* arr2 = new int[size];
//	int* arr3 = new int[size];
//
//	int x = 0,y = 0, z = 0;
//
//	for (int i = 0; i < size; i++)
//	{
//		if (ptrarr[i] == 0)
//		{
//			arr1[x] = ptrarr[i];
//			x++;
//		}
//		else if (ptrarr[i] < 0)
//		{
//			arr2[y] = ptrarr[i];
//			y++;
//		}
//		else if (ptrarr[i] > 0)
//		{
//			arr3[z] = ptrarr[i];
//			z++;
//		}
//	}
//	cout << endl;
//	cout << "Массив с нулевыми елементами: " << endl;
//	for (int i = 0; i < x; i++)
//	{
//		cout << arr1[i] << " ";
//	}
//	cout << endl;
//	cout << "Массив с отрицательными елементами: " << endl;
//	for (int i = 0; i < y; i++)
//	{
//		cout << arr2[i] << " ";
//	}
//	cout << endl;
//	cout << "Массив с положительными елементами: " << endl;
//	for (int i = 0; i < z; i++)
//	{
//		cout << arr3[i] << " ";
//	}
//	delete[] arr1;
//	delete[] arr2;
//	delete[] arr3;
//}


//Написать программу, которая содержит функцию Action, принимающую в качестве аргумента, указатели на два массива(А и В) и размеры массивов, а также указатель на функцию.
//Пользователю отображается меню, в котором он может выбрать max, min, avg.Если выбран max - передается указатель на функцию, которая ищет максимум,
//если выбран min - передается указатель на функцию, которая ищет минимум, если выбран avg - передается указатель на функцию, которая ищет среднее.
//Возвращаемое значение функции Action результат выбора пользователя max, min, avg.

//#include <iostream>
//#include <stdio.h>
//#include <Windows.h>
//#include <ctime>
//
//using namespace std;
//
//void Max(int* A, int* B, int size1, int size2);
//
//void Min(int* A, int* B, int size1, int size2);
//
//void Avg(int* A, int* B, int size1, int size2);
//
//
//
//int main()
//{
//	setlocale(LC_ALL, "");
//	srand(time(0));
//	int size1, size2;
//	cout << "Введите размер массивов: ";
//	cin >> size1 >> size2;
//	int* A = new int[size1];
//	int* B = new int[size2];
//	for (int i = 0; i < size1; i++)
//	{
//		A[i] = rand() % 20 - 10;
//	}
//	for (int i = 0; i < size2; i++)
//	{
//		B[i] = rand() % 20 - 10;
//	}
//	cout << endl;
//	cout << "\n1-й массив: " << endl;
//	for (int i = 0; i < size1; i++)
//	{
//		if (i % 5 == 0)
//		{
//			cout << endl;
//		}
//		cout << A[i] << " ";
//	}
//	cout << endl;
//	cout << "\n2-й массив: " << endl;
//	for (int i = 0; i < size2; i++)
//	{
//		if (i % 5 == 0)
//		{
//			cout << endl;
//		}
//		cout << B[i] << " ";
//	}
//	void (*Action)(int *A,int *B,int size1,int size2);
//	while (1)
//	{
//		int variant;
//		cout << "\n\n1-min\n2-max\n3-avg\n";
//		cin >> variant;
//		switch (variant)
//		{
//		case 1:
//			Action = Min;
//			Action(A,B,size1,size2);
//			break;
//
//		case 2:
//			Action = Max;
//			Action(A, B, size1, size2);
//			break;
//
//		case 3:
//			Action = Avg;
//			Action(A, B, size1, size2);
//			break;
//
//		}
//	}
//}
//
//void Max(int* A, int* B, int size1, int size2)
//{
//	int maxvalue1 = 0;
//	for (int i = 0; i < size1; i++)
//	{
//		if (A[i] > maxvalue1)
//		{
//			maxvalue1 = A[i];
//		}
//	}
//	int maxvalue2 = 0;
//	for (int i = 0; i < size2; i++)
//	{
//		if (A[i] > maxvalue2)
//		{
//			maxvalue2 = B[i];
//		}
//	}
//	cout << "Max el. of 1st array is " << maxvalue1 << " and of the 2nd is " << maxvalue2 << endl;
//}
//
//void Min(int* A, int* B, int size1, int size2)
//{
//	int minvalue1 = 0;
//	for (int i = 0; i < size1; i++)
//	{
//		if (A[i] < minvalue1)
//		{
//			minvalue1 = A[i];
//		}
//	}
//	int minvalue2 = 0;
//	for (int i = 0; i < size2; i++)
//	{
//		if (A[i] < minvalue2)
//		{
//			minvalue2 = B[i];
//		}
//	}
//	cout << "Min el. of 1st array is " << minvalue1 << " and of the 2nd is " << minvalue2 << endl;
//}
//
//void Avg(int* A, int* B, int size1, int size2)
//{
//	double sum1 = 0, sum2 = 0;
//	double res1,res2;
//	for (int i = 0; i < size1; i++)
//	{
//		sum1 += A[i];
//	}
//	res1 = sum1 / size1;
//	for (int i = 0; i < size2; i++)
//	{
//		sum2 += B[i];
//	}
//	res2 = sum2 / size2;
//	cout << "Avg of the 1st array is " << res1 << " and of the 2nd is " << res2 << endl;
//}


