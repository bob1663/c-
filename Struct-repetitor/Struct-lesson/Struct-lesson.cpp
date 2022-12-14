//Разработайте программу «Библиотека».Создайте структуру «Книга»(название, автор, издательство, жанр).Создайте массив из 10 книг
//Реализуйте для него следующие возможности :
//Редактировать книгу
//Печать всех книг
//Поиск книг по автору
//Поиск книги по названию
//Сортировка массива по названию книг
//Сортировка массива по автору
//Сортировка массива по издательству

//#include <iostream>
//#include <string>
//#define KST 10
//
//using namespace std;
//
//typedef struct Book
//{
//	string name;
//	string author;
//	string publication;
//	string genre;
//
//}BOOK;
//
//BOOK barr[KST], * pst = barr;
//int kst;
//
//void GetBookData(void);
//void PrintAllData(void);
//void EditBook(void);
//void SearchByAuthor(void);
//void SearchByName(void);
//void SortByName(void);
//void SortByAuthor(void);
//void SortByPublication(void);
//
//int main()
//{
//	setlocale(LC_ALL, "");
//	GetBookData();
//	int variant;
//	do
//	{
//		cout << "\n\n1-Редактировать книгу\n2-Печать всех книг\n3-Поиск книг по автору\n4-Поиск книги по названию\n5-Сортировка массива по названию книг\n6-Сортировка массива по автору\n7-Сортировка массива по издательству\n0 - Выход\nВведите число: ";
//		cin >> variant;
//		cin.ignore();
//		switch (variant)
//		{
//		case 1:
//			EditBook();
//			break;
//
//		case 2:
//			PrintAllData();
//			break;
//
//		case 3:
//			SearchByAuthor();
//			break;
//
//		case 4:
//			SearchByName();
//			break;
//
//		case 5:
//			SortByName();
//			break;
//
//		case 6:
//			SortByAuthor();
//			break;
//
//		case 7:
//			SortByPublication();
//			break;
//		}
//	} while (variant != 0);
//
//	return 0;
//}
//
//void GetBookData(void)
//{
//	int kolvo;
//	cout << "Введите количесво книг: ";
//	cin >> kolvo;
//	int k;
//	cout << "Введите даные о книге:";
//	for (k = 0; k < kolvo; k++)
//	{
//		cout << endl << k + 1 << ". Название книги : ";
//		cin.ignore();
//		getline(cin, barr[k].name);
//		cout << "Автор: ";
//		getline(cin, barr[k].author);
//		cout << "Издание: ";
//		getline(cin, barr[k].publication);
//		cout << "Жанр: ";
//		getline(cin, barr[k].genre);
//		rewind(stdin);
//	}
//	kst = kolvo;
//}
//
//void PrintAllData(void)
//{
//	BOOK* ptr;
//	cout << "\n----------------------------------------\n\t\t\nСписок книг:\n";
//	for (ptr = barr; ptr < barr + kst; ptr++)
//	{
//		cout << "\nКнига " << ptr - barr + 1 << ".\nНазвание: " << ptr->name << "\nАвтор: " << ptr->author << "\nИздание: " << ptr->publication << "\nЖанр: " << ptr->genre << endl;
//	}
//}
//
//void EditBook(void)
//{
//	int index;
//	cout << "\nКакую книгу вы хотите редактировать: ";
//	cin >> index;
//	index--;
//	cout << "\nНазвание книги: ";
//	cin.ignore();
//	getline(cin, barr[index].name);
//	cout << "Автор: ";
//	getline(cin, barr[index].author);
//	cout << "Издание: ";
//	getline(cin, barr[index].publication);
//	cout << "Жанр: ";
//	getline(cin, barr[index].genre);
//	cout << "\nРедактирование завершено\n";
//}
//
//
//void SearchByAuthor(void)
//{
//	string author1;
//	cout << "\nВведите автора: ";
//	getline(cin, author1);
//	int i;
//	for (pst = barr, i = 0; i < kst; i++, pst++)
//	{
//		if (barr[i].author == author1)
//		{
//			cout << "\n\nКнига " << pst - barr + 1 << ".\nНазвание: " << pst->name << "\nАвтор: " << pst->author << "\nИздание: " << pst->publication << "\nЖанр: " << pst->genre << endl;
//
//		}
//	}
//}
//
//void SearchByName(void)
//{
//	string name1;
//	cout << "\nВведите название: ";
//	getline(cin, name1);
//	int i;
//	for (pst = barr, i = 0; i < kst; i++, pst++)
//	{
//		if (barr[i].name == name1)
//		{
//			cout << "\n\nКнига " << pst - barr + 1 << ".\nНазвание: " << pst->name << "\nАвтор: " << pst->author << "\nИздание: " << pst->publication << "\nЖанр: " << pst->genre << endl;
//
//		}
//	}
//}
//
//void SortByName(void)
//{
//	BOOK abc;
//	int k = 0;
//	cout << "\n----------------------------------------\n\t\nСписок oтсортированых за именем книг:\n";
//	for (int i = 0; i < kst; i++)
//	{
//		for (int j = kst - 1; j > i; j--)
//		{
//			if (barr[j].name[k] < barr[j - 1].name[k])
//			{
//				abc = barr[j];
//				barr[j] = barr[j - 1];
//				barr[j - 1] = abc;
//			}
//			else if (barr[j].name[k] == barr[j - 1].name[k])
//			{
//				for (int q = k + 1; !(barr[j].name[q] > barr[j - 1].name[q]); q++)
//				{
//					if (barr[j].name[q] < barr[j - 1].name[q])
//					{
//						abc = barr[j];
//						barr[j] = barr[j - 1];
//						barr[j - 1] = abc;
//						break;
//					}
//				}
//			}
//		}
//	}
//	int i;
//	for (pst = barr, i = 0; i < kst; i++, pst++)
//	{
//		cout << "\n\nКнига " << pst - barr + 1 << ".\nНазвание: " << pst->name << "\nАвтор: " << pst->author << "\nИздание: " << pst->publication << "\nЖанр: " << pst->genre << endl;
//	}
//}
//
//void SortByAuthor(void)
//{
//	BOOK abc;
//	int k = 0;
//	cout << "\n----------------------------------------\n\t\nСписок oтсортированых за автором книг:\n";
//	for (int i = 0; i < kst; i++)
//	{
//		for (int j = kst - 1; j > i; j--)
//		{
//			if (barr[j].author[0] < barr[j - 1].author[0])
//			{
//				abc = barr[j];
//				barr[j] = barr[j - 1];
//				barr[j - 1] = abc;
//			}
//			else if (barr[j].author[k] == barr[j - 1].author[k])
//			{
//				for (int q = k + 1; !(barr[j].author[q] > barr[j - 1].author[q]) && barr[j].author[q] != '\0'; q++)
//				{
//					if (barr[j].author[q] < barr[j - 1].author[q])
//					{
//						abc = barr[j];
//						barr[j] = barr[j - 1];
//						barr[j - 1] = abc;
//						break;
//					}
//				}
//			}
//		}
//	}
//	int i;
//	for (pst = barr, i = 0; i < kst; i++, pst++)
//	{
//		cout << "\n\nКнига " << pst - barr + 1 << ".\nНазвание: " << pst->name << "\nАвтор: " << pst->author << "\nИздание: " << pst->publication << "\nЖанр: " << pst->genre << endl;
//	}
//}
//
//void SortByPublication(void)
//{
//	BOOK abc;
//	int k = 0;
//	cout << "\n----------------------------------------\n\t\nСписок oтсортированых за изданием книг:\n";
//	for (int i = 0; i < kst; i++)
//	{
//		for (int j = kst - 1; j > i; j--)
//		{
//			if (barr[j].publication[k] < barr[j - 1].publication[k])
//			{
//				abc = barr[j];
//				barr[j] = barr[j - 1];
//				barr[j - 1] = abc;
//			}
//			else if (barr[j].publication[k] == barr[j - 1].publication[k])
//			{
//				for (int q = k + 1; !(barr[j].publication[q] > barr[j - 1].publication[q]) && barr[j].publication[q] != '\0'; q++)
//				{
//					if (barr[j].publication[q] < barr[j - 1].publication[q])
//					{
//						abc = barr[j];
//						barr[j] = barr[j - 1];
//						barr[j - 1] = abc;
//						break;
//					}
//				}
//			}
//		}
//	}
//	int i;
//	for (pst = barr, i = 0; i < kst; i++, pst++)
//	{
//		cout << "\n\nКнига " << pst - barr + 1 << ".\nНазвание: " << pst->name << "\nАвтор: " << pst->author << "\nИздание: " << pst->publication << "\nЖанр: " << pst->genre << endl;
//	}
//}


/*
The Hobbit
J. R. R. Tolkien
High fantasy
George Allen & Unwin

The Great Gatsby
F. Scott Fitzgerald
Novel
Charles Scribners Sons

The Catcher in the Rye
J. D. Salinger
Realistic fiction
Little

The Fault in Our Stars
John Green
Young adult novel
Dutton Books

1984
George Orwell
Dystopian
Secker & Warburg

Diary of a Wimpy Kid
Jeff Kinney
Comedy
Amulet Books

The Lord of the Rings
J. R. R. Tolkien
Adventure
George Allen & Unwin

The Hunger Games
Suzanne Collins
Dystopian
Scholastic

Anna Karenina
Leo Tolstoy
Realist novel
The Russian Messenger

The End of Eternity
Isaac Asimov
Science fiction
Doubleday
*/



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

//#include <iostream>
//#include <string>
//#include <iomanip>
//#define N 10
//
//using namespace std;
//
//typedef struct Car
//{
//	string color;
//	string plate;
//	string model;
//
//}CAR;
//
//int GetData(CAR* arr);
//void PrintData(CAR* arr, int k);
//void FindByPlate(CAR* arr, int k);
//int EditCar(CAR* arr);
//bool CheckPlate(string p);
//
//int main()
//{
//	setlocale(LC_ALL, "");
//	CAR carr[N];
//	int kst;
//	kst = GetData(carr);
//	int variant;
//	do
//	{
//		cout << "\n\n1-Edit Car\n2-Print List\n3-Search By Plate\n0-Exit\nYour choice: ";
//		cin >> variant;
//		cin.ignore();
//		switch (variant)
//		{
//		case 1:
//			EditCar(carr);
//			break;
//
//		case 2:
//			PrintData(carr, kst);
//			break;
//
//		case 3:
//			FindByPlate(carr, kst);
//			break;
//		}
//	} while (variant != 0);
//	return 0;
//}
//
//int GetData(CAR* arr)
//{
//	int k;
//	string tmp_plate;
//	cout << " Enter information about car:";
//	for (k = 0; k < N; k++)
//	{
//		cout << endl << k + 1 << ". Color: ";
//		getline(cin, arr[k].color);
//		if (arr[k].color.length() == 0)
//		{
//			break;
//		}
//		cout << "Plate: ";
//		getline(cin, tmp_plate);
//		if (!CheckPlate(tmp_plate))
//		{
//			cout << "Wrong plate input" << endl;
//			return 0;
//		}
//		arr[k].plate = tmp_plate;
//		cout << "Model: ";
//		getline(cin, arr[k].model);
//		rewind(stdin);
//	}
//	return k;
//}
//
//void PrintData(CAR* arr, int k)
//{
//	CAR* ptr;
//	cout << "\n\n\t\t Introduced list of cars:\n\n";
//	for (ptr = arr; ptr < arr + k; ptr++)
//	{
//		cout << ptr - arr + 1 << ". " << setw(30) << left <<ptr->color << left << setw(30)<< ptr->model << left << setw(30) << ptr->plate << endl;
//	}
//}
//
//void FindByPlate(CAR* arr, int k)
//{
//	CAR* ptr;
//	string plate2;
//	cout << "\nEnter a plate: ";
//	getline(cin, plate2);
//	cout << endl;
//	for (ptr = arr; ptr < arr + k; ptr++)
//	{
//		if (ptr->plate == plate2)
//		{
//			cout << ptr - arr + 1 << ". " << ptr->color << setw(40) << ptr->model << " " << ptr->plate << endl;
//		}
//	}
//}
//
//int EditCar(CAR* arr)
//{
//	string tmp_plate;
//	int index;
//	cout << "\nWhich car do you want to edit: ";
//	cin >> index;
//	index--;
//	cout << "\nColor: ";
//	cin.ignore();
//	getline(cin, arr[index].color);
//	cout << "Plate: ";
//	getline(cin, tmp_plate);
//	if (!CheckPlate(tmp_plate))
//	{
//		cout << "Wrong plate input" << endl;
//		return 0;
//	}
//	arr[index].plate = tmp_plate;
//	cout << "Model: ";
//	getline(cin, arr[index].model);
//	cout << "\nEditing is done\n";
//}
//
//bool CheckPlate(string p)
//{
//	bool res = false;
//	for (int i = 0; i < p.size(); i++)
//	{
//		if (isdigit(p[i]) && p.size() == 5)
//		{
//			res = true;
//		}	
//	}
//	if (res)
//		return true;
//	res = false;
//	for (int i = 0; i < p.size(); i++)
//	{	
//		if (isalpha(p[i]) && p.size() <= 8)
//		{
//			res = true;
//		}
//	}
//	if (res)
//		return true;
//
//	return false;
//}



/*
Red
BCMOHFDS
Kia Cerato
Blue
BCFGSJFI
Citroen C4
British Racing Green
12345
Aston Martin Vantage
Marine Blue
BCDFGHKP
BMW X5
Dark Brown
12256
Bentley Mulsanne
BWT Pink
19687
Porsche 911 GT3 R
*/


/*
Описать структуру Student(фамилия, группа, успеваемость(массив из 5 int)).
 Создать массив студентов и написать программу, позволяющую:

•     Динамически изменять размер массива;

•     Выводить список отличников(> 75 % отличных оценок);

•     Выводить список двоечников(> 50 % оценок 2 и 3);
*/

//#include <iostream>
//#include <string>
//#include <cmath>
//#include <iomanip>
//#define SIZE 5
//
//using namespace std;
//
//typedef struct Student
//{
//	string surname;
//	string group;
//	int progress[SIZE];
//}ST;
//
//int N = 0;
//void GetData(ST* arr, int N);
//void PrintGood(ST* arr, int N);
//void PrintBad(ST* arr, int N);
//void PrintAllData(ST* arr, int N);
//ST *AddEl(ST* arr, int *N, int index);
//void DeleteEl(ST* arr, int N, int pos);
//
//int main(void) {
//
//	setlocale(LC_ALL, "");
//	cout << "Enter a number of students - ";
//	cin >> N;
//	ST* starr = new ST[N];
//	GetData(starr, N);
//	int variant, var;
//	do
//	{
//		cout << "\n\n1-Динамически изменять размер массива\n2-Выводить список отличников(> 75 % отличных оценок)\n3-Выводить список двоечников(> 50 % оценок 2 и 3)\n4-Print ALL\n0-Выход\nВаш вариант - ";
//		cin >> variant;
//		switch (variant)
//		{
//		case 1:
//			do
//			{
//				cout << "\n1-add\n2-delete\n0-exit\nYour choice - ";
//				cin >> var;
//				switch (var)
//				{
//				case 1:
//					int index;
//					cout << "\nEnter index: ";
//					cin >> index;					
//					if (index < 0 || index > N)
//					{
//						cout << "\nWrong input" << endl;
//						return 0;
//					}
//					starr = AddEl(starr, &N, index);
//					break;
//
//				case 2:
//					int pos;
//					cout << "Enter index: ";
//					cin >> pos;
//					if (pos < 0 || pos > N)
//					{
//						cout << "\nWrong input" << endl;
//						return 0;
//					}
//					DeleteEl(starr, N, pos);
//					break;
//				}
//			} while (var != 0);
//			break;
//
//		case 2:
//			PrintGood(starr, N);
//			break;
//
//		case 3:
//			PrintBad(starr, N);
//			break;
//
//		case 4:
//			PrintAllData(starr, N);
//			break;
//		}
//	} while (variant != 0);
//
//	delete[]starr;
//	return 0;
//}
//
//void GetData(ST* arr, int N)
//{
//	int k, l;
//	cout << "\nEnter info about students:\n";
//	for (k = 0; k < N; k++)
//	{
//		cout << k + 1 << ". Surname: ";
//		cin.ignore();
//		getline(cin, arr[k].surname);
//		cout << "Group: ";
//		getline(cin, arr[k].group);
//		cout << "\nNow enter 5 marks for each student:\n";
//		for (l = 0; l < SIZE; l++)
//		{
//			cout << l + 1 << " Mark -  ";
//			cin >> arr[k].progress[l];
//		}
//	}
//}
//
//void PrintGood(ST* arr, int N)
//{
//	ST* ptr;
//	int counter = 0;
//	cout << "\n\n\t Introduced list of excellent students:\n\n";
//	for (ptr = arr; ptr < arr + N; ptr++)
//	{
//		for (int i = 0; i < SIZE; i++)
//		{
//			if (ptr->progress[i] == 5)
//			{
//				counter++;
//			}
//		}
//		if (counter >= 4)
//		{
//			cout << ptr - arr + 1 << ". " << setw(20) << left << ptr->surname << left << setw(20) << ptr->group << endl;
//		}
//		counter = 0;
//	}
//}
//
//void PrintBad(ST* arr, int N)
//{
//	ST* ptr;
//	int counter = 0;
//	cout << "\n\n\t Introduced list of bad students:\n\n";
//	for (ptr = arr; ptr < arr + N; ptr++)
//	{
//		for (int i = 0; i < SIZE; i++)
//		{
//			if (ptr->progress[i] == 2 || ptr->progress[i] == 3)
//			{
//				counter++;
//			}
//		}
//		if (counter >= 3)
//		{
//			cout << ptr - arr + 1 << ". " << setw(20) << left << ptr->surname << left << setw(20) << ptr->group << endl;
//		}
//		counter = 0;
//	}
//}
//
//void PrintAllData(ST* arr, int N)
//{
//	ST* ptr;
//	
//	cout << "\n\n\t Introduced list of all students:\n\n";
//	for (ptr = arr; ptr < arr + N; ptr++)
//	{	
//		cout << ptr - arr + 1 << ". " << setw(20) << left << ptr->surname << left << setw(20) << ptr->group << endl;
//		cout << "His marks: " ;
//		for (int i = 0; i < SIZE; i++)
//		{
//			cout << ptr->progress[i] << " ";
//		}
//		cout << endl;
//	}
//}
//
//ST *AddEl(ST* arr, int *N, int index)
//{
//	(*N)++;
//	ST* tmparr = new ST[*N];
//	for (int i = 0; i < index; i++)
//	{
//		tmparr[i] = arr[i];
//	}
//	cout << "Surname: ";
//	cin.ignore();
//	getline(cin, tmparr[index].surname);
//	cout << "Group: ";
//	getline(cin, tmparr[index].group);
//	cout << "\nNow enter 5 marks for your student:\n";
//	for (int l = 0; l < SIZE; l++)
//	{
//		cout << l + 1 << " Mark -  ";
//		cin >> tmparr[index].progress[l];
//	}
//	for (int i = index + 1; i < *N; i++)
//	{
//		tmparr[i] = arr[i - 1];
//	}	
//	return tmparr;
//	//PrintAllData(tmparr, N);
//}
//
//void DeleteEl(ST* arr, int N, int pos)
//{
//	ST* tmparr = new ST[N--];
//	for (int i = 0,x=0; x < N; i++,x++)
//	{
//		if (i == pos)
//		{
//			i++;
//			tmparr[x] = arr[i];
//		}
//		else
//		{
//			tmparr[x] = arr[i];
//		}
//	}
//	PrintAllData(tmparr, N);
//}

/*
Mitnichuk
KN-106
2
2
3
4
5
Korniychuk
KN-105
4
5
5
5
5
Ermolaev
AV-201
3
3
3
4
3
Stanko
PR-111
3
3
4
4
4
Peleshchyshyn
PM-11
4
4
4
5
5
*/


/*
Описать структуру Man(Фамилия, Имя, Возраст, Дата рождения).Создать массив, предусмотреть:

•     Вывод информации с сортировкой по фамилии или имени;

•     Вывод списка именинников месяца с указанием даты рождения;

•     Изменение размеров массива при добавлении и удалении записей;

•     Поиск по фамилии и имени;

•     Редактирование записи;
*/

#include <iostream>
#include <string>
#include <string.h>
#include <iomanip>

using namespace std;

struct hbdate
{
	int day, month, year;
};

typedef struct Man
{
	string surname;
	string name;
	int age;
	char date[12];
	hbdate dat3;

}MAN;

void GetData(MAN* arr, int size);
void PrintData(MAN* arr, int size);
void SortBySurname(MAN* arr, int size);
void SortByName(MAN* arr, int size);
int SearchByMonth(MAN* arr, int size);
int CharToInt(char* date);
void SearchBySurname(MAN* arr, int size,string surname1);
void SearchByName(MAN* arr, int size,string name1);
void EditStudent(MAN* arr, int size);

int main(void) {

	//setlocale(LC_ALL, "");
	system("chcp 1251");
	int size;
	cout << "Enter a number of people - ";
	cin >> size;
	cin.ignore();
	MAN* marr = new MAN[size];
	GetData(marr, size);
	PrintData(marr, size);
	int variant;
	string surname1;
	string name1;
	do
	{
		cout << "\n1 - Вывод информации с сортировкой по фамилии или имени\n2 - Вывод списка именинников месяца с указанием даты рождения\n3 - Изменение размеров массива при добавлении и удалении записей\n4 - Поиск по фамилии и имени\n5 - Редактирование записи\nВаш вариант - ";
		cin >> variant;
		switch (variant)
		{
		case 1:
			int choicesort;
			do
			{
				cout << "\n1 - По фамилии\n2 - По имени\n0 - Выход\nВаш вариант - ";
				cin >> choicesort;
				switch (choicesort)
				{
				case 1:
					SortBySurname(marr, size);
					break;

				case 2:
					SortByName(marr, size);
					break;
				}
			} while (choicesort != 0);
			break;

		case 2:
			SearchByMonth(marr, size);
			break;

		case 3:

			break;

		case 4:
			int choicename;
			do
			{
				cout << "\n1 - По фамилии\n2 - По имени\n0 - Выход\nВаш вариант - ";
				cin >> choicename;
				switch (choicename)
				{
				case 1:
					cout << "\nВведите фамилию: ";
					cin.ignore();
					getline(cin, surname1);
					SearchBySurname(marr, size,surname1);
					break;

				case 2:
					cout << "\nВведите имя: ";
					cin.ignore();
					getline(cin, name1);
					SearchByName(marr, size,name1);
					break;
				}
			} while (choicename != 0);
			break;

		case 5:
			EditStudent(marr, size);
			PrintData(marr, size);
			break;
		}
	} while (variant != 0);
	delete[]marr;
	return 0;
}

void GetData(MAN* arr, int size) {

	int k;
	cout << "\nEnter info about people." << endl;
	for (k = 0; k < size; k++)
	{
		cout << endl << k + 1 << ". Surname: ";
		//cin.ignore();
		getline(cin, arr[k].surname);
		cout << "Name: ";
		getline(cin, arr[k].name);
		cout << "Age: ";
		cin >> arr[k].age;
		cout << "Date of birth(dd.mm.yyyy): ";
		cin.ignore();
		gets_s((arr + k)->date);
	}
	
}

void PrintData(MAN* arr, int size) {

	MAN* ptr;
	cout << "\n\n\t Introduced list of all students:\n\n";
	for (ptr = arr; ptr < arr + size; ptr++)
	{
		cout << ptr - arr + 1 << ". " << setw(20) << left << ptr->surname << left << setw(20) << ptr->name <<
			left << setw(20) << ptr->age << left << setw(20) << ptr->date  << endl;
	}
}

void SortBySurname(MAN* arr, int size)
{
	MAN abc;
	int k = 0;
	cout << "\n----------------------------------------\n\t\nСписок oтсортированых за фамилией людей:\n";
	for (int i = 0; i < size; i++)
	{
		for (int j = size - 1; j > i; j--)
		{
			if (arr[j].surname[k] < arr[j - 1].surname[k])
			{
				abc = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = abc;
			}
			else if (arr[j].surname[k] == arr[j - 1].surname[k])
			{
				for (int q = k + 1; !(arr[j].surname[q] > arr[j - 1].surname[q]); q++)
				{
					if (arr[j].surname[q] < arr[j - 1].surname[q])
					{
						abc = arr[j];
						arr[j] = arr[j - 1];
						arr[j - 1] = abc;
						break;
					}
				}
			}
		}
	}
	PrintData(arr, size);
}

void SortByName(MAN* arr, int size)
{
	MAN abc;
	int k = 0;
	cout << "\n----------------------------------------\n\t\nСписок oтсортированых за именем людей:\n";
	for (int i = 0; i < size; i++)
	{
		for (int j = size - 1; j > i; j--)
		{
			if (arr[j].name[k] < arr[j - 1].name[k])
			{
				abc = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = abc;
			}
			else if (arr[j].name[k] == arr[j - 1].name[k])
			{
				for (int q = k + 1; !(arr[j].name[q] > arr[j - 1].name[q]); q++)
				{
					if (arr[j].name[q] < arr[j - 1].name[q])
					{
						abc = arr[j];
						arr[j] = arr[j - 1];
						arr[j - 1] = abc;
						break;
					}
				}
			}
		}
	}
	PrintData(arr, size);
}

int SearchByMonth(MAN* arr, int size)
{
	int month1;
	cout << "\nВведите месяц: ";
	cin >> month1;
	if (month1 < 1 || month1 > 12)
	{
		cout << "\nНеправильный ввод" << endl;
		return 0;
	}
	for (int i = 0; i < size; i++)
	{
		int tmparr[3];
		int k = 0;
		char* token = strtok(arr[i].date, ".");
		while (token != NULL)
		{
			tmparr[k] = CharToInt(token);
			k++;
			token = strtok(NULL, ".");
		}
		arr[i].dat3.day = tmparr[0];
		arr[i].dat3.month = tmparr[1];
		arr[i].dat3.year = tmparr[2];
	}
	int i;
	MAN* ptr;
	for (ptr = arr,i = 0; i < size; ptr++, i++)
	{
		if (arr[i].dat3.month == month1)
		{
			if (arr[i].dat3.month < 10)
			{
				cout << ptr - arr + 1 << ". " << setw(20) << left << ptr->surname << left << setw(20) << ptr->name <<
					left << setw(20) << ptr->age << ptr->dat3.day << ".0" << ptr->dat3.month << "." << ptr->dat3.year << endl;
			}
			else
			{
				cout << ptr - arr + 1 << ". " << setw(20) << left << ptr->surname << left << setw(20) << ptr->name <<
					left << setw(20) << ptr->age << ptr->dat3.day << "." << ptr->dat3.month << "." << ptr->dat3.year << endl;
			}
		}
	}
}

int CharToInt(char* date)
{
	int result = 0;
	while (*date != '\0')
	{
		result *= 10;
		result += *date - '0';
		++date;
	}
	return result;
}

void SearchBySurname(MAN* arr, int size,string surname1)
{
	int i;
	MAN* ptr;
	for (ptr = arr, i = 0; i < size; ptr++, i++)
	{
		if (arr[i].surname == surname1)
		{
			cout << ptr - arr + 1 << ". " << setw(20) << left << ptr->surname << left << setw(20) << ptr->name <<
				left << setw(20) << ptr->age << left << setw(20) << ptr->date << endl;
		}
	}
}

void SearchByName(MAN* arr, int size,string name1)
{
	int i;
	MAN* ptr;
	for (ptr = arr, i = 0; i < size; ptr++, i++)
	{
		if (arr[i].name == name1)
		{
			cout << ptr - arr + 1 << ". " << setw(20) << left << ptr->surname << left << setw(20) << ptr->name <<
				left << setw(20) << ptr->age << left << setw(20) << ptr->date << endl;
		}
	}
}

void EditStudent(MAN* arr, int size)
{
	int index;
	cout << "\nКого хотите редактировать(число): ";
	cin >> index;
	index--;
	cout << "Surname: ";
	cin.ignore();
	getline(cin, arr[index].surname);
	cout << "Name: ";
	getline(cin, arr[index].name);
	cout << "Age: ";
	cin >> arr[index].age;
	cout << "Date of birth(dd.mm.yyyy): ";
	cin.ignore();
	gets_s((arr + index)->date);
	cout << "\nРедактирование завершено" << endl;
}

/*
Mitnichuk
Vitaliy
17
17.08.2004
Ermolaev
Oleg
19
14.01.2003
Peleshchyshyn
Volodymyr
18
29.01.2004
Stanko
Svyatoslav
18
29.11.2003
Melnyk
Olexander
18
04.02.2004
Korniychuk 
Sasha
18
02.03.2004
*/