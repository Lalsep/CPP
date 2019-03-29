#include <iostream>
float kilometr, benzyna;
int main()
{
	std::cout << "ile kilometrow przejechalo twoje auto?" << std::endl;
	std::cin >> kilometr;
	std::cout << "ile litrow benzyny spalil" << std::endl;
	std::cin >> benzyna;
	float wynik = kilometr/benzyna;
	std::cout << "twoj samochod przejechal " << wynik <<" kilometrow na jeden litr paliwa"<< std::endl;
	float spalanie = benzyna/kilometr*100;
	std::cout << "twoj samochod pali" << spalanie << "litrow benzyny na 100" << std::endl;
	return 0;
}
