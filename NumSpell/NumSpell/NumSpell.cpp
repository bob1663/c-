#include <stdio.h>        // підключаємо заголовний файл stdio.h

#include <locale.h>       //заголовковий файл стандартної бібліотеки мови програмування С, котрий використовується для задач пов'язаних з локалізацію

#include <stdlib.h>       //визначає кілька функцій загального призначення,
                          //в тому числі - функції динамічного управління пам'яттю, генерації випадкових чисел, цілої арифметики, пошуку, сортування та перетворення типів даних.

#include <conio.h>        //заголовковий файл оголошує кілька бібліотечних функцій для роботи з «консольним введенням і виведенням» програми

char str[3000];
short flag = 0;

void get_rank(); // функція для виведення слів "сотня", "тисяча", "мільйон" та "мільярд"
void get_small_num(); // функція виведення кількості сотень/одиниць фрагмента числа
void get_dec(); // виводить слова, що описують числа на відрізку [10, 11, ..., 19, 20, 30, 40, ..., 90]
void spell(); // функція для роботи з числами

void get_dec(char arr[], int n) {
    switch (arr[n])
    {
    case '1': { // якщо першою цифрою у розряді десяток буде "1", то:
        switch (arr[n + 1])
        {
        case '0': { // виводимо "десять", якщо після "1" стоїть "0"
            printf("%s", " ten");
            flag = 1;
            break;
        }
        case '1': { // виводимо "одинадцять", якщо після "1" стоїть "1" (і т.д.)
            printf("%s", " eleven");
            flag = 1;
            break;
        }
        case '2': {
            printf("%s", " twelve");
            flag = 1;
            break;
        }
        case '3': {
            printf("%s", " thirteen");
            flag = 1;
            break;
        }
        case '4': {
            printf("%s", " fourteen");
            flag = 1;
            break;
        }
        case '5': {
            printf("%s", " fifteen");
            flag = 1;
            break;
        }
        case '6': {
            printf("%s", " sixteen");
            flag = 1;
            break;
        }
        case '7': {
            printf("%s", " seventeen");
            flag = 1;
            break;
        }
        case '8': {
            printf("%s", " eighteen");
            flag = 1;
            break;
        }
        case '9': {
            printf("%s", " nineteen");
            flag = 1;
            break;
        }
        default:
            break;
        }
        break;
    }
    case '2': { // якщо десятків у нас два, виводимо слово "двадцять"
        printf("%s", " twenty");
        break;
    }
    case '3': { // якщо десятків у нас три, виводимо слово "тридцять" (і т.д.)
        printf("%s", " thirty");
        break;
    }
    case '4': {
        printf("%s", " fourty");
        break;
    }
    case '5': {
        printf("%s", " fifty");
        break;
    }
    case '6': {
        printf("%s", " sixty");
        break;
    }
    case '7': {
        printf("%s", " seventy");
        break;
    }
    case '8': {
        printf("%s", " eighty");
        break;
    }
    case '9': {
        printf("%s", " ninety");
        break;
    }
    default: {break; }
    }
}

void get_small_num(char rank) {
    switch (rank)
    {
    case '1': { // якщо "1", то виводимо "один"
        printf("%s", " one");
        break;
    }
    case '2': { // якщо "2", то виводимо "два" (і т.д.)
        printf("%s", " two");
        break;
    }
    case '3': {
        printf("%s", " three");
        break;
    }
    case '4': {
        printf("%s", " four");
        break;
    }
    case '5': {
        printf("%s", " five");
        break;
    }
    case '6': {
        printf("%s", " six");
        break;
    }
    case '7': {
        printf("%s", " seven");
        break;
    }
    case '8': {
        printf("%s", " eight");
        break;
    }
    case '9': {
        printf("%s", " nine");
        break;
    }
    default: {break; }
    }
}

void get_rank(char rank, char h, char d, char n) {
    switch (rank)
    {
    case 'h': { // 'h' еквівалентно сотні
        if (h != '0') { // якщо кількість сотень ненульова, виводимо слово "сто"
            printf("%s", " hundred");
        }
        break;
    }
    case 't': { // 't' еквівалентно тисячі
        if (h != '0' || d != '0' || n != '0') { // якщо кількість тисяч ненульова, виводимо слово "тисяча"
            printf("%s", " thousand");
        }
        break;
    }
    case 'm': { // 'm' еквівалентно мільйону
        if (h != '0' || d != '0' || n != '0') { // якщо кількість мільйонів ненульова, виводимо слово "мільйон"
            if (h != '1') {
                printf("%s", " millions");
            }
            else {
                printf("%s", " million");
            }
        }
        break;
    }
    case 'b': { // 'b' еквівалентно мільярду
        if (h != '0' || d != '0' || n != '0') { // якщо кількість мільярдів ненульова, виводимо слово "мільярд"
            if (h != '1') {
                printf("%s", " billions");
            }
            else {
                printf("%s", " billion");
            }
        }
        break;
    }
    default: {break; }
    }
}

void spell(char num_string[], int n) {
    switch (n) // в залежності від кількості цифр у числі розбиваємо його на слова
    {
    case 1: { // приклад: 1
        get_small_num(num_string[0]);
        break;
    }
    case 2: { // приклад: 12
        get_dec(num_string, 0);
        switch (flag) {
        case 0: {
            get_small_num(num_string[1]);
            break;
        }
        case 1: {
            flag = 0;
        }
        }
        break;
    }
    case 3: { // приклад: 123
        get_small_num(num_string[0]);
        get_rank('h', num_string[0], num_string[1], num_string[2]);
        get_dec(num_string, 1);
        switch (flag) {
        case 0: {
            get_small_num(num_string[2]);
            break;
        }
        case 1: {
            flag = 0;
        }
        }
        break;
    }
    case 4: { // приклад: 1234
        get_small_num(num_string[0]);
        get_rank('t', num_string[0], '0', '0');
        get_small_num(num_string[1]);
        get_rank('h', num_string[1], num_string[2], num_string[3]);
        get_dec(num_string, 2);
        switch (flag) {
        case 0: {
            get_small_num(num_string[3]);
            break;
        }
        case 1: {
            flag = 0;
        }
        }
        break;
    }
    case 5: { // приклад: 12345
        get_dec(num_string, 0);
        switch (flag) {
        case 0: {
            get_small_num(num_string[3]);
            break;
        }
        case 1: {
            flag = 0;
        }
        }
        get_rank('t', num_string[0], num_string[1], '0');
        get_small_num(num_string[2]);
        get_rank('h', num_string[2], num_string[3], num_string[4]);
        get_dec(num_string, 3);
        switch (flag) {
        case 0: {
            get_small_num(num_string[4]);
            break;
        }
        case 1: {
            flag = 0;
        }
        }
        break;
    }
    case 6: { // приклад: 123456
        get_small_num(num_string[0]);
        get_rank('h', num_string[0], num_string[1], num_string[2]);
        get_dec(num_string, 1);
        switch (flag) {
        case 0: {
            get_small_num(num_string[2]);
            break;
        }
        case 1: {
            flag = 0;
        }
        }
        get_rank('t', num_string[0], num_string[1], num_string[2]);
        get_small_num(num_string[3]);
        get_rank('h', num_string[3], num_string[4], num_string[5]);
        get_dec(num_string, 4);
        switch (flag) {
        case 0: {
            get_small_num(num_string[5]);
            break;
        }
        case 1: {
            flag = 0;
        }
        }
        break;
    }
    case 7: { // приклад: 1234567
        get_small_num(num_string[0]);
        get_rank('m', num_string[0], '0', '0');
        get_small_num(num_string[1]);
        get_rank('h', num_string[1], num_string[2], num_string[3]);
        get_dec(num_string, 2);
        switch (flag) {
        case 0: {
            get_small_num(num_string[3]);
            break;
        }
        case 1: {
            flag = 0;
        }
        }
        get_rank('t', num_string[1], num_string[2], num_string[3]);
        get_small_num(num_string[4]);
        get_rank('h', num_string[4], num_string[5], num_string[6]);
        get_dec(num_string, 5);
        switch (flag) {
        case 0: {
            get_small_num(num_string[6]);
            break;
        }
        case 1: {
            flag = 0;
        }
        }
        break;
    }
    case 8: { // приклад: 12345678
        get_dec(num_string, 0);
        switch (flag) {
        case 0: {
            get_small_num(num_string[1]);
            break;
        }
        case 1: {
            flag = 0;
        }
        }
        get_rank('m', num_string[0], '0', '0');
        get_small_num(num_string[2]);
        get_rank('h', num_string[2], num_string[3], num_string[4]);
        get_dec(num_string, 3);
        switch (flag) {
        case 0: {
            get_small_num(num_string[4]);
            break;
        }
        case 1: {
            flag = 0;
        }
        }
        get_rank('t', num_string[2], num_string[3], num_string[4]);
        get_small_num(num_string[5]);
        get_rank('h', num_string[5], num_string[6], num_string[7]);
        get_dec(num_string, 6);
        switch (flag) {
        case 0: {
            get_small_num(num_string[7]);
            break;
        }
        case 1: {
            flag = 0;
        }
        }
        break;
    }
    case 9: { // приклад: 123456789
        get_small_num(num_string[0]);
        get_rank('h', num_string[0], num_string[1], num_string[2]);
        get_dec(num_string, 1);
        switch (flag) {
        case 0: {
            get_small_num(num_string[2]);
            break;
        }
        case 1: {
            flag = 0;
        }
        }
        get_rank('m', num_string[0], num_string[1], num_string[2]);
        get_small_num(num_string[3]);
        get_rank('h', num_string[3], num_string[4], num_string[5]);
        get_dec(num_string, 4);
        switch (flag) {
        case 0: {
            get_small_num(num_string[5]);
            break;
        }
        case 1: {
            flag = 0;
        }
        }
        get_rank('t', num_string[3], num_string[4], num_string[5]);
        get_small_num(num_string[6]);
        get_rank('h', num_string[6], num_string[7], num_string[8]);
        get_dec(num_string, 7);
        switch (flag) {
        case 0: {
            get_small_num(num_string[8]);
            break;
        }
        case 1: {
            flag = 0;
        }
        }
        break;
    }
    case 10: { // приклад: 1234567890
        get_small_num(num_string[0]);
        get_rank('b', num_string[0], '0', '0');
        get_small_num(num_string[1]);
        get_rank('h', num_string[1], num_string[2], num_string[3]);
        get_dec(num_string, 2);
        switch (flag) {
        case 0: {
            get_small_num(num_string[3]);
            break;
        }
        case 1: {
            flag = 0;
        }
        }
        get_rank('m', num_string[1], num_string[2], num_string[3]);
        get_small_num(num_string[4]);
        get_rank('h', num_string[4], num_string[5], num_string[6]);
        get_dec(num_string, 5);
        switch (flag) {
        case 0: {
            get_small_num(num_string[6]);
            break;
        }
        case 1: {
            flag = 0;
        }
        }
        get_rank('t', num_string[4], num_string[5], num_string[6]);
        get_small_num(num_string[7]);
        get_rank('h', num_string[7], num_string[8], num_string[9]);
        get_dec(num_string, 8);
        switch (flag) {
        case 0: {
            get_small_num(num_string[9]);
            break;
        }
        case 1: {
            flag = 0;
        }
        }
        break;
    }
    case 11: { // приклад: 12345678901
        get_dec(num_string, 0);
        switch (flag) {
        case 0: {
            get_small_num(num_string[1]);
            break;
        }
        case 1: {
            flag = 0;
        }
        }
        get_rank('b', num_string[0], num_string[1], '0');
        get_small_num(num_string[2]);
        get_rank('h', num_string[2], num_string[3], num_string[4]);
        get_dec(num_string, 3);
        switch (flag) {
        case 0: {
            get_small_num(num_string[4]);
            break;
        }
        case 1: {
            flag = 0;
        }
        }
        get_rank('m', num_string[2], num_string[3], num_string[4]);
        get_small_num(num_string[5]);
        get_rank('h', num_string[5], num_string[6], num_string[7]);
        get_dec(num_string, 6);
        switch (flag) {
        case 0: {
            get_small_num(num_string[7]);
            break;
        }
        case 1: {
            flag = 0;
        }
        }
        get_rank('t', num_string[5], num_string[6], num_string[7]);
        get_small_num(num_string[8]);
        get_rank('h', num_string[8], num_string[9], num_string[10]);
        get_dec(num_string, 9);
        switch (flag) {
        case 0: {
            get_small_num(num_string[10]);
            break;
        }
        case 1: {
            flag = 0;
        }
        }
        break;
    }
    case 12: { // приклад: 123456789012
        get_small_num(num_string[0]);
        get_rank('h', num_string[0], num_string[1], num_string[2]);
        get_dec(num_string, 1);
        switch (flag) {
        case 0: {
            get_small_num(num_string[2]);
            break;
        }
        case 1: {
            flag = 0;
        }
        }
        get_rank('b', num_string[0], num_string[1], num_string[2]);
        get_small_num(num_string[3]);
        get_rank('h', num_string[3], num_string[4], num_string[5]);
        get_dec(num_string, 4);
        switch (flag) {
        case 0: {
            get_small_num(num_string[5]);
            break;
        }
        case 1: {
            flag = 0;
        }
        }
        get_rank('m', num_string[3], num_string[4], num_string[5]);
        get_small_num(num_string[6]);
        get_rank('h', num_string[6], num_string[7], num_string[8]);
        get_dec(num_string, 7);
        switch (flag) {
        case 0: {
            get_small_num(num_string[8]);
            break;
        }
        case 1: {
            flag = 0;
        }
        }
        get_rank('t', num_string[6], num_string[7], num_string[8]);
        get_small_num(num_string[9]);
        get_rank('h', num_string[9], num_string[10], num_string[11]);
        get_dec(num_string, 10);
        switch (flag) {
        case 0: {
            get_small_num(num_string[11]);
            break;
        }
        case 1: {
            flag = 0;
        }
        }
        break;
    }
    default:
        break;
    }

}

void num_finder() { // функція, яка виявляє числа у рядку
    char num[12] = ""; // максимальна кількість розрядів у числі дорівнює 12, тобто max(num) = 999|999|999|999
    int n = 0;
    for (int i = 0; i < 3000; i++) {
        if (str[i] != '0' && str[i] != '1' && str[i] != '2' && str[i] != '3' && str[i] != '4' && str[i] != '5' && str[i] != '6' && str[i] != '7' && str[i] != '8' && str[i] != '9') {
            putchar(str[i]);
        }
        else {
            if (str[i + 1] == '0' || str[i + 1] == '1' || str[i + 1] == '2' || str[i + 1] == '3' || str[i + 1] == '4' || str[i + 1] == '5' || str[i + 1] == '6' || str[i + 1] == '7' || str[i + 1] == '8' || str[i + 1] == '9') {
                num[n] = str[i];
                n++;
            }
            else {
                num[n] = str[i];
                n++;
                spell(num, n);
                n = 0;
            }

        }
    }
}

int main(void)
{
    printf("Enter your text: \t\t");
    fgets(str, 3000, stdin);
    printf("\nYour Text after num. spelling: ");
    num_finder();

    return 0;  // виходимо з функції
}
