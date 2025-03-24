
#include <iostream>



class kalkulator {
private:
    double mem=0;
    bool mem_zaj = false;


private:
    double dodawanie(double a, double b) {
        return (a + b);
    };
    double odejmowanie(double a, double b) {
        return (a - b);
    };
    double mnoz(double a, double b) {
        return (a * b);
    };
    double dziel(double a, double b) {
        return (a / b);
    };
    double mod(double a, double b) {
        return (a - (int)(a / b) * b);
    };
    void wycz() {
        mem_zaj = false;
        std::cout << "pamiec wyczyszczona";
    };
    void get() {
        if (mem_zaj == true) {
            std::cout << "w pamieci jest " << mem;
        }
        else {
            std::cout << "pamiec jest wolna";
        }

    };


public:

   

    int menu() {
        double a, b;
        int n;
        while (true) {
            std::cout << std::endl << "1.dodawanie" << std::endl << "2.odejmowanie" << std::endl << "3.mnozenie" << std::endl << "4.dzielenie" << std::endl << "5.modulo" << std::endl << "6.wyczysc pamiec" << std::endl << "7.sprawdz pamiec" << std::endl<<"8.konwersja"<<std::endl<<"9.wyjdz";

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
                std::cout << a << "+" << b << "=" << dodawanie(a, b);
                mem = dodawanie(a, b);
                mem_zaj = true;
                break;
            case 2:


                std::cout << a << "-" << b << "=" << odejmowanie(a, b);
                mem = odejmowanie(a, b);
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
                std::cout << a << "/" << b << "=" << dziel(a, b);
                mem = dziel(a, b);
                mem_zaj = true;
                break;
            case 5:

                while (b == 0) {
                    std::cout << "nie mozna modulo przez zero, wpisz inna liczbe";
                    std::cin >> b;
                }
                std::cout << a << "%" << b << "=" << mod(a, b);
                mem = mod(a, b);
                mem_zaj = true;
                break;
            case 6:
                
                wycz();
                break;
            case 7:
                std::cout << std::endl;
                get();
                break;
            case 8:



                break;
            case 9:
                exit(0);
              
            default:
                std::cout << "nie ma takiej opcji";
            }
        }
            return 1;
        
    };

    int menu_kon() {






    }










};












int main()
{

    kalkulator k;
        k.menu();

        
    
}
