//shaydulin
//Необхходимо было сделать лишь одно задание, но пытался сделать больше (не вышло)
#include <iostream>
#include <cmath>
#include <math.h>
#include <thread>
#include <chrono>
#include <limits>
#include <iomanip>
#include <random>
#include <vector>
using namespace std;

int _1func(int n);
int _3func(int a, int b, int c);
int _4func(int n);

void _list(int n) {
    cout << "Shaidulin S. V." << endl;
    cout << "V A R I A N T      28.    To exit enter 0." << endl << endl;
    cout << "! ! ! ENTERING ANOTHER SYMBOLS CAUSES ERRORS AND CRASHING ! ! !" << endl << endl;
    cout << "Enter the number of exercise:    (now available only: 1+-, 3, 4)   " << endl << endl << setw(5);

    for (unsigned short i = 1; i <= 4; i++) {
        cout << i << setw(5);
    }
    cout << endl << endl << "Enter here:    ";
}

void _1() {
    int n = 0, k = 0;
    cout << "Enter N greater 100 but less than 999" << endl;
    cin >> n;
    if (((n != 0) && (n <= 999) && (n >= 100))) {
        k = _1func(n);
    }
    else {
        cout << "I N V A L I D  N U M B E R!" << endl;
    }
    cout << "The sum of three-digit numbers div 25 is " << k << endl;
}

void _2() {

}

void _3() {
    int result = 0, a = 0, b = 0, c = 0;
    cout << "Enter the first term of the geometric progression" << endl;
    cin >> a;
    cout << "Enter the position of the member" << endl;
    cin >> b;
    cout << "Enter the denominator of the progression" << endl;
    cin >> c;
    result = _3func(a, b, c);
    cout << "The nth term of the progression is " << result << endl;
}

void _4() { 
    int n = 0, k = 0;
    cout << "Enter the N " << endl;
    cin >> n;
    k = _4func(n);
    cout << "The sum of first natural even numbers is " << k << endl;
}

/* void _5() {

}

void _6() {

}

void _7() {

}

void _8() {

}

void _9() {

}

void _10() {

}

void _11() {

}

void _12() {

} */

int main()
{
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
        case 3: {
            _3();
            system("pause");
            system("cls");
            break; }
        case 4: {
            _4();
            system("pause");
            system("cls");
            break; }
/*        case 5: {
            _5();
            system("pause");
            system("cls");
            break; }
        case 6: {
            _6();
            system("pause");
            system("cls");
            break; }
        case 7: {
            _7();
            system("pause");
            system("cls");
            break; }
        case 8: {
            _8();
            system("pause");
            system("cls");
            break; }
        case 9: {
            _9();
            system("pause");
            system("cls");
            break; }
        case 10: {
            _10();
            system("pause");
            system("cls");
            break; }
        case 11: {
            _11();
            system("pause");
            system("cls");
            break; }
        case 12: {
            _12();
            system("pause");
            system("cls");
            break; } */
        default: {
            cout << "I N V A L I D  N U M B E R!" << endl;
            system("pause");
            break; }
        }
    }
}

int _1func(int n) {
    int k = 0;
    k += n + (n + 25 < 1000 ? _1func(n + 1) : 0);
    return k;
}

int _3func(int a, int b, int c) {
    if (a == 0) {
        return 0;
    }
    else if (a == 2) {
        return (b * c);
    }
    else {
        return (c * _3func(a - 1, b, c));
    }
}

int _4func(int n) {
    if (n == 0) return 0;
    return _4func(n - 1) + n * 2;
}
