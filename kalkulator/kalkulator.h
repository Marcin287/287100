//
// Created by diame on 26.03.2025.
//
#ifndef KALKULATOR_H
#define KALKULATOR_H
#include <iostream>

class Kalkulator {
public:
    void menu();

    std::string menu_kon(const std::string& inputNumber, int fromBase, int toBase);
    int na_dzies(const std::string& number, int baza);
    std::string z_dzies(int dzies, int do_baza);

    void wycz();
    double get();
    void set(double a);
private:
    double mem = 0;


public:
    double dodawanie(double a, double b);
    double odejmowanie(double a, double b);
    double mnoz(double a, double b);
    double dziel(double a, double b);
    double mod(double a, double b);


};

#endif // KALKULATOR_H
