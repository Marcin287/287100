
#include<iostream>

void pod_1(int n) {

	for (int i = 0; i < n; i++) {

		std::cout << i % 10;
	}
}

void pod_2(int n) {

	for (int i = 0; i < n; i++) {

		std::cout << i % 2;
	}
}

void pod_3(int n) {

	for (int i = 0; i < n; i++) {

		std::cout << i % 4;
	}
}


void pod_4(int n) {

	for (int i = 0; i < n; i++) {
		std::cout << "0123";
	}


}

void pod_5(int n) {

	while(n>1){
		for (int i = 0; i < 10; i++) {
			std::cout << i;
		}
	n = n - 1;
		



	}



}

void pod_6(int n) {
	for (int i = 0; i < n; i++) {

		if ((i % 2) == 0) {
			std::cout << "3";
		}
		else {
			std::cout << "7";
		}


	}



}

void zad_2_a(int n) {
	int temp = n;
	while (temp > 0) {
		std::cout << "" << std::endl;
		for (int i = 0; i < n; i++) {
			std::cout << (n - i);
		}
		temp = temp-1;
	}

}

void zad_2_d(int n) {
	
	
	for(int j=0;j<n;j++)
	{
		std::cout << "" << std::endl;

		for (int i = n; i > j; i--) {
			std::cout <<i;
		}


	}
}



int main()
{
	int n;
	std::cin >> n;
	//pod_1(n);
	//pod_2(n);
	//pod_3(n);
	//pod_4(n);
	//pod_5(n);
	//pod_6(n);
	//zad_2_b(n);
	zad_2_d(n);

	return 0;
}
