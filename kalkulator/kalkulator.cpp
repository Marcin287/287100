#include "kalkulator.h"
#include <iostream>
#include <vector>


    double mem=0;
bool mem_zaj;

    double Kalkulator::dodawanie(double a, double b) {
        return (a + b);
    }
    double Kalkulator::odejmowanie(double a, double b) {
        return (a - b);
    }
    double Kalkulator::mnoz(double a, double b) {
        return (a * b);
    }
    double Kalkulator::dziel(double a, double b) {
        return (a / b);
    }
    double Kalkulator::mod(double a, double b) {
        return (a - (int)(a / b) * b);
    }
    void Kalkulator::wycz() {

        std::cout << "pamiec wyczyszczona";
    }
    double Kalkulator::get() {

            return mem;

    }

    void Kalkulator::set(double a){
        mem=a;
    }







    void Kalkulator::menu() {
        double a, b;
        int n;
        while (true) {
            std::cout << std::endl << "1.dodawanie" << std::endl << "2.odejmowanie" << std::endl << "3.mnozenie" << std::endl << "4.dzielenie" << std::endl << "5.modulo" << std::endl << "6.wyczysc pamiec" << std::endl << "7.sprawdz pamiec" << std::endl<<"8.konwersja"<<std::endl<<"9.wyjdz"<<std::endl;

            std::cin >> n;


            if (mem_zaj == false and n <6) {
                std::cout << std::endl << "wpisz 2 liczby" << std::endl;
                std::cin >> a >> b;
            }
            else if (mem_zaj == true and n <6) {
                a = mem;
                std::cout << std::endl << "wpisz jedna liczbe" << std::endl;
                std::cin >> b;
            }

            switch (n) {

                case 1:
                    std::cout << a << "+" << b << "=" << Kalkulator::dodawanie(a, b);
                mem = Kalkulator::dodawanie(a, b);
                mem_zaj = true;
                break;
                case 2:


                    std::cout << a << "-" << b << "=" << Kalkulator::odejmowanie(a, b);
                mem = Kalkulator::odejmowanie(a, b);
                mem_zaj = true;
                break;
                case 3:

                    std::cout << a << "*" << b << "=" << mnoz(a, b);
                mem = mnoz(a, b);
                mem_zaj = true;
                break;
                case 4:

                    while (b == 0) {
                        std::cout << "nie mozna dzielic przez zero, wpisz inna liczbe";
                        std::cin >> b;
                    }
                std::cout << a << "/" << b << "=" << Kalkulator::dziel(a, b);
                mem = Kalkulator::dziel(a, b);
                mem_zaj = true;
                break;
                case 5:

                    while (b == 0) {
                        std::cout << "nie mozna modulo przez zero, wpisz inna liczbe";
                        std::cin >> b;
                    }
                std::cout << a << "%" << b << "=" << mod(a, b);
                mem = Kalkulator::mod(a, b);
                mem_zaj = true;
                break;
                case 6:

                    Kalkulator::wycz();
                break;
                case 7:
                    std::cout << std::endl;
                Kalkulator::get();
                break;

                break;
                case 9:
                    exit(0);

                default:
                    std::cout << "nie ma takiej opcji";
            }
        }


    }

    int Kalkulator::na_dzies(const std::string& number, int z_baza) {
        int result = 0;
        int pot = 1;

        for (int i = number.size() - 1; i >= 0; i--) {
            int digit = number[i] - '0';
            result += digit * pot;
            pot *= z_baza;
        }

        return result;
    }

    std::string Kalkulator::z_dzies(int dzies, int do_baza) {
        if (dzies == 0) return "0";

        std::string result;
        while (dzies > 0) {
            result = std::to_string(dzies % do_baza) + result;
            dzies /= do_baza;
        }

        return result;
    }



    std::string Kalkulator::menu_kon(const std::string& liczba_wej, int z_baza, int do_baza) {


            int number = na_dzies(liczba_wej, z_baza);
            return z_dzies(number, do_baza);


    }
















