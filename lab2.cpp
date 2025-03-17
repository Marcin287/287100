
#include <iostream>
double mem;
bool mem_zaj = false;



double dodawanie(double a, double b) {
	return (a + b);	
}
double odejmowanie(double a, double b) {
	return (a - b);
}
double mnoz(double a, double b) {
	return (a * b);
}
double dziel(double a, double b) {
	return (a / b);
}
double mod(double a, double b) {
	return (a-(int)(a/b)*b);
}
void wycz() {
	mem_zaj = false;
	std::cout << "pamiec wyczyszczona";
}




void menu() {
	double a, b;
	if (mem_zaj == false) {
		std::cout << "wpisz 2 liczby";
		std::cin >> a >> b;
	}
	else {
		a = mem;
		std::cout << "wpisz jedna liczbe";
		std::cin >> b;
	}
	std::cout << std::endl;
	std::cout << "1.dodawanie" << std::endl << "2.odejmowanie" << std::endl << "3.mnozenie" << std::endl << "4.dzielenie" << std::endl << "5.modulo"<<std::endl<<"6.wyczysc pamiec";
	int n;
	std::cin >> n;
	

	switch (n) {

	case 1:
		std::cout<<a<<"+"<<b<<"="<<dodawanie(a, b);
		mem= dodawanie(a, b);
		break;
	case 2:
	
	
		std::cout << a << "-" << b << "=" << odejmowanie(a, b);
		mem= odejmowanie(a, b);
		break;
	case 3:
		
		std::cout << a << "*" << b << "=" << mnoz(a, b);
		mem = mnoz(a, b);
		break;
	case 4:
		
		while(b == 0) {
			std::cout << "nie mozna dzielic przez zero, wpisz inna liczbe";
			std::cin >> b;}
		std::cout << a << "/" << b << "=" << dziel(a, b);
		mem = dziel(a, b);;
		break;
	case 5:
		
		while (b == 0) {
			std::cout << "nie mozna modulo przez zero, wpisz inna liczbe";
			std::cin >> b;
		}
		std::cout << a << "%" << b << "=" << mod(a, b);
		mem=mod(a, b);
		break;
	case 6:
		wycz();
		break;
	default:
		std::cout << "nie ma takiej opcji";
		
	

	}

}







int main()
{

		menu();

		return 0;
}
  