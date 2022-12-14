#include <stdio.h>        // ��������� ���������� ���� stdio.h

#include <locale.h>       //������������ ���� ���������� �������� ���� ������������� �, ������ ��������������� ��� ����� ���'������ � ����������

#include <stdlib.h>       //������� ����� ������� ���������� �����������,
                          //� ���� ���� - ������� ���������� ��������� ���'����, ��������� ���������� �����, ���� ����������, ������, ���������� �� ������������ ���� �����.

#include <conio.h>        //������������ ���� ������� ����� ���������� ������� ��� ������ � ����������� ��������� � ���������� ��������

char str[3000];
short flag = 0;

void get_rank(); // ������� ��� ��������� ��� "�����", "������", "������" �� "������"
void get_small_num(); // ������� ��������� ������� ������/������� ��������� �����
void get_dec(); // �������� �����, �� �������� ����� �� ������ [10, 11, ..., 19, 20, 30, 40, ..., 90]
void spell(); // ������� ��� ������ � �������

void get_dec(char arr[], int n) {
    switch (arr[n])
    {
    case '1': { // ���� ������ ������ � ������ ������� ���� "1", ��:
        switch (arr[n + 1])
        {
        case '0': { // �������� "������", ���� ���� "1" ����� "0"
            printf("%s", " ten");
            flag = 1;
            break;
        }
        case '1': { // �������� "����������", ���� ���� "1" ����� "1" (� �.�.)
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
    case '2': { // ���� ������� � ��� ���, �������� ����� "��������"
        printf("%s", " twenty");
        break;
    }
    case '3': { // ���� ������� � ��� ���, �������� ����� "��������" (� �.�.)
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
    case '1': { // ���� "1", �� �������� "����"
        printf("%s", " one");
        break;
    }
    case '2': { // ���� "2", �� �������� "���" (� �.�.)
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
    case 'h': { // 'h' ����������� ����
        if (h != '0') { // ���� ������� ������ ���������, �������� ����� "���"
            printf("%s", " hundred");
        }
        break;
    }
    case 't': { // 't' ����������� ������
        if (h != '0' || d != '0' || n != '0') { // ���� ������� ����� ���������, �������� ����� "������"
            printf("%s", " thousand");
        }
        break;
    }
    case 'm': { // 'm' ����������� �������
        if (h != '0' || d != '0' || n != '0') { // ���� ������� ������� ���������, �������� ����� "������"
            if (h != '1') {
                printf("%s", " millions");
            }
            else {
                printf("%s", " million");
            }
        }
        break;
    }
    case 'b': { // 'b' ����������� �������
        if (h != '0' || d != '0' || n != '0') { // ���� ������� ������� ���������, �������� ����� "������"
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
    switch (n) // � ��������� �� ������� ���� � ���� ��������� ���� �� �����
    {
    case 1: { // �������: 1
        get_small_num(num_string[0]);
        break;
    }
    case 2: { // �������: 12
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
    case 3: { // �������: 123
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
    case 4: { // �������: 1234
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
    case 5: { // �������: 12345
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
    case 6: { // �������: 123456
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
    case 7: { // �������: 1234567
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
    case 8: { // �������: 12345678
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
    case 9: { // �������: 123456789
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
    case 10: { // �������: 1234567890
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
    case 11: { // �������: 12345678901
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
    case 12: { // �������: 123456789012
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

void num_finder() { // �������, ��� ������� ����� � �����
    char num[12] = ""; // ����������� ������� ������� � ���� ������� 12, ����� max(num) = 999|999|999|999
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

    return 0;  // �������� � �������
}
