//Shaudylin s v ibo-zi-20

#include <iostream>
#include <cmath>
#include <math.h>
#include <thread>
#include <chrono>
#include <limits>
#include <iomanip>

using namespace std;

void _list(int n) {
    cout << "V A R I A N T      3 0.    To exit enter 0." << endl << endl;
    cout << "! ! ! ENTERING ANOTHER SYMBOLS CAUSES ERRORS AND CRASHING ! ! !" << endl << endl;
    cout << "Enter the number of exercise:    " << endl << endl << setw(5);

    for (unsigned short i = 1; i <= 45; i++) {
        if (i % 5 != 0) {
            cout << i << setw(5);
        }
        else {
            cout << i << setw(5) << endl;
        }
    }
    cout << endl << endl << "Enter here:    ";
}

void _11e() {   //write an arithmetic expression in an algorithmic language and specify the order of operations.
    double a;
    cout << "Enter side of square" << endl;
    cin >> a;
    if (a == 0) {
        cout << "The square is null";
    }
    else if (a > 0) {
        cout << "The perimeter is " << setprecision(10) << a * 4;
    }
    else {
        cout << "Sorry, only POSITIVE numbers" << endl;
    }
    cout << endl << endl;
}

void _11m() {   //write an arithmetic expression in an algorithmic language and specify the order of operations.
    const double PI = 3.1415926535;
    double r;
    cout << "Enter the radius" << endl;
    cin >> r;
    if (r == 0) {
        cout << "The circle is null";
    }
    else if (r > 0) {
        cout << "The perimeter is " << setprecision(10) << (2 * PI * r);
    }
    else {
        cout << "Sorry, only POSITIVE numbers" << endl;
    }
    cout << endl << endl;
}

void _12e() { //Programming of linear algorithms - easy
    double a, b, c;
    cout << "Enter two numbers" << endl;
    cin >> a >> b;
    c = static_cast<double>((pow(a, 3) + pow(b, 3)) / 2);
    cout << "Arithmetic mean of cubes of numbers is " << c << setw(5) << endl;
    cout << "The geometric mean of the modules of numbers is " << (sqrt(abs(a * b))) << endl;
    cout << endl << endl;
}

void _12m() { //Programming of linear algorithms - middle
    cout << "Enter one of two ways: 1 or 2" << endl;

    unsigned short f = 0;
    cin >> f;
    switch (f) {
    case 1: {
        cout << "B is 4.2. Enter number T" << endl;
        const double b = 4.2;
        double t, x, y;
        cin >> t;
        double a = t + pow(b, 3);
        x = pow(t, 2) * (sqrt(a + b));
        y = pow(log(abs(x + pow(a, 2))), 5);
        cout << "a is " << a << setw(8) << endl;
        cout << "x is " << x << setw(8) << endl;
        cout << "y is " << y << setw(8) << endl;
        break; }
    case 2: {
        cout << "T is 3. Enter number B" << endl;
        const double T = 3;
        double B, X, Y;
        cin >> B;
        double A = T + pow(B, 3);
        X = pow(T, 2) * (sqrt(A + B));
        Y = pow(log(abs(X + pow(A, 2))), 5);;
        cout << "a is " << A << setw(8) << endl;
        cout << "x is " << X << setw(8) << endl;
        cout << "y is " << Y << setw(8) << endl;
        break; }
    default: {
        cout << "You chose wrong!" << endl;
        break; }
    }
}

void _21e() { //Programming branching algorithms. logical expressions - easy
    cout << "Write a logical expression describing the scope of the definition and the scope of the function change" << endl;
    cout << "y = 1 / x^2" << endl;
    double x = 0;
    double a = 0;
    cin >> x;
    if (x == 1) {
        cout << "y = 1" << endl;
    }
    else if ((x > 1) || (x < 0)) {
        a = (1 / (pow(x, 2)));
        cout << a << setw(20) << endl;
    }
    else {
        cout << "X is incorrect" << endl;
    }
    cout << endl << endl;
}

void _21m() { //Programming branching algorithms. logical expressions - middle
    cout << "Write a logical expression defining that of the four numbers A, B, C, D one is divisible by 5 and the other is even. Enter them." << endl;
    int A, B, C, D = 0;
    cin >> A >> B >> C >> D;
    if ((A % 2 == 0 || B % 2 == 0 || C % 2 == 0 || D % 2 == 0) &&
        (A % 5 == 0 || B % 5 == 0 || C % 5 == 0 || D % 5 == 0) &&
        (A % 10 != 0 && B % 10 != 0 && C % 10 != 0 && D % 10 != 0))
    {
        cout << "The numbers fit" << endl;
    }
    else {
        cout << "The numbers don't fit" << endl;
    }
    cout << endl << endl;
}

void _22e() { //Given a natural number. Determine whether it is even or ends with the digit 7.
    int a = 0;
    cout << "Enter natural number:  " << endl;
    cin >> a;
    if ((a < 0)) {
        cout << "incorrect number " << a;
    }
    else if ((a % 2 == 0) || (a % 10 == 7)) {
        cout << "The number " << a << " is even OR it ends with 7"  << endl;
    }
    else {
        cout << "Nope, the number doesn't fit " << endl;
    }
}

void _22m() { //Enter three numbers from the keyboard.Display the largest of them on the screen
    double a, b, c = 0;
    cout << "Enter three numbers: " << endl;
    cin >> a >> b >> c;
    if ((a > b) && (a > c)) {
        cout << "The largest number is a " << a << endl;
    }
    if ((b > a) && (b > c)) {
        cout << "The largest number is b " << b << endl;
    }
    if ((c > a) && (c > b)) {
        cout << "The largest number is c " << c << endl;
    }
    else {
        cout << "Sorry, I can't count :c " << endl;
    }
}

void _23e() { //write a program for calculating the function for all variants of variables.
    short a = 0;
    cout << "We can get the resistance with the help of two 6kOhm resistors..." << endl;
    cout << "Select the option number: 1 / 2 / 3" << endl;
    cin >> a;
    switch (a) {
        case 1: { // R1=6, R2=10, R3=2
            cout << "R1=6, R2=10, R3=2" << endl;
            cout << "BOO";

        }
        case 2: {// R1=3, R2=5, R3=7
            cout << "R1=3, R2=5, R3=7" << endl;

        }
        case 3: {// R1=4, R2=12, R3=8
            cout << "R1=4, R2=12, R3=8" << endl;

        }
        default: {
        cout << "I N V A L I D  O P T I O N!" << endl;
        }
    }

}

void _23m() { //Write a program for calculating the function y(x) for all different variants of input parameters. Enter x from the keyboard, output the function value for all options.

}

void _31e() { //Given natural numbers from 10 to N. Find the smallest digit of an integer decimal number.
    int n = 0, x = 0, r = 9;
    cout << "Enter N > 10" << endl;
    cin >> n;
    if (n < 10) {
        cout << "Wrong N!"  << endl;
    }
    else {
        int N = n;
        for (; n != 0; n /= 10) {
            x = n % 10;
            if (x < r) {
                r = x;
            }
        }
        cout << "The smallest digit of a " << N << " is number " << r << endl;
    }
}

void _31m() { //draw up an algorithm diagram and write a program for calculating the sum (product) of a finite series. When developing a program, provide for the omission of terms (multipliers) equal to zero or infinity.
    double A = 0, sum = 0, pr = 1;
    int k = 0, j = 0, i = 0;
    cout << "Enter natural k > 0 " << endl;
    cin >> k;
    for (j = 1; j <= k; j++) {
        if ((j != 3) && (j != 4))
            pr *= (((j - static_cast<double>(4)) * j) / (j - 3));
        for (i = j; i <= (k + 1); i++) {
            if (i != 1) {
                sum += ((pow((i + 5), (1.0 / 3.0))) / (i - 1));
            }
        }
    }
    A = pr * sum;
    cout << "The answer is " << setprecision(10) << A << endl;
}

void _32e() { //Find the sum of the squares of even numbers in the interval given by the values of the variables m and n.
    int sum = 0, M = 0, N = 0, q = 0;
    cout << "Enter the interval M and N" << endl;
    cin >> M >> N;
    if (M > N)
        swap(N, M);
    if (M % 2 != 0)
        M++;
    for (int x = M; x <= N; x += 2) {
        q = pow(x, 2);
        sum += q;
    }
    cout << "Sum of the squares of even numbers in the interval is " << sum << endl;
}

void _32m() { //Natural numbers from 0 to n (n<99) and the number m are given. And find the square of the first number greater than m .
    int n = 0, m = 0, q = 0;
    cout << "Enter N (0<n<99) and M" << endl;
    cin >> n >> m;
    if ((n < 0) || (n > 99)) {
        cout << "Wrong N!" << endl;
    }
    else {
        for (int x = 0; x <= n; x++) {
            q = pow(x, 2);
            if (q >= m) {
                cout << q << " is larger than M = " << m << endl;
                break;
            }
            else if ((q < m)&&(x == n)) {
                cout << "There's no numbers larger than M = " << m << endl;
                break;
            }
        }   
    }
}

void _33() { //make a program for calculating the sum of n terms of a series according to the condition of the problem.
    int n = 0, x = 0;
    double sum = 0;
    cout << "Enter N and X for sin(N * x^N)+..." << endl;
    cin >> n >> x;
    n *= 2;
    for (short i = 1; i <= n; i+= 2) {
        sum += sin(i * (pow(x, i)));
    }
    cout << "The answer is " << sum << setprecision(10) << endl;
}

void _34e() { //write a flowchart and a program for tabulating a function at a given interval with a step of 0.2 and plot this function.
    double y, x = 0;
    cout << "function is: y=3X-2lnX-5" << endl << "interval of X is [1.1 ; 3.1]" << endl << endl;
    cout << "|" << setw(5) << "    param X" << setw(4) << "|" << setprecision(10) << setw(5) << "    Param Y" << endl << endl;
    for (x = 1.1; x <= 3.2; x+=0.2) {
        y = (3 * x - 2 * log(x) - 5);
       cout << "|" << setw(5) << x << setw(10) << "|" << setprecision(10) << setw(5) << y << endl;
    }
    cout << endl;
}


void _34m() { //write a flowchart and a program for calculating a function at a given interval with a step of 0.2 and plot this function.
    double y, x = 0;
    cout << "function is: y=3X-2lnX-5" << endl << "interval of X is [1.1 ; 3.1]" << endl << endl;
    cout << "|" << setw(5) << "    param X" << setw(4) << "|" << setprecision(10) << setw(5) << "    Param Y" << endl << endl;
    for (x = (-pi/4); x <= ((7*pi)/4); x += 0.2) {
        if (x<0) {
            y = cos(2.3 * x - 1);
        }
        if ((x >= 0)&&(x <= 2.5)) {
            y = (3 * log (abs(1-pow(x, 3))));
        }
        if  (x>2.5) {
            y = pow(x, 2);
        }
        
        cout << "|" << setw(5)  << x << setprecision(10)<< setw(10) << "|" << setprecision(10) << setw(5) << y << endl;
    }
    cout << endl;
}


void _41e() { //

}

void _41m() { //

}

void _42e() { //

}

void _42m() { //

}

void _51e() { //

}

void _51m() { //

}

void _52e() { //

}

void _52m() { //

}

void _61e() { //

}

void _61m() { //

}

void _62e() { //

}

void _62m() { //

}

void _63e() { //

}

void _63m() { //

}

void _71e() { //

}

void _71m() { //

}

void _72e() { //

}

void _72m() { //

}

void _73e() { //

}

void _73m() { //

}

void _81e() { //

}

void _81m() { //

}

void _111e() { //

}

void _111m() { //

}

void _112e() { //

}

void _112m() { //

}

void _113e() { //

}

void _113m() { //

}



int main() {
    unsigned short n = 1;
    while ((n != 0) && (n <= 45) && (n >= 0)) {
        _list(n);

        cin >> n;
        switch (n) {
        case 0: {
            cout << "Thanks for checking!" << endl << endl << endl;
            break; }
        case 1: {
            _11e();
            system("pause");
            system("cls");
            break; }
        case 2: {
            _11m();
            system("pause");
            system("cls");
            break; }
        case 3: {
            _12e();
            system("pause");
            system("cls");
            break; }
        case 4: {
            _12m();
            system("pause");
            system("cls");
            break; }
        case 5: {
            _21e();
            system("pause");
            system("cls");
            break; }
        case 6: {
            _21m();
            system("pause");
            system("cls");
            break; }
        case 7: {
            _22e();
            system("pause");
            system("cls");
            break; }
        case 8: {
            _22m();
            system("pause");
            system("cls");
            break; }
        case 9: {
            _23e();
            system("pause");
            system("cls");
            break; }
        case 10: {
            _23m();
            system("pause");
            system("cls");
            break; }
        case 11: {
            _31e();
            system("pause");
            system("cls");
            break; }
        case 12: {
            _31m();
            system("pause");
            system("cls");
            break; }
        case 13: {
            _32e();
            system("pause");
            system("cls");
            break; }
        case 14: {
            _32m();
            system("pause");
            system("cls");
            break; }
        case 15: {
            _33();
            system("pause");
            system("cls");
            break; }
        case 16: {
            _34e();
            system("pause");
            system("cls");
            break; }
        case 17: {
            _34m();
            system("pause");
            system("cls");
            break; }
        case 18: {
            _41e();
            system("pause");
            system("cls");
            break; }
        case 19: {
            _41m();
            system("pause");
            system("cls");
            break; }
        case 20: {
            _42e();
            system("pause");
            system("cls");
            break; }
        case 21: {
            _42m();
            system("pause");
            system("cls");
            break; }
        case 22: {
            _51e();
            system("pause");
            system("cls");
            break; }
        case 23: {
            _51m();
            system("pause");
            system("cls");
            break; }
        case 24: {
            _52e();
            system("pause");
            system("cls");
            break; }
        case 25: {
            _52m();
            system("pause");
            system("cls");
            break; }
        case 26: {
            _61e();
            system("pause");
            system("cls");
            break; }
        case 27: {
            _61m();
            system("pause");
            system("cls");
            break; }
        case 28: {
            _62e();
            system("pause");
            system("cls");
            break; }
        case 29: {
            _62m();
            system("pause");
            system("cls");
            break; }
        case 30: {
            _63e();
            system("pause");
            system("cls");
            break; }
        case 31: {
            _63m();
            system("pause");
            system("cls");
            break; }
        case 32: {
            _71e();
            system("pause");
            system("cls");
            break; }
        case 33: {
            _71m();
            system("pause");
            system("cls");
            break; }
        case 34: {
            _72e();
            system("pause");
            system("cls");
            break; }
        case 35: {
            _72m();
            system("pause");
            system("cls");
            break; }
        case 36: {
            _73e();
            system("pause");
            system("cls");
            break; }
        case 37: {
            _73m();
            system("pause");
            system("cls");
            break; }
        case 38: {
            _81e();
            system("pause");
            system("cls");
            break; }
        case 39: {
            _81m();
            system("pause");
            system("cls");
            break; }
        case 40: {
            _111e();
            system("pause");
            system("cls");
            break; }
        case 41: {
            _111m();
            system("pause");
            system("cls");
            break; }
        case 42: {
            _112e();
            system("pause");
            system("cls");
            break; }
        case 43: {
            _112m();
            system("pause");
            system("cls");
            break; }
        case 44: {
            _113e();
            system("pause");
            system("cls");
            break; }
        case 45: {
            _113m();
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
