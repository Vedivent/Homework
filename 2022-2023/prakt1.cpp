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

void _list(int n) {
    cout << "Shaidulin S. V." << endl;
    cout << "V A R I A N T      2.    To exit enter 0." << endl << endl;
    cout << "! ! ! ENTERING ANOTHER SYMBOLS CAUSES ERRORS AND CRASHING ! ! !" << endl << endl;
    cout << "Enter the number of exercise:    " << endl << endl << setw(5);

    for (unsigned short i = 1; i <= 15; i++) {
        cout << i << setw(5);
    }
    cout << endl << endl << "Enter here:    ";
}

void _1() {
    cout << "Enter the number :   ";
    unsigned short n = 0;
    cin >> n;
    for (unsigned short i = 1; i <= n; i++) {
        if ((n % i) == 0)
            cout << i << " ";
    }
}

void _2() {
    cout << "Enter the number :   ";
    int n = 0, y = 1;
    cin >> n;
    if (n % 2 != 0) {
        for (unsigned short i = 1; n >= i; i++) {
            y = y*i;
        }
    }
    else if (n % 2 == 0) {
        for (unsigned short i = 2; n >= i; i++) {
            if (i % 2 == 0)
                y = y*i;
        }
    }
    else {
        cout << "Wrong n" << endl;
    }
    cout << y << endl;
}

void _3() {
    int n = 0;
    cout << "Enter the number :   ";
    cin >> n;
    double p = 0;
    for (unsigned int i = 1; i <= n; i++) {
    
    
    }



    cout << p << endl;
}

void _4() {

}

void _5() {

}

void _6() {

}

void _7() {

}

void _8() {
    cout << "Enter massive N : " << endl;

}

void _9() {

}

void _10() {

}

void _11() {
    int n = 0, m = 0, max = 0;
    cout << "Enter the number N and M:   ";
    cin >> n >> m;
    n = abs(n); m = abs(m);
    max = n < m ? n : m;
    for (int i = 1; i <= max; i++)
        if (n % i == 0 && m % i == 0)
            cout << i << " ";
    cout << endl;
}

void _12() {

}

void _13() {
    int n = 0, i = 2;
    cout << "Enter the number n:   ";
    cin >> n;
    while (i <= n) {
        if (n % i == 0) {
            cout << i << " ";
            i++;
        }
    }
}

void _14() {

}

void _15() {
   
}

int main()
{
    unsigned short n = 1;
    while ((n != 0) && (n <= 45) && (n >= 0)) {
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
        case 5: {
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
            break; }
        case 13: {
            _13();
            system("pause");
            system("cls");
            break; }
        case 14: {
            _14();
            system("pause");
            system("cls");
            break; }
        case 15: {
            _15();
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

