//shaydulin

#include <stdio.h>
#include <iostream>
#include <cmath>
#include <math.h>
#include <thread>
#include <chrono>
#include <iomanip>
#include <random>
#include <string.h>
#include <assert.h>
#include <string>

using namespace std;

void _list(int n);
void _1();
void _2();
char* Ins(char* s, const char* s1, unsigned n);
string random_string(size_t length);

void _list(int n) {
    cout << "Shaidulin S. V." << endl;
    cout << "V A R I A N T      28 (6).    To exit enter 0." << endl << endl;
    cout << "! ! ! ENTERING ANOTHER SYMBOLS CAUSES ERRORS AND CRASHING ! ! !" << endl << endl;
    cout << "Enter the number of exercise: 1 or 2 :  " << endl << endl << setw(5);

    for (unsigned short i = 1; i <= 2; i++) {
        cout << i << setw(5);
    }
    cout << endl << endl << "Enter here:    ";
}

void _1() {
    bool decision = 0;
    short int inA = 0, num1 = 0;
    double ar_mean = 0, counter_zero = 0;
    cout << "Enter the amount of numbers of the array:" << endl;
    cin >> num1;
    double* ArrA = new double[num1]; //for making random static array I have to use index
    cout << "Great! Now enter the array of real numbers (0) or make it random (1) :" << endl;
    cin >> decision;
    if (decision == 0) {
        for (short int i = 0; i < num1; i++) {
            cin >> ArrA[i];
            ArrA[i] > 0 ? ++counter_zero, ar_mean += ArrA[i] : NULL;
        }
    }
    else {
        cout << "your array is: " << endl;
        default_random_engine randEng(time(NULL));
        uniform_int_distribution<int> randNumb(-100, 100);
        for (short int i = 0; i < num1; i++) {
            ArrA[i] = randNumb(randEng);
            cout << setw(3) << ArrA[i] << endl;
            ArrA[i] > 0 ? ++counter_zero, ar_mean += ArrA[i] : NULL;
        }
    }
    ar_mean /= counter_zero;
    cout << endl << "New array : " << endl;
    for (short int i = 0; i < num1; i++) {
        ArrA[i] = ArrA[i] < 0 ? ar_mean : ArrA[i];
        cout << setw(3) << ArrA[i] << endl;
    }
}

void _2() { //I used dedicated random engine for strings
    unsigned n = 0, p = 0;
    bool decision = 0;
    cout << "Enter the amount of numbers of the char array:" << endl;
    cin >> n;
    char* ArrA = new char[n];
    cin >> decision;
    if (decision == 0) {
        for (short int i = 0; i < n; i++) {
            cin >> ArrA[i];
        }
    }
    else {
        cout << "your array is: " << endl;
        char** matrix = random_char[n];

    }
}


char* Ins(char* s, const char* s1, unsigned n) {
    unsigned lenA = strlen(s);
    unsigned lenA1 = strlen(s1);
    assert(n <= lenA);
    memmove(s + n + lenA1, s + n, lenA - n + 1);
    memcpy(s + n, s1, lenA1);
    return s;
}

char** random_char(int n) {
    char** matrix = new char* [n];
    char letters[] =
    {
        'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i',
        'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r',
        's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
        'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I',
        'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R',
        'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z',
        '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', ' '
    };

    random_device r;
    seed_seq seed{ r(), r(), r(), r(), r(), r(), r(), r() };
    shuffle(begin(letters), end(letters), mt19937(seed));

    for (short int i = 0; i <= n; i++) {
        matrix[i] = new char[n];
    }
    return matrix;
}

int main()
{
    srand((unsigned)time(NULL));
    unsigned short n = 1;
    while ((n != 0) && (n <= 12) && (n >= 0)) {
        _list(n);
        cin >> n;
        switch (n) {
        case 0: {
            cout << "Thanks for checking!" << endl << endl << endl;
            break; }
        case 1: {
            _1();
            system("pause");
            system("cls");
            break; }
        case 2: {
            _2();
            system("pause");
            system("cls");
            break; }
        default: {
            cout << "I N V A L I D  N U M B E R!" << endl;
            system("pause");
            break; }
        }
    }
}


