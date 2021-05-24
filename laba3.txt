// Шайдулин_Лаба3.cpp - вариант 10

#include <iostream>
#include <cmath>
#include <thread>
#include <chrono>
#include <limits>
#include <iomanip>
#include <algorithm>
using namespace std;


void _1st() {
    int m = 0, n = 0, max_row = 0;
    double sum = 0, max_sum = 0;
    cout << "Enter number of rows (m) and number of columns (n) of array:" << endl;
    cin >> m >> n;

    double** arr_a = new double*[m];
    for (int count = 0; count < m; count++) {
        arr_a[count] = new double[n];
    }

    for (int count_row = 0, i = 1; count_row < m; count_row++, i++) {
        for (int count_column = 0, j = 1; count_column < n; count_column++, j++) {
            cout << endl << "Enter integer number in row " << i << " and in column " << j << " : " << endl;
            cin >> arr_a[count_row][count_column];  
        }
    }

    sum = arr_a[0][0];
    max_sum = arr_a[0][0];

    cout << "Your array is:" << endl;

    for (int count_row = 0; count_row < m; count_row++) {
        sum = arr_a[0][0];
        for (int count_column = 0; count_column < n; count_column++) {
            sum += arr_a[count_row][count_column];
            cout << setw(3) << setprecision(15) << arr_a[count_row][count_column] << "   ";
        }
        cout << "  |  " << sum << endl;
        if (count_row == 0 || sum > max_sum) {
            max_sum = sum;
            max_row = count_row +1;
        }
    }

    cout << endl << "Max sum is " << setprecision(15) << max_sum << " in row No " << max_row << setprecision(15) << endl;
}

void _4th() {
    int m = 0; double max = 0, jm = 0, im = 0;
    cout << "Enter number of rows and columns (m) of square matrix:" << endl;
    cin >> m;

    double** arr_a = new double*[m];
    for (int i = 0; i < m; i++) {
        arr_a[i] = new double[m];
    }

    for (int i = 0, count_row = 1 ; i < m; i++, count_row++) {
        for (int j = 0, count_column = 1; j < m; j++, count_column++) {
            cout << endl << "Enter integer number in row " << count_row << " and in column " << count_column << " : " << endl;
            cin >> arr_a[i][j];  
        }
    }
    max = jm = im = arr_a[0][0];

    cout << "Your array is:" << endl;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            cout << setw(3) << setprecision(15) << arr_a[i][j] << "   ";
            if ((m - i + 1 >= j) and (arr_a[i][j] > max)) {
                max = arr_a[i][j]; 
                im = i + 1;
                jm = j + 1;
            }
        }
        cout << endl;
    }

    cout << endl << "Max number is " << max << " is in row No " << im << " and in column No " << jm <<  endl;
}

int main()
{
    cout << "(# ^ . ^ #)/ exercise No_1" << endl;
    _1st();
    system("pause");
    system("cls");

    cout << "(# ^ . ^ #)/ exercise No_4" << endl;
    _4th();
    system("pause");
    system("cls");

}
