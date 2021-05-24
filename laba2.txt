// Шайдулин_Лаба2.cpp - вариант 10

#include <iostream>
#include <cmath>
#include <thread>
#include <chrono>
#include <limits>
#include <iomanip>
#include <algorithm>
using namespace std;

void _1st() {
    int arr_n[20];
    float arr_x[20];
    float amount1 = 0, amount2 = 0, res = 0;

    for (int i = 0, k = 1; i < 20; i++, k++) {
        cout << "Enter natural number N" << k << endl;
        cin >> arr_n[i];
        cout << "Enter real number X" << k << endl;
        cin >> arr_x[i];
        amount1 += arr_n[i] * arr_x[i];
        amount2 += arr_n[i];
    }
    res = amount1 / amount2;
    cout << "result: " << amount1 << " divide by " << amount2 << " = " << res;
    cout << endl << endl;
}

void _3rd() {
    float arr_a[20];
    for (int i = 0, k = 1; i < 20; i++, k++) {
        cout << "Enter real number A" << k << endl;
        cin >> arr_a[i];
        cout << endl;
    }

    cout << "Your array is:" << endl;
    for (int i = 0; i < 20; ++i) {
        cout << arr_a[i] << " ";
    }
    cout << endl;

    cout << "The smallest element is " << *min_element(arr_a, arr_a + 20) << endl;
    cout << "The largest element is " << *max_element(arr_a, arr_a + 20) << endl;
    cout << "Swapping . . . " << endl;
    swap(*max_element(arr_a, arr_a + 20), *min_element(arr_a, arr_a + 20));

    cout << "New array is:" << endl;
    for (int i = 0; i < 20; ++i) {
        cout << arr_a[i] << " ";
    }
    cout << endl << endl;
}

void _4th() {
    int p = 0, q = 0, n = 0;
    cout << "Enter divider (p), remainder (q) and number of numbers (n). (p) > (q) >= 0" << endl;
    for (;;) {
        cin >> p >> q >> n;
        if ((p > q) && (q >= 0)) {
            break;
        }
        else {
            cout << "Wrong numbers, try again." << endl;
        }
    }
    int* arr_a = new int[n];
    for (int i = 0, k = 1; i < n; i++, k++) {
        cout << "Enter natural number A" << k << endl;
        cin >> arr_a[i];
    }

    cout << "Your array is:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << arr_a[i] << " ";
    }

    cout << endl;

    for (int i = 0; i < n; i++) {
        if (abs(arr_a[i]) % p == q) arr_a[i] = 0;
    }

    cout << "New array is:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << arr_a[i] << " ";
    }
    cout << endl;
    cout << endl << endl;
}

void _5th() {
    int m = 0;
    cout << "Enter number of numbers of array (m)." << endl;
    cin >> m;
    int n = m;
    int* arr_a = new int[m];
    for (int i = 0, k = 1; i < n; i++, k++) {
        cout << "Enter integer number A" << k << endl;
        cin >> arr_a[i];
    }
    sort(arr_a, arr_a + m); //сортировка для удобства

    cout << endl << "Great! Now enter integer numbers B!" << endl;

    int* arr_b = new int[n];
    for (int i = 0, k = 1; i < n; i++, k++) {
        cout << "Enter integer number B" << k << endl;
        cin >> arr_b[i];
    }
    sort(arr_b, arr_b + n);

    cout << "Your sorted array A is:" << endl; //почему бы не вывести все массивы на экран, чтобы было видно разницу?
    for (int i = 0; i < n; ++i) {
        cout << arr_a[i] << " ";
    }

    cout << endl << "Your sorted array B is:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << arr_b[i] << " ";
    }

    cout << endl << "Unique numbers in array B are: " << endl;
    for (int i = 0; i <= n; i++) {
        int j = 0;
        for (; j <= n; j++) {
            if (arr_b[i] == arr_a[j]) {
                break;
            }
            if (j == n)
                cout << arr_b[i] << " "; //можно добавить третий массив для новых значений, но зачем?
        }
    }
    cout << endl << endl;

}

void _6th() {
    int n = 0;
    cout << "Enter number of numbers of array (n)." << endl;
    cin >> n;
    double* arr_a = new double[n];
    double* arr_b = new double[n];
    for (int i = 0, k = 1; i < n; i++, k++) {
        cout << "Enter real number A" << k << endl;
        cin >> arr_a[i];
        arr_b[i] = arr_a[i];
    }

    for (int i = 1; i < n - 1; i++) {
        arr_b[i] = ((arr_a[i - 1] + arr_a[i] + arr_a[i + 1]) / 3);
    }

    cout << endl << "Your 'smoothed' array A is:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << arr_b[i] << " ";
    }

    cout << endl << endl;
}

int main()
{
    cout << "v(=^o^=)V  exercise No_1" << endl;
    _1st();
    system("pause");
    system("cls");

    cout << "I didn't undersood exercise No_2 :c " << endl;
    system("pause");
    system("cls");

    cout << "v(=^o^=)V  exercise No_3" << endl;
    _3rd();
    system("pause");
    system("cls");*/

    cout << "v(=^o^=)V  exercise No_4" << endl;
    _4th();
    system("pause");
    system("cls");

    cout << "v(=^o^=)V  exercise No_5" << endl;
    _5th();
    system("pause");
    system("cls");

    cout << "v(=^o^=)V  exercise No_6" << endl;
    _6th();
    system("pause");
    system("cls");


}
