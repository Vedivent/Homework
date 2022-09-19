//По сути, задача сделана наполовину: просит ввести матрицу, выводит готовую, выводит инвертированную.
/* для себя.
Сначала определение функций (для быстродействия программы)
Определение базовых функций
мейн 
{
ф-я Приветствие
Определение массива (размер)
ф-я Выбор варианта заполнения
ф-я Выбор рандома/своих чисел
ф-я заполнения
ф-я вывода матрицы
ф-я инвертирования
ф-я вывода матрицы
ф-я умножения (придётся запоминать вторую матрицу)
ф-я вывода матрицы
}
*/

#include<iostream>
#include<stdlib.h>
#include<time.h>
#include <random>
#include <iomanip>

using namespace std;

void _listBasic();//Функция вывода приветствия
//void _listVariant(int v);//Функция выбора варианта заполнения матрицы (пока один)
//void _switch(int s);//Функция выбора варианта заполнения матрицы
void inversionMatrix(double**, int);//функция инвертирования матрицы
void printMatrix(double**, int);//Вывод матрицы
void deleteMatrix(double**, int);//очистка памяти, удаление матрицы
double** createMatrix(int);//Функция создания матрицы
void _decision(unsigned int N, double decision, double** matrix);//выбор заполнения матрицы

int main()
{
    srand((unsigned)time(NULL));
    _listBasic();
    unsigned int N; 
    cout << "Enter the large of array(4 - 16)  ";
    cin >> N;
    if (N >= 4 && N <= 16) { //Это всё можно поместить в функцию, но я пока ещё не понял как. Можно реализовать на этом этапе выбор порядка заполнения матрицы по вариантам, но, опять же, знаний не хватает.
        double** matrix = createMatrix(N);
        bool decision = 0;
        cout << "Great! Now enter the array of numbers (0) or make it random (1) :" << endl;
        cin >> decision;
        _decision(N, decision, matrix);
        cout << endl << endl;
        system("pause");
        cout << "      Your Matrix " << endl << endl;
        printMatrix(matrix, N);//Выводит заданную матрицу (своя или рандомная). Причём выводит её по порядку, т.е. не удовлетворяет условиям варианта. Для изменения условия придётся ЛИБО ссылаться на свитч, чтобы по запросу пользователя исполнять необходимый алгоритм, либо просто комментировать изначальный вариант, что не есть хорошо.
        inversionMatrix(matrix, N);//Инвертирует-перезаписывает матрицу
        cout << endl << endl;
        system("pause");
        cout << endl << endl;
        cout << "      Inverted Matrix " << endl << endl;
        printMatrix(matrix, N);//Печатает перезаписанную старую матрицу. На этом этапе надо реализовать умножение матриц. Как это сделать без перегруза памяти - пока не ясно.
        deleteMatrix(matrix, N);//Очистка памяти
        return 0;
    }
    else {
        cout << "wrong number!" << endl;
    }
}

void _listBasic() { //вывод первоначальных сообщений
    cout << "Shaidulin S. V." << endl;
    cout << "V A R I A N T      28 (8).    To exit enter 0." << endl << endl;
    cout << "! ! ! ENTERING ANOTHER SYMBOLS CAUSES ERRORS AND CRASHING ! ! !" << endl << endl;
}

/*void _listVariant(int n) {//реализация выбора вариантов. Сделать её до выполнения всей задачи в качестве приёма переменной??
    cout << "Enter the number of variant (1-20, but now only 1):    " << endl << endl << setw(5);

    for (unsigned short i = 1; i <= 20; i++) {
        cout << i << setw(5);
    }
    cout << endl << endl << "Enter here:    ";
}*/

double** createMatrix(int n) {//создание матрицы
    double** matrix = new double* [n];
    for (int i = 0; i < n; i++)
        matrix[i] = new double[n];
    return matrix;
}

void _decision(unsigned int N, double decision, double** matrix) {
    if (decision == 0) {//Возникает проблема при заполнении массива собственноручно: ИНТ не воспринимается как ДАБЛ, что ведёт к некорректным значениям.
        for (unsigned short i = 0; i < N; i++) {
            for (unsigned short j = 0; j < N; j++) {
                cout << "Enter the " << i << " " << j << " position : " << endl;
                cin >> matrix[i][j];
            }
        }
    }
    else {
        default_random_engine randEng(time(NULL));
        uniform_real_distribution<double> randNumb(-100, 100);
        for (unsigned short i = 0; i < N; i++) {
            for (unsigned short j = 0; j < N; j++) {
                matrix[i][j] = randNumb(randEng);
            }
        }
    }
}

/*void _switch(unsigned int S) { //здесь реализовать функцию выбора варианта заполнения, но, опять же, знаний не хватает.

}*/

void inversionMatrix(double** A, int N) {//инвертирование матрицы
    double temp;
    double** B = createMatrix(N);
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++) {
            B[i][j] = 0.0;
            if (i == j)
                B[i][j] = 1.0;
        }
    for (int k = 0; k < N; k++) {
        temp = A[k][k];
        for (int j = 0; j < N; j++) {
            A[k][j] /= temp;
            B[k][j] /= temp;
        }
        for (int i = k + 1; i < N; i++) {
            temp = A[i][k];
            for (int j = 0; j < N; j++) {
                A[i][j] -= A[k][j] * temp;
                B[i][j] -= B[k][j] * temp;
            }
        }
    }
    for (int k = N - 1; k > 0; k--) {
        for (int i = k - 1; i >= 0; i--) {
            temp = A[i][k];
            for (int j = 0; j < N; j++) {
                A[i][j] -= A[k][j] * temp;
                B[i][j] -= B[k][j] * temp;
            }
        }
    }
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            A[i][j] = B[i][j];
    deleteMatrix(B, N);
}

void printMatrix(double** matrix, int n) {//вывод матрицы
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << setw(8) << setprecision(3) << matrix[i][j];
        cout << "\n";
    }
}

void deleteMatrix(double** matrix, int n) {//зачистка матрицы
    for (int i = 0; i < n; i++)
        delete[] matrix[i];
    delete[] matrix;
}

