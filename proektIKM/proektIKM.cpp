#include <iostream>
#include <string>
#include "header.h" 

int main() {
    setlocale(LC_ALL, "RU"); 
    string a, b;
    string chastnoe, ostatok;

    // Вводим делимое и делитель
    cout << "Введите делимое (a): ";
    cin >> a;
    cout << "Введите делитель (b): ";
    cin >> b;

    // Проверяем корректность ввода
    if (!proverka(a) || !proverka(b)) {
        cerr << "Некорректный ввод: введите только цифры." << endl;
        return 1;
    }

    // Выполняем деление
    if (delenie(a, b, chastnoe, ostatok)) {
        cout << "Частное: " << chastnoe << endl;
        cout << "Остаток: " << ostatok << endl;
    }

    return 0; // Успешное завершение программы
}