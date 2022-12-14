//Написать функцию, которая удаляет из строки символ с заданным номером.

//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//	setlocale(LC_ALL, "");
//	string str;
//	cout << "Введите текст: ";
//	getline(cin, str);
//	int num;
//	cout << "Какой символ удалить(число): ";
//	cin >> num;
//	for (int i = num - 1; i < str.size(); i++)
//	{
//		str[i] = str[i + 1];
//	}
//	cout << str;
//}


//Написать функцию, которая вставляет в строку в указанную позицию заданный символ.

//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//	setlocale(LC_ALL, "");
//	string str;
//	char ch;
//	int pos;
//	cout << "Введите текст: ";
//	getline(cin, str);
//	cout << "Напишите символ и позицию,куда его вставить: ";
//	cin >> ch >> pos;
//	str.insert(pos, 1, ch);
//	cout << str;
//}


//Написать программу, которая заменяет все символы точки "." в строке, введенной пользователем, на символы восклицательного знака "!".

//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//	setlocale(LC_ALL, "");
//	string str;
//	cout << "Введите текст: ";
//	getline(cin, str);
//	int count = 0;
//	for (int i = 0; i < str.size(); i++)
//	{
//		if (str[i] == '.')
//		{
//			str[i] = '!';
//		}
//	}
//	cout << str;
//}


//Пользователь вводит строку символов и искомый символ, посчитать сколько раз он встречается в строке.

//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//	setlocale(LC_ALL, "");
//	string str;
//	char ch;
//	int counter = 0;
//	cout << "Введите текст: ";
//	getline(cin, str);
//	cout << "Введите символ, который встречается в веденной строке: ";
//	cin >> ch;
//	for (int i = 0; i < str.size(); i++)
//	{
//		if (str[i] == ch)
//		{
//			counter++;
//		}
//	}
//	cout << "Символ '" << ch << "' встречается " << counter << " раз";
//}


//Пользователь вводит строку.Определить количество букв, количество цифр и количество остальных символов, присутствующих в строке.

//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//	setlocale(LC_ALL, "");
//	string str;
//	int letters = 0, numbers = 0, others = 0, rusletters = 0;
//	cout << "Введите текст: ";
//	getline(cin, str);
//	for (int i = 0; i < str.size(); i++)
//	{
//		if (str[i] >= '0' && str[i] <= '9')
//		{
//			numbers++;
//		}
//		else if (str[i] >= 65 && str[i] <= 90 || str[i] >= 97 && str[i] <= 122)
//		{
//			letters++;
//		}
//		else if (str[i] >= 1 && str[i] <= 47 || str[i] >= 58 && str[i] <= 64 || str[i] >= 91 && str[i] <= 96 || str[i] >= 123 && str[i] <= 127 || str[i] >= 176 && str[i] <= 223 || str[i] >= 248 && str[i] <= 254)
//		{
//			others++;
//		}
//		else if (str[i] >= 128 && str[i] <= 175 || str[i] >= 224 && str[i] <= 247)
//		{
//			rusletters++;
//		}
//	}
//	cout << "Кол-во цифр: " << numbers << endl;
//	cout << "Кол-во букв: " << letters << endl;
//	cout << "Кол-во букв(кирилиця): " << rusletters << endl;
//	cout << "Кол-во остальных символов: " << others << endl;
//}


//Написать функцию, которая удаляет из строки все вхождения в нее заданного символа.

//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//	setlocale(LC_ALL, "");
//	string str;
//	char s;
//	cout << "Введите текст: ";
//	getline(cin, str);
//	cout << "Напишите символ,который хотите удалить из текста: ";
//	cin >> s;
//	int pos = 0;
//	int i = 0;
//	while ((i = str.find(s, pos)) != str.npos)
//	{
//		str.erase(i, 1);
//		pos += i;
//	}
//	cout << str << endl;
//}

//---------------------------------------------------------------------------------------------------------------------------------------------
// 
//Изменить текст таким образом, чтобы каждое предложение начиналось с большой буквы 

//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//	setlocale(LC_ALL, "");
//	string str;
//	cout << "Текст: ";
//	getline(cin, str);
//	for (int i = 0; i < str.size(); i++)
//	{
//		if (0 == i || '.' == str[i - 1])
//		{
//			str[i] = toupper(unsigned char(str[i]));
//		}
//	}
//	cout << str;
//}


//Посчитайте сколько раз цифры встречаются в тексте

//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//	setlocale(LC_ALL, "");
//	string str;
//	cout << "Текст: ";
//	getline(cin, str);
//	int numcount = 0;
//	for (int i = 0;str[i] != 0 ; i++)
//	{
//		if (str[i] >= (char)48 && str[i] <= (char)57)
//			numcount += 1;
//	}
//	cout << "Цифры встречаются в тексте " << numcount << " раз";
//}


//Найдите и замените вхождение некоторого слова на заданное пользователем слово

//#include <iostream>
//#include <string>
//
//using namespace std;
//
//string zamina(string str, string b, string c);
//
//
//int main()
//{
//    setlocale(LC_ALL, "");
//    string str, word, zamena;
//    cout << "Введите текст(only english почемуто): " ;
//    getline(cin, str);
//    cout << "Введите слово: ";
//    getline(cin, word);
//    cout << "На что заменить: ";
//    getline(cin, zamena);
//    str = zamina(str, word, zamena);
//    cout << str << endl;
//    system("pause");
//    return 0;
//}
//
//string zamina(string str, string word, string zamena)
//{
//    for (int i = str.length(); i >= 0; i--)
//    {
//        if (str.substr(i, word.length()) == word)
//        {
//            str.insert(i, zamena);
//            str.erase(i + zamena.length(), word.length());
//        }
//    }
//    return str;
//}


//Посчитайте сколько раз каждая буква встречается в тексте

//#include <iostream>
//#include <string>
//
//using namespace std;
//
//
//int main()
//{
//	setlocale(LC_ALL, "");
//	string str;
//	cout << "Text: ";
//	getline(cin, str);
//	int smallcounter = 0, counter = 0;
//	for (char i = 'a', I = 'A'; i <= 'z', I <= 'Z'; i++,I++)	
//	{
//		for (int j = 0; j < str.size(); j++)
//		{		
//			if (str[j] == i)
//			{
//				smallcounter++;			
//			}		
//			if (str[j] == I)
//			{
//				counter++;
//			}			
//		}
//		if (smallcounter != 0)
//		{
//			cout << "Буква " << i << " встречается в тексте " << smallcounter << " раз" << endl;			
//		}
//		else if (counter != 0 )
//		{			
//			cout << "Буква " << I << " встречается в тексте " << counter << " раз" << endl;
//		}	
//		smallcounter = 0;
//		counter = 0;
//	}	
//	return 0;
//}


//---------------------------------------------------------------------------------------------------------------
//Шифр Цезаря


#include <iostream>
#include <string>

using namespace std;


int main()
{
	setlocale(LC_ALL, "");
	string message;
	char ch;
	int variant;
	int i, key = 3;
	cout << "Enter a message on english: ";
	getline(cin, message);
	cout << "Encrypt or decrypt(1/2): ";
	cin >> variant;
	switch (variant)
	{
	case 1:
		
		for (i = 0; i < message.size(); ++i) {
			ch = message[i];
			if (ch >= 'a' && ch <= 'z') {
				ch = ch + key;
				if (ch > 'z') {
					ch = ch - 'z' + 'a' - 1;
				}
				message[i] = ch;
			}
			else if (ch >= 'A' && ch <= 'Z') {
				ch = ch + key;
				if (ch > 'Z') {
					ch = ch - 'Z' + 'A' - 1;
				}
				message[i] = ch;
			}
		}
		cout << "Encrypted message: " << message;
		break;

	case 2:
		
		for (i = 0; i < message.size(); ++i) {
			ch = message[i];
			if (ch >= 'a' && ch <= 'z') {
				ch = ch - key;
				if (ch < 'a') {
					ch = ch + 'z' - 'a' + 1;
				}
				message[i] = ch;
			}
			else if (ch >= 'A' && ch <= 'Z') {
				ch = ch - key;
				if (ch > 'a') {
					ch = ch + 'Z' - 'A' + 1;
				}
				message[i] = ch;
			}
		}
		cout << "Decrypted message: " << message;
	}	
	return 0;
}