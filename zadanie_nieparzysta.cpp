#include <iostream>

bool nieparzysta(int n)
{

	if (n == 1 || n%2 != 0)
		return true;
	else
		return false;


}

int main()
{
	int n;
	std::cout << "podaj liczbę całkowitą n= ";
	std::cin >> n;
	if (nieparzysta(n))
		std::cout << "podana liczba n jest nieparzysta" << std::endl;
	else
		std::cout << "podana liczba n jest parzysta" << std::endl;



return 0;
}
