#include "header.h"

int main()
{
    //размер матрицы
    const int MATRIX_SIZE = 2;

    //объявление массива коэффициентов
    float matrix[MATRIX_SIZE][MATRIX_SIZE];

    //объявление массива свободных членов
    float constant_terms[MATRIX_SIZE];

    //ввод значений в массив коэффициентов
    for (int i = 0; i < MATRIX_SIZE; i++) {
        for (int j = 0; j < MATRIX_SIZE; j++) {
            cout << "Введите значение " << i + 1 << j + 1 << " элемента матрицы ";
            cin >> matrix[i][j];
        }
    }

    cout << "Введите значения свободных членов \n";

    for (int i = 0; i < MATRIX_SIZE; i++) {
        cout << "Введите значение " << i + 1 <<" свободного члена ";
        cin >> constant_terms[i];
    }

    cout << "Вы ввели матрицу \n";

    for (int i = 0; i < MATRIX_SIZE; i++) {
        for (int j = 0; j < MATRIX_SIZE; j++) { // +1 означает ещё и столбец свободных членов
            cout << matrix[i][j] << ' ';
        }
        cout << ' ' << constant_terms[i];
        cout << '\n';
    }



    det_1(matrix[0][0], matrix[0][1], matrix[1][0], matrix[1][1]);

    return 0;
}
