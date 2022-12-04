//shaydulin.
#include <stdio.h>
#include <iostream>
#include <cstring>
#include <cstdio>
#include <iomanip>
#include <conio.h>>

using namespace std;

void _list(int n) {
	cout << "Enter the task:  " << endl << endl;
	cout << "1) Find the perimeter " << endl;
	cout << "2) Find the perimeter square " << endl;
	cout << "3) Is it a square? " << endl;
	cout << "0) Logout" << endl << endl << setw(5);

	for (unsigned short i = 1; i <= 3; i++) {
		cout << i << setw(5);
	}
	cout << endl << endl << "Enter here:    ";
}
//I I have simplified this task

class Rectangle {
private:
    float height, width;
public:
    void set(float _height, float _width)
    {
        height = _height;
        width = _width;
    }
    void get() { cout << "Height: " << height << "\nWidth: " << width << endl; }
    void Perimeter() { cout << "Perimeter: " << (height + width) * 2 << endl; }
    void Square() { cout << "Square: " << height * width << endl; }
};

int main()
{
    Rectangle ob;
	unsigned short n = 1;
	while ((n != 0) && (n <= 3) && (n >= 0)) {
		double a = 0, b = 0;
		cout << "Enter the double parameters of Rectangle (from 0.0 to 20.0)" << endl;
		cin >> a >> b;
		ob.set(a, b);
		_list(n);
		cin >> n;
		switch (n) {
		case 0: {
			cout << "Thanks for checking!" << endl << endl << endl;
			break; }
		case 1: {
			cout << "The perimeter is : " << endl;
			ob.Perimeter();
			system("pause");
			system("cls");
			break; }
		case 2: {
			cout << "The square is : " << endl;
			ob.Square();
			system("pause");
			system("cls");
			break; }
		case 3: {
			cout << "Is this a square? " << endl;
			cout << "Sry, it doesn't work right now" << endl;
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
