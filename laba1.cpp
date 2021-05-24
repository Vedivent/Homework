//Ш. С. В. - ОАиП, 1 курс, Лаба1.cpp - вариант 10

#include <iostream>
#include <cmath>
#include <thread>
#include <chrono>
#include <limits>
#include <iomanip>
using namespace std;

void _1st() {
    cout << "Enter the coordinates of the dot (x,y)"s << endl;
    double x, y;
    cin >> x >> y;
    if ((x <= 0 and y >= 0) or (y <= x + 2)) {
        cout << "Dot belongs"s << endl;
    }
    else {
        cout << "Dot doesn't belong"s << endl;
    }
    cout << endl << endl;
}

void _2nd() {
    for (double i = -3.5; i <= -0.1; i += 0.1) {
        double y;
        y = static_cast<double>(sin(fabs(i - sqrt(fabs(i))) * (i - ((pow(i, 2) / (0.75))))));
        cout << "For x = " << i << ", y = " << setprecision(10) << y << endl;
    }
    for (double i = 0; i <= 0.1; i += 0.1) {
        double y;
        y = static_cast<double>(sin(fabs(i - sqrt(fabs(i))) * (i - ((pow(i, 2) / (0.75))))));
        cout << "For x = " << i << ", y = " << setprecision(10) << y << endl;
    }
    cout << endl << endl;
}

void _3rd() {
    double x, y, z;
    x = y = z = 0;
    cout << "Enter X, Y, Z" << endl;
    cin >> x >> y >> z;
    if ((x > y) and (x > z)) {
        cout << "The maximum is " << setprecision(10) << x;
    }
    else if ((z > x) and (z > y)) {
        cout << "The maximum is " << setprecision(10) << z;
    }
    else if ((y > x) and (y > z)) {
        cout << "The maximum is " << setprecision(10) << y;
    }
    else {
        cout << "X, Y and Z are the same";
    }
    cout << endl << endl;
}

void _4th() {
    const double PI = 3.14;
    unsigned short y1 = 0, y2 = -1;
    cout << setw(4) << "x" << setw(16) << "y" << endl;
    for (double x = -2.2; x <= -0.1; x += 0.2) {
        double y, numerator, denominator;
        numerator = static_cast<double>(pow(x, 2) * sin(PI) * x);
        denominator = static_cast<double>(sqrt(4 * cos(x)));
        if (4 * cos(x) < 0) {
            cout << "|" << setw(5) << x << setw(10) << "|" << setprecision(10) << setw(5) << "not exist" << endl;
        }
        else {
            y1++;
            y = static_cast<double>(numerator / denominator);
            cout << "|" << setw(5) << x << setw(10) << "|" << setprecision(10) << setw(5) << y << endl;
        }
    }
    for (double x = 0; x <= 2.3; x += 0.2) {
        double y, numerator, denominator;
        numerator = static_cast<double>(pow(x, 2) * sin(PI) * x);
        denominator = static_cast<double>(sqrt(4 * cos(x)));
        if (4 * cos(x) < 0) {
            cout << "|" << setw(5) << x << setw(10) << "|" << setprecision(10) << setw(5) << "not exist" << endl;
        }
        else {
            y2++;
            y = static_cast<double>(numerator / denominator);
            cout << "|" << setw(5) << x << setw(10) << "|" << setprecision(10) << setw(5) << y << endl;
        }
    }
    cout << endl << "There are y < 0 = " << y1 << " , and y > 0 = " << y2 << endl;
    cout << endl << endl;
}

void _5th() {
    float a = 0; unsigned int n = 0; float bits = 1;
    cout << "Enter float (a)" << endl;
    for (;;) {
        cin >> a;
        if (a > 0) {
            break;
        }
        else {
            cout << "(A) must be > 0" << endl;
        }
    }
    while (bits > a) {
        bits *= 0.5;
        n++;
    }

    cout << "The number is = " << setprecision(10) << n << endl;
    cout << endl << endl;
}

long double fact(int M)
{
    if (M < 0) // если пользователь ввел отрицательное число, возвращаем ноль
        return 0;
    if (M == 0) // если пользователь ввел ноль, возвращаем факториал от нуля = 1
        return 1;
    else // Во всех остальных случаях, делаем рекурсию.
        return M * fact(M - 1);
}

void _6th() {
    cout << "Enter integer n" << endl;
    int n;
    cin >> n;
    double result = 0;
    for (int M = 1; M <= n; ++M) {
        result += ((pow(-1, M) * (M + 1)) / fact(M));
    }
    cout << std::setprecision(10) << result << endl;
    cout << endl << endl;
}

void _8th() {
    cout << "Enter float x: " << endl;
    double x;
    cin >> x;
    double epsilon = numeric_limits<double>::epsilon();
    double result = (1 / ((pow(1, 2) + (pow(x, 2)))));
    int k = 2;
    while (result >= epsilon) {
        result -= (1 / (pow(k, 2.) + pow(x, 2.)));
        k++;
    }
    cout << "result is: " << std::setprecision(10) << result;
    cout << endl << endl;
}
int main() {
    cout << "\(^o^)/  exercise No_1" << endl;
    _1st();
    system("pause");
    system("cls");
    
    cout << "\(^o^)/  exercise No_2" << endl;
    _2nd();
    system("pause");
    system("cls");

    cout << "\(^o^)/  exercise No_3" << endl;
    _3rd();
    system("pause");
    system("cls");

    cout << "\(^o^)/  exercise No_4" << endl;
    _4th();
    system("pause");
    system("cls");

    cout << "\(^o^)/  exercise No_5" << endl;
    _5th();
    system("pause");
    system("cls");

    cout << "\(^o^)/  exercise No_6" << endl;
    _6th();
    system("pause");
    system("cls");

    cout << "I couldn't solve the exercise No_7 :c " << endl;
    system("pause");
    system("cls");


    cout << "\(^o^)/  exercise No_8" << endl;
    _8th();
    system("pause");
    system("cls");


}
