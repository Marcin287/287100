//
// Created by diame on 26.03.2025.
//
#ifndef KALKULATOR_H
#define KALKULATOR_H
#include <iostream>
#include <vector>

class Kalkulator {
public:
    void menu();
    void menu_kon();

private:
    double mem = 0;
    bool mem_zaj = false;
    void wycz();
    void get();
public:
    double dodawanie(double a, double b);
    double odejmowanie(double a, double b);
    double mnoz(double a, double b);
    double dziel(double a, double b);
    double mod(double a, double b);


};

#endif // KALKULATOR_H