/*
1.Дано два текстовых файла.Выяснить, совпадают ли их строки.
Если нет, то вывести несовпадающую строку из каждого файла.
*/

//
//#include <iostream>
//#include <fstream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//	string str1, str2;
//	ifstream in("D:\\lessons\\file1.txt");
//	ifstream in1("D:\\lessons\\file2.txt");
//
//	if (in.is_open() && in1.is_open())
//	{
//		while (getline(in, str1) && getline(in1, str2))
//		{
//			if (str1 != str2)
//			{
//				cout << str1 << endl << str2 << endl;
//			}
//		}
//	}
//	in.close();
//	in1.close();
//}


/*
2.Дан текстовый файл.Необходимо создать новый файл и записать в него следующую статистику по исходному файлу :
Количество символов Количество строк Количество гласных букв Количество согласных букв Количество цифр.
*/

//#include <iostream>
//#include <fstream>
//#include <string>
//
//using namespace std;
//
//string SOGL = "bcdfghklmnpqrstvwxzBCDFGHKLMNPQRSTVWXZ";
//string GLAS = "aeijouyAEIJOUY";
//string NUMBER = "1234567890";
//
//bool Poshuk(char ch, string arr);
//int Symbols();
//int Strings();
//int Glasnie();
//int Sogl();
//int Numbers();
//
//int main()
//{
//	int sym = Symbols();
//	int str = Strings();
//	int gls = Glasnie();
//	int sgl = Sogl();
//	int num = Numbers();
//
//
//	ofstream out;
//	out.open("D:\\repository\\File-lesson\\lessons\\task2write.txt");
//	if (out.is_open())
//	{
//		out << "Symbols: " << sym << endl;
//		out << "Strings: " << str << endl;
//		out << "Glasnie: " << gls << endl;
//		out << "Soglasnie: " << sgl << endl;
//		out << "Numbers: " << num << endl;
//	}
//	out.close();
//	return 0;
//}
//
//bool Poshuk(char ch, string arr)
//{
//	for (int i = 0; i < arr.size(); i++)
//	{
//		if (ch == arr[i])
//		{
//			return true;
//		}
//	}
//}
//
//int Symbols()
//{
//	int symb = 0;
//	ifstream in("D:\\repository\\File-lesson\\lessons\\task2read.txt");
//	if (!in)
//	{
//		exit(-1);
//	}
//	else
//	{
//		while (!in.eof())
//		{
//			char ch;
//			in >> ch;
//			symb++;
//		}
//	}
//	return symb - 1;
//}
//
//int Strings()
//{
//	int strings = 0;
//	ifstream in("D:\\repository\\File-lesson\\lessons\\task2read.txt");
//
//	if (!in)
//	{
//		exit(-1);
//	}
//	else
//	{
//		string line;
//		while (getline(in, line))
//		{
//			strings++;
//		}
//	}
//	in.close();
//	return strings;
//}
//
//int Glasnie()
//{
//	int glasnie = 0;
//	ifstream in("D:\\repository\\File-lesson\\lessons\\task2read.txt");
//
//	if (!in)
//	{
//		exit(-1);
//	}
//	else
//	{
//		while (!in.eof())
//		{
//			char ch;
//			in >> ch;
//			if (Poshuk(ch, GLAS) == true)
//			{
//				glasnie++;
//			}
//		}
//	}
//	in.close();
//	return glasnie;
//}
//
//int Sogl()
//{
//	int soglasnie = 0;
//	ifstream in("D:\\repository\\File-lesson\\lessons\\task2read.txt");
//
//	if (!in)
//	{
//		exit(-1);
//	}
//	else
//	{
//		while (!in.eof())
//		{
//			char ch;
//			in >> ch;
//			if (Poshuk(ch, SOGL) == true)
//			{
//				soglasnie++;
//			}
//		}
//	}
//	in.close();
//	return soglasnie;
//}
//
//int Numbers()
//{
//	int numbers = 0;
//	ifstream in("D:\\repository\\File-lesson\\lessons\\task2read.txt");
//
//	if (!in)
//	{
//		exit(-1);
//	}
//	else
//	{
//		while (!in.eof())
//		{
//			char ch;
//			in >> ch;
//			if (Poshuk(ch, NUMBER) == true)
//			{
//				numbers++;
//			}
//		}
//	}
//	in.close();
//	return numbers;
//}


/*
Задание 3:
Шифр Цезаря — один из древнейших шифров.
При шифровании каждый символ заменяется другим, отстоящим от него в алфавите на фиксированное число позиций.

Пример
Шифрование с использованием ключа: 3
Оригинальный текст: Съешь же ещё этих мягких французских булок, да выпей чаю.
Шифрованный текст: Фэзыя йз зьи ахлш пвёнлш чугрщцкфнлш дцосн, жг еютзм ъгб.
Дан текстовый файл. Зашифровать его, используя шифр Цезаря. Результат записать в другой файл.
*/

//#include <iostream>
//#include <fstream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//	setlocale(LC_ALL, "");
//	cout << "Данные файла" << endl;
//	ifstream fin("D:\\repository\\File-lesson\\lessons\\task3caesar.txt");
//	string str;
//	char ch;
//	int i, key = 3;
//	ofstream fout("D:\\repository\\File-lesson\\lessons\\Task3CesarWrite.txt");
//	if (fin.is_open())
//	{
//		while (getline(fin,str))
//		{
//			for (i = 0; i < str.size(); ++i)
//			{
//				ch = str[i];
//				if (ch >= 'a' && ch <= 'z')
//				{
//					ch = ch + key;
//					if (ch > 'z')
//					{
//						ch = ch - 'z' + 'a' - 1;
//					}
//					str[i] = ch;
//				}
//				else if (ch >= 'A' && ch <= 'Z')
//				{
//					ch = ch + key;
//					if (ch > 'Z')
//					{
//						ch = ch - 'Z' + 'A' - 1;
//					}
//					str[i] = ch;
//				}
//			}
//			fout << str << endl;
//		}
//		cout << "Считывание завершено" << endl;
//	}
//	fin.close();
//	cout << "Поток закрыто" << endl;
//	fout.close();
//}


//Дан текстовый файл.Удалить из него последнюю строку.Результат записать в другой файл.

//#include <iostream>
//#include <fstream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//	string str;
//	int count = 0;
//	ifstream fin("D:\\repository\\File-lesson\\lessons\\task3caesar.txt");
//	if (fin.is_open())
//	{
//		while (getline(fin, str))
//		{
//			cout << str << endl;
//			count++;
//		}
//	}
//	cout << "Count = " << count << endl;
//	ofstream fout("D:\\repository\\File-lesson\\lessons\\Task4DeleteStr.txt");
//	fin.close();
//	ifstream finn("D:\\repository\\File-lesson\\lessons\\task3caesar.txt");
//	int k = 0;
//	count--;
//	if (finn.is_open())
//	{
//		while (getline(finn, str))
//		{
//			if (k != count)
//			{
//				fout << str << endl;
//			}
//			k++;
//
//		}
//	}
//	fout.close();
//}


//Дан текстовый файл.Найти длину самой длинной строки.

//#include <iostream>
//#include <fstream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//	string max, current;
//	ifstream fin("D:\\repository\\File-lesson\\lessons\\task3caesar.txt");
//	if (fin.is_open())
//	{
//		while (getline(fin, current))
//		{
//			if (current.size() > max.size())
//			{
//				max = current;
//			}
//		}
//	}
//	cout << "The longest string is [ " << max << " ]" << endl << "Its length is " << max.length() << endl;
//	fin.close();
//}


//Дан текстовый файл.Посчитать сколько раз в нем встречается заданное пользователем слово.

//#include <iostream>
//#include <fstream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//	string str, word,str1;
//	ifstream fin("D:\\repository\\File-lesson\\lessons\\task3caesar.txt");
//	if (fin.is_open())
//	{
//		while (getline(fin, str))
//		{
//			cout << str << endl;
//		}
//	}
//	fin.close();
//	cout << "Enter a word: ";
//	getline(cin, word);
//	ifstream finn("D:\\repository\\File-lesson\\lessons\\task3caesar.txt");
//	int count = 0;
//	if (finn.is_open())
//	{
//		while (getline(finn, str1))
//		{
//			for (int i = str1.length(); i >= 0; i-- )
//			{
//				if (str1.substr(i,word.length()) == word)
//				{
//					count++;
//				}
//			}
//		}
//	}
//	cout << "Your word has met " << count << " times" << endl;
//	finn.close();
//}


//Дан текстовый файл.Найти и заменить в нем заданное слово.Что искать и на что заменять определяется пользователем.

//#include <iostream>
//#include <fstream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//	string str, word,wordreplace;
//	ifstream fin("D:\\repository\\File-lesson\\lessons\\task3caesar.txt");
//	int size = 0;
//	if (fin.is_open())
//	{
//		while (getline(fin, str))
//		{
//			cout << str << endl;
//			size += str.length();
//		}
//	}
//	string* strarr = new string[size];
//	fin.close();
//	cout << "\nEnter a word to replace: ";
//	getline(cin, word);
//	cout << "\nEnter what to write instead: ";
//	getline(cin, wordreplace);
//	ifstream finn("D:\\repository\\File-lesson\\lessons\\task3caesar.txt");
//	int k = 0;
//	if (finn.is_open())
//	{
//		while (getline(finn, strarr[k]))
//		{
//			for (int i = strarr[k].length(); i >= 0; i--)
//			{
//				if (strarr[k].substr(i, word.length()) == word)
//				{
//					strarr[k].insert(i, wordreplace);
//					strarr[k].erase(i + wordreplace.length(), word.length());
//				}
//			}
//			k++;
//		}
//	}
//	cout << endl;
//	for (int i = 0; i < size; i++)
//	{
//		cout << strarr[i] << endl;
//	}
//
//	finn.close();
//}

/*
Запишите информационную систему "Сотрудники".
Программа должна обеспечивать ввод данных, редактирование
данных сотрудника, удаление сотрудника, поиск сотрудника
по фамилии, вывод информации обо всех сотрудниках, указанного
возраста, или фамилия которых начинается на указанную букву.
Организуйте возможность сохранения найденной информации в файл.
Также весь список сотрудников сохраняется в файл(при выходе
из программы – автоматически, в процессе исполнения программы – по команде пользователя).
При старте программы происходит загрузка списка сотрудников из указанного пользователем файла.
*/

//#include <iostream>
//#include <fstream>
//#include <string>
//#include <iomanip>
//#include <string.h>
//#include <cstdio>
//
//using namespace std;
//
//typedef struct Worker
//{
//	string name;
//	string surname;
//	int age;
//	int salary;
//}W;
//
//int SIZE = 0;
//
//void GetData(W* arr,int size);
//void PrintData(W* arr,int size);
//W* ReadFromFile(W* ptr);
//void WriteToFile(int SIZE,W* warr);
//void EditWorker(W* ptr);
//W* DeleteWOrker(W* ptr, int *size, int pos);
//void SearchBySurname(W* ptr, int size, string surname1);
//void SearchByAge(W* ptr, int size, int age1);
//void SearchByFirstLetter(W* ptr, int size, char letter);
//
//int main()
//{
//	W* ptr = NULL;
//	setlocale(LC_ALL, "");
//	ptr = ReadFromFile(ptr);
//	string surname1;
//	int age1;
//	int variant;
//	char letter;
//	do
//	{
//		cout << "\n1-Редактировать сотрудника";
//		cout << "\n2-Удалить сотрудника";
//		cout << "\n3-Поиск сотрудника по фамилии";
//		cout << "\n4-Вывод информации обо всех сотрудниках, указанного возраста или фамилия которых начинается на указанную букву";
//		cout << "\n0-Выход";
//		cout << "\nВаш вариант: ";
//		cin >> variant;
//
//			switch (variant)
//			{
//			case 1:
//				EditWorker(ptr);
//				break;
//
//			case 2:
//				int pos;
//				cout << "Какого сотрудника хотите удалить: ";
//				cin >> pos;
//				pos--;
//				if (pos < 0 || pos > SIZE)
//				{
//					cout << "\nНеправильный ввод" << endl;
//					return 0;
//				}
//				ptr = DeleteWOrker(ptr, &SIZE, pos);
//				for (int i = 0; i < SIZE; i++)
//					cout << ptr[i].name << endl;
//				break;
//
//			case 3:
//				cout << "Введите фамилию: ";
//				cin.ignore();
//				getline(cin, surname1);
//				SearchBySurname(ptr, SIZE, surname1);
//				break;
//
//			case 4:
//				int cas3;
//				cout << "1-Вывод информации обо всех сотрудниках, указанного возраста\n2-Или фамилия которых начинается на указанную букву\nВаш вариант: ";
//				cin >> cas3;
//				switch (cas3)
//				{
//				case 1:
//					cout << "Введите возраст: ";
//					cin.ignore();
//					cin >> age1;
//					SearchByAge(ptr, SIZE, age1);
//					break;
//
//				case 2:
//					cout << "Введите букву: ";
//					cin.ignore();
//					cin >> letter;
//					SearchByFirstLetter(ptr, SIZE, letter);
//				}
//			}
//
//	} while (variant != 0);
//
//	WriteToFile(SIZE,ptr);
//}
//
//void GetData(W* arr,int size)
//{
//	int k;
//	cout << "\nEnter info about workers." << endl;
//	for (k = 0; k < size; k++)
//	{
//		cout << endl << k + 1 << ". Name: ";
//		getline(cin, arr[k].name);
//		cout << "Surname: ";
//		getline(cin, arr[k].surname);
//		cout << "Age: ";
//		cin >> arr[k].age;
//		cout << "Salary: ";
//		cin >> arr[k].salary;	
//	}
//}
//
//void PrintData(W* arr, int size)
//{
//	W* ptr;
//	cout << "\n\t Introduced list of all workers:\n\n";
//	for (ptr = arr; ptr < arr + size; ptr++)
//	{
//		cout << ptr - arr + 1 << ". " << setw(20) << left << ptr->name << left << setw(20) << ptr->surname <<
//			left << setw(20) << ptr->age << left << setw(20) << ptr->salary << endl;
//	}
//}
//
//W* ReadFromFile(W* ptr)
//{
//	int strings = 0;
//	int size;
//	ifstream fin("D:\\repository\\File-lesson\\lessons\\sotrudnikiRead.txt");
//	if (!fin)
//	{
//		exit(-1);
//	}
//	else
//	{
//		string line;
//		while (getline(fin, line))
//		{
//			strings++;
//		}
//	}
//	if (strings == 0)
//	{
//		cout << "\nFile is empty. Write by urself.\nEnter a number of workers: ";
//		cin >> size;
//		W* warr = new W[size];
//		GetData(warr, size);
//		PrintData(warr, size);
//		SIZE = size;
//		ptr = warr;
//		return ptr;
//	}
//	else
//	{
//		int size1 = strings / 4;
//		W* warr = new W[size1];
//		ifstream fin2("D:\\repository\\File-lesson\\lessons\\sotrudnikiRead.txt");
//		for (int i = 0; i < size1; i++)
//		{
//			fin2 >> warr[i].name;
//			fin2 >> warr[i].surname;
//			fin2 >> warr[i].age;
//			fin2 >> warr[i].salary;
//		}
//		PrintData(warr, size1);
//		fin2.close();
//		SIZE = size1;
//		ptr = warr;
//		return ptr;
//	}
//	fin.close();
//}
//
//void WriteToFile(int SIZE, W* ptr)
//{
//	ofstream fout("D:\\repository\\File-lesson\\lessons\\sotrudnikiWrite.txt");
//	for (int i = 0; i < SIZE; i++)
//	{
//		fout << ptr[i].name << endl;
//		fout << ptr[i].surname << endl;
//		fout << ptr[i].age << endl;
//		fout << ptr[i].salary << endl;
//	}
//	fout.close();
//}
//
//void EditWorker(W* ptr)
//{
//	int index;
//	cout << "\nКого хотите редактировать(число): ";
//	cin >> index;
//	index--;
//	cout << "Name: ";
//	cin.ignore();
//	getline(cin, ptr[index].name);
//	cout << "Surname: ";
//	getline(cin, ptr[index].surname);
//	cout << "Age: ";
//	cin >> ptr[index].age;
//	cout << "Salary: ";
//	cin >> ptr[index].salary;
//	cout << "\nРедактирование завершено" << endl;
//}
//
//W* DeleteWOrker(W* ptr, int *size, int pos)
//{
//	W* tmparr = new W[--(*size)];
//	for (int i = 0,x = 0; x < *size; i++,x++)
//	{
//		if (i == pos)
//		{
//			i++;
//			tmparr[x] = ptr[i];
//		}
//		else
//		{
//			tmparr[x] = ptr[i];
//		}
//	}
//	
//	cout << "\nУдаление успешно" << endl;
//	return tmparr;
//}
//
//void SearchBySurname(W* ptr, int size, string surname1)
//{
//	cout << "\nСписок сотрудников,у которых фамилия " << surname1 << endl << endl;
//	int i;
//	for (i = 0; i < size; i++)
//	{
//		if (ptr[i].surname == surname1)
//		{
//			cout << setw(20) << left << ptr[i].name << left << setw(20) << ptr[i].surname <<
//				left << setw(20) << ptr[i].age << left << setw(20) << ptr[i].salary << endl;
//		}
//	}
//}
//
//void SearchByAge(W* ptr, int size, int age1)
//{
//	cout << "\nСписок сотрудников,у которых одинаковый возраст:\n" << endl;
//	int i;
//	for (i = 0; i < size; i++)
//	{
//		if (ptr[i].age == age1)
//		{
//			cout << setw(20) << left << ptr[i].name << left << setw(20) << ptr[i].surname <<
//				left << setw(20) << ptr[i].age << left << setw(20) << ptr[i].salary << endl;
//		}
//	}
//}
//
//void SearchByFirstLetter(W* ptr, int size, char letter)
//{
//	cout << "\nСписок сотрудников,у которых фамилия начинается на заданую букву:\n" << endl;
//	int i;
//	for (i = 0; i < size; i++)
//	{
//		if (ptr[i].surname[0] == letter)
//		{
//			cout << setw(20) << left << ptr[i].name << left << setw(20) << ptr[i].surname <<
//				left << setw(20) << ptr[i].age << left << setw(20) << ptr[i].salary << endl;
//		}
//	}
//}


/*
Добавьте к программе «Простейший файловый менеджер» такие возможности :
1. Создание нового файла в текущем каталоге

2. Удаление файла из текущего каталога

3. Переименование файла в текущем каталоге

4. Перемещение файла из текущего каталога в указанный пользователем каталог

5. Вывод содержимого указанного пользователем файла из текущего каталога на экран
*/


#include <iostream>
#include <string>
#include <fstream>
#include <cstdio>

using namespace std;

void CreateFile();
int DeleteFile();
void RenameFile();
void ReadFromFile();
void Remove();

int main()
{
	setlocale(LC_ALL, "");

	int variant;
	do
	{
		cout << "\n1. Создание нового файла в текущем каталоге"
			<< "\n2. Удаление файла из текущего каталога"
			<< "\n3. Переименование файла в текущем каталоге"
			<< "\n4. Перемещение файла из текущего каталога в указанный пользователем каталог"
			<< "\n5. Вывод содержимого указанного пользователем файла из текущего каталога на экран"
			<< "\n0. Выход"
			<< "\nВаш вариант - ";
		cin >> variant;
		switch (variant)
		{
		case 1:
			cin.ignore();
			CreateFile();
			break;

		case 2:
			cin.ignore();
			DeleteFile();
			break;

		case 3:
			cin.ignore();
			RenameFile();
			break;

		case 4:
			cin.ignore();
			Remove();
			break;

		case 5:
			cin.ignore();
			ReadFromFile();
			break;
		}
	} while (variant != 0);

}

void CreateFile()
{
	string name;
	cout << "Введите путь к файлу и его название: ";
	getline(cin, name);
	ofstream fout(name);
	fout.close();
	cout << "\nФайл успешно создан" << endl;
}

int DeleteFile()
{
	char deletename[100];
	cout << "Введите путь к файлу и его название: ";
	gets_s(deletename);
	if (remove(deletename))
	{
		cout << "Error removing file" << endl;
		return 1;
	}
	else return 0;
}

void RenameFile()
{
	char oldname[100];
	cout << "Введите путь к файлу и его название: ";
	gets_s(oldname);
	char newname[100];
	cout << "Введите путь к файлу и его новое название: ";
	gets_s(newname);
	if (rename(oldname, newname) == 0)
	{
		cout << "Файл успешно переименован" << endl;
	}
	else cout << "Ошибка переименования файла" << endl;
}

void ReadFromFile()
{
	string name;
	string line;
	cout << "Введите путь к файлу и его название: ";
	getline(cin, name);
	ifstream fin(name);
	cout << endl;
	if (fin.is_open())
	{
		while (getline(fin, line))
		{
			cout << line << endl;
		}
	}
	fin.close();
}

void Remove()
{
	char name[100];
	int count = 0;
	cout << "Введите путь к файлу и его название: ";
	gets_s(name);
	ifstream fin(name);
	string buff;
	string name2;
	cout << "Введите новый путь к файлу и его название: ";
	getline(cin, name2);
	ofstream fout(name2);
	if (fout.is_open() && fin.is_open())
	{
		while (getline(fin, buff))
		{
			fout << buff << endl;
		}
	}
	fin.close();
	remove(name);
	fout.close();
}