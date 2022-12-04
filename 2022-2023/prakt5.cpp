//shaydulin

#include <stdio.h>
#include <iostream>
#include <cstring>
#include <cstdio>
#include <iomanip>

using namespace std;

void _list(int n) {
	cout << endl << "! ! ! ENTERING ANOTHER SYMBOLS CAUSES ERRORS AND CRASHING ! ! !" << endl << endl;
	cout << "Enter the task:  " << endl << endl;
	cout << "1) List of books by the author" << endl;
	cout << "2) List of books by the author" << endl;
	cout << "3) List of books by the author" << endl;
	cout << "0) Logout" << endl << endl << setw(5);

	for (unsigned short i = 1; i <= 3; i++) {
		cout << i << setw(5);
	}
	cout << endl << endl << "Enter here:    ";
}

class Book {
	char Author[37], Title[37], Publisher[37];
	unsigned short Year, P_Num;

public: 

	Book(const char* one, const char* two, const char* three, unsigned short y, unsigned short p) {
		strcpy_s(Author, one);
		strcpy_s(Title, two);
		strcpy_s(Publisher, three);
		Year = y;
		P_Num = p;
	}

	//Функции здания значений в переменные класса: 
	void set_Author() { cin >> Author; }
	void set_Title() { cin >> Title; }
	void set_Publisher() { cin >> Publisher; }
	void set_Year() { cin >> Year; }
	void set_P_Num() { cin >> P_Num; }

	//Функции получения значений переменных класса:
	char* get_Author() { return Author; }
	char* get_Title() { return Title; }
	char* get_Publisher() { return Publisher; }
	unsigned short get_Year() { return Year; }
	unsigned short get_P_Num() { return P_Num; }

	//Функция вывода всех значений переменных: 
	void show() {
		wcout << setw(5) << Author << setw(5) << " | " << setw(5) << Title << setw(5) << " | " << setw(5) << P_Num << setw(5) << " | " << setw(5) << Publisher << setw(5) << " | " << setw(5) << Year << endl;
	};
};

//Функция сортировки по автору
void sort_author(const char* name, Book* volume) {
	for (unsigned short i = 0; i < 6; i++) {
		if (!strcmp((volume[i].get_Author()), name))
			volume[i].show();
	}
	cout << endl;
}

//Функция сортировки по издателю
void sort_publisher(const char* name, Book* volume) {
	for (unsigned short i = 0; i < 6; i++) {
		if (!strcmp(volume[i].get_Publisher(), name)) {
			volume[i].show();
		}
	}
	cout << endl;
}

//Функция сортировки по году
void sort_year(int year, Book* volume) {
	for (unsigned short i = 0; i < 6; i++) {
		if (volume[i].get_Year() >= year) volume[i].show();
	}
	cout << endl;
}

int main()
{

	Book volume[] = {
			Book("Fyodor Dostoevsky","The Brothers Karamazov","Russian Messenger",1880,840),
			Book("Leo Tolstoy","War and Peace","The Russian Messenger",1867,1392),
			Book("Pushkin","Eugene Onegin","Moscow",1833,224),
			Book("Gorkiy","Through Russia","SPB",1921 ,208),
			Book("Gorkiy","The Man Who Was Afraid","Moscow",1899,241),
			Book("Gorkiy","Mother","SPB",1906,324)
	};
	wcout << setw(5) << "Author: " << setw(5) << " | " << setw(5) << " Titile: " << setw(5) << " | " << setw(5) << " Number of pages: " << setw(5) << " | " << setw(5) << "Publisher: " << setw(5) << " | " << setw(5) << " Year: " << endl;
	for (unsigned int i = 0; i < 6; i++) {
		volume[i].show();
	}
	unsigned int num = 0;
	char check[100] = {};
	unsigned short n = 1;
	while ((n != 0) && (n <= 3) && (n >= 0)) {
		_list(n);
		cin >> n;
		switch (n) {
		case 0: {
			cout << "Thanks for checking!" << endl << endl << endl;
			break; }
		case 1: {
			cout << "Enter the Author" << endl;
			cin >> check;
			wcout << setw(5) << "Author: " << setw(5) << " | " << setw(5) << " Titile: " << setw(5) << " | " << setw(5) << " Number of pages: " << setw(5) << " | " << setw(5) << "Publisher: " << setw(5) << " | " << setw(5) << " Year: " << endl;
			sort_author(check, volume);
			system("pause");
			system("cls");
			break; }
		case 2: {
			cout << "Enter the Publisher" << endl;
			cin >> check;
			wcout << setw(5) << "Author: " << setw(5) << " | " << setw(5) << " Titile: " << setw(5) << " | " << setw(5) << " Number of pages: " << setw(5) << " | " << setw(5) << "Publisher: " << setw(5) << " | " << setw(5) << " Year: " << endl;
			sort_publisher(check, volume);
			system("pause");
			system("cls");
			break; }
		case 3: {
			cout << "Enter the Year" << endl;
			cin >> num;
			wcout << setw(5) << "Author: " << setw(5) << " | " << setw(5) << " Titile: " << setw(5) << " | " << setw(5) << " Number of pages: " << setw(5) << " | " << setw(5) << "Publisher: " << setw(5) << " | " << setw(5) << " Year: " << endl;
			sort_year(num, volume);
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
