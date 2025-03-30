#include "kalkulator.h"
#include <iostream>
#include <vector>


    double mem=0;
    bool mem_zaj = false;

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
        mem_zaj = false;
        std::cout << "pamiec wyczyszczona";
    }
    void Kalkulator::get() {
        if (mem_zaj == true) {
            std::cout << "w pamieci jest " << mem;
        }
        else {
            std::cout << "pamiec jest wolna";
        }
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
                case 8:

Kalkulator::menu_kon();
                break;
                case 9:
                    exit(0);

                default:
                    std::cout << "nie ma takiej opcji";
            }
        }


    }

    void Kalkulator::menu_kon() {
        int n;
        int m;
        while (true) {
            std::cout << "Powrot do menu wpisz 1"<<std::endl;
            std::cout<<"Na jaki system chcesz przekonwertowac swoja liczbe"<<std::endl;
            std::cin>>n;
            if (n==1) {
                return;
            }

            if (n<2 or n>10) {
                std::cout<<"baza musi byc w zakresie 2-10"<<std::endl;
                continue;;
            }


            std::cout<<"Podaj swoja liczbe"<<std::endl;
            std::cin>>m;

            std::vector<int> wynik;

            while (m>0) {
                wynik.push_back(m%n);
                m=m/n;

            }

            std::cout<<"Wynik:";
            for (int i=wynik.size()-1; i>=0; i--) {
                std::cout<<wynik[i];
            }
            std::cout<<std::endl;


        }
    }









