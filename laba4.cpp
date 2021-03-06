//Ш. С. В. - ОАиП, 1 курс, Лаба1.cpp - вариант 10

#include <iostream>
#include <cmath>
#include <Windows.h>
#include <ctime>
#include <thread>
#include <chrono>
#include <limits>
#include <iomanip>
#include <string>

using namespace std;
HANDLE out;
COORD pos;

void _1st() {
    int m = 0, symb = 0, spaces = 0;
    cout << "How may symbols (m) you want to enter" << endl;
    cin >> m;
    char* arr_a = new char[m];
    cout << "Great! Now enter your symbols" << endl;
    for (int i = 0; i < m; i++) {
        scanf_s("%1c", &arr_a[i], strlen(arr_a));
    }
    cout << endl << "Here is your array of chars" << endl;
    for (int j = 0; j < m; j++) {
        cout << arr_a[j];
    }

    for (int j = 0; j < m; j++) {
        if (arr_a[j] == 32) {
            spaces++;
        }
        else if (arr_a[j] == '!') {
            break;
        }
        symb++;
    }
    cout << endl << "There are " << (symb-1) << " symbols and " << spaces << " spaces before (!)";

    cout << endl << endl;
}

void draw_tree(int h) {
	int color = rand() % 15 + 1;
	for (int i = 0; i <= h; i++) {
		SetConsoleTextAttribute(out, 0);
		for (int j = 0; j < h - i; j++) {
			cout << " ";
		}
		if (i % 3 == 0) {
			for (int j = i * 2 - 1; j > 0; j--) {
				if (j % 2 == 0) {
					SetConsoleTextAttribute(out, color * 16);
				}
				else {
					SetConsoleTextAttribute(out, 160);
				}
				cout << " ";
			}
		}
		else {
			SetConsoleTextAttribute(out, 160);
			for (int j = i * 2 - 1; j > 0; j--) {
				cout << " ";
			}
		}
		cout << endl;
	}
}

void en_draw_text() {
	int color = rand() % 15 + 1;
	SetConsoleTextAttribute(out, color);
	cout << "Hapy New Year!";
}

void ru_draw_text() {
	int color = rand() % 15 + 1;
	SetConsoleTextAttribute(out, color);
	cout << "С Новым Годом!";
}

int main() {
    cout << "(*^0^*)  exercise No_1" << endl;
    _1st();
    system("pause");
    system("cls");

    cout << "I didn't do the rest because I didn't know enough, but I had a Christmas Tree, so there it is..." << endl;
    system("pause");
    system("cls");
	cout << "Enter whatever number you want, preferably <25" << endl;

	out = GetStdHandle(STD_OUTPUT_HANDLE);
	srand(time(0));
	int h;
	cin >> h;

	system("CLS");
	setlocale(LC_ALL, "Russian");
	while (true) {
		pos.X = 0; pos.Y = 0;
		SetConsoleCursorPosition(out, pos);
		draw_tree(h);
		cout << endl;
		pos.X = (h - 8); pos.Y = h + 2;
		SetConsoleCursorPosition(out, pos);
		en_draw_text();
		pos.X = (h - 8); pos.Y = h + 4;
		SetConsoleCursorPosition(out, pos);
		ru_draw_text();

		this_thread::sleep_for(chrono::milliseconds(500));
	}

}
