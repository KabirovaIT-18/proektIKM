#include <iostream>
#include <string> 
#include "header.h"

using namespace std; 

// Функция проверки корректности ввода числа
bool proverka(const string& number) {
    for (char c : number) {
        if (!isdigit(c))
            return false; // Некорректный ввод
    }
    return true; // Ввод корректен
}

// Функция для выполнения деления
bool delenie(const string& a, const string& b, string& chastnoe, string& ostatok) {
    // Проверка деления на ноль
    if (b == "0") {
        cout << "Ошибка: Деление на ноль." << endl;
        return false;
    }

    // Инициализация остатка
    ostatok = "";

    // Перебираем каждую цифру делимого
    for (size_t i = 0; i < a.length(); ++i) {
        // Обновляем остаток
        ostatok += a[i];

        // Удаляем ведущие нули из остатка
        while (ostatok.length() > 1 && ostatok[0] == '0') {
            ostatok.erase(0, 1);
        }

        // Находим, сколько раз делитель помещается в остаток
        int count = 0;
        while (stoll(ostatok) >= stoll(b)) {
            ostatok = to_string(stoll(ostatok) - stoll(b));
            count++;
        }

        // Добавляем результат в частное
        chastnoe += to_string(count);
    }

    // Удаляем ведущие нули из частного
    while (chastnoe.length() > 1 && chastnoe[0] == '0') {
        chastnoe.erase(0, 1);
    }

    // Если частное пустое, делимая меньше делителя
    if (chastnoe.empty()) {
        chastnoe = "0";
    }
    return true; // Возвращаем true в случае успешного завершения
}