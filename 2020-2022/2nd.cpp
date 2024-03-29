#include <iostream>
#include <cmath>
#include <thread>
#include <chrono>
#include <limits>
#include <iomanip>
using namespace std;

void _1st() {
    double a;
    cout << "Enter side of square" << endl;
    cin >> a;
    if (a == 0) {
        cout << "The square is null";
    }
    else if (a != 0) {
        cout << "The perimeter is " << setprecision(10) << a*4;
    }
    cout << endl << endl;
}

void _2nd() {
    const double PI = 3.1415926535;
    double r;
    cout << "Enter the radius" << endl;
    cin >> r;
    if (r == 0) {
        cout << "The circle is null";
    }
    else if (r != 0) {
        cout << "The perimeter is " << setprecision(10) << (2 * PI * r);
    }
    cout << endl << endl;
}
void _3rd() {
    const int R = 6350;
    double h;
    cout << "Enter the height" << endl;
    cin >> h;
    if (h == 0) {
        cout << "The distance to the horizon is null";
    }
    else if (h != 0) {
        cout << "The distance to the horizon is " << setprecision(10) << sqrt(h * (2 * R + h));
    }
    cout << endl << endl;
}

void _4th() {
    double a;
    cout << "Enter the side" << endl;
    cin >> a;
    if (a == 0) {
        cout << "The cube is null";
    }
    else if (a != 0) {
        cout << "The square is " << setprecision(10) << pow(a, 2) << endl;
        cout << "The volume is " << setprecision(10) << pow(a, 3);
    }
    cout << endl << endl;
}
void _5th() {
    const double PI = 3.1415926535;
    double r;
    cout << "Enter the radius" << endl;
    cin >> r;
    if (r == 0) {
        cout << "The circle is null";
    }
    else if (r != 0) {
        cout << "The lenght is " << setprecision(10) << 2*PI*r << endl;
        cout << "The square is " << setprecision(10) << PI*pow(r, 2);
    }
    cout << endl << endl;
}

void _6th() {
    int a, b;
    double c;
    cin >> a >> b;
    c = ((a + b) / 2);
    cout << "The average is " << setprecision(10) << c;
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

    cout << "I'm tired, thx 4 fun!" << endl;
    system("pause");
    system("cls");
}
