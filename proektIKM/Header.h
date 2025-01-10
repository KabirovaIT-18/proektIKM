#pragma once
#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <string>

using namespace std;

// функция для проверки корректности ввода числа
bool proverka(const string& number);

// функция для выполнения деления
bool delenie(const string& a, const string& b, string& chastnoe, string& ostatok);

#endif // HEADER_H
