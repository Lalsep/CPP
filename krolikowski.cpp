#include <iostream>
int main(){
	using namespace std;
	int a;
	std::cout << "podaj liczbe calkowita dodatnia a= ";
	std::cin >> a;
	std::cout << "liczba a= " << a << ", ktora jest liczba   ";
	a%2==0 ? cout << "parzysta": cout<< "nieparzysta";
	cout << endl;
return 0;
}
