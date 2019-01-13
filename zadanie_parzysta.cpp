#include <iostream>
bool czy_parzysta(int n){
if (n%2 == 0)
	return true;
else 
	return false;

}
int main()
{
int n;
std::cout << "podaj liczbę całkowitą n "; std::cin >> n;
std::cout << "Podana liczba n= "<< n;
if(czy_parzysta(n))
	std::cout << "  jest parzysta"<< std::endl;	
else
	std::cout << "  jest nieparzysta"<< std::endl;
return 0;
}


