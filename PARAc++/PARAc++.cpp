#include <Windows.h>
#include <iostream>

const int ROWS = 3;
const int COLS = 5;

int main() {

    SetConsoleCP(1251);
	setlocale(0, "");
    double matrix[ROWS][COLS];

    // Ввод элементов матрицы
    std::cout << "Введите элементы матрицы:\n";
    for (int i = 0; i < ROWS; i++) {
        std::cout << "Строка " << i + 1 << ":\n";
        for (int j = 0; j < COLS; j++) {
            std::cout << "Элемент " << j + 1 << ": ";
            std::cin >> matrix[i][j];
        }
    }
    // Вычисление среднего арифметического для каждой строки
    double averages[ROWS];
    for (int i = 0; i < ROWS; i++) {
        double sum = 0.0;
        for (int j = 0; j < COLS; j++) {
            sum += matrix[i][j];
        }
        averages[i] = sum / COLS;
    }

    // Вывод среднего арифметического для каждой строки
    std::cout << "Среднее арифметическое для каждой строки:\n";
    for (int i = 0; i < ROWS; i++) {
        std::cout << "Строка " << i + 1 << ": " << averages[i] << "\n";
    }
    return 0;
}





