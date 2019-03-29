#include <iostream>
float kilometry, benzyna;
int main (){
	std::cout << "Ile kilometrow przejechal samochod?" << std::endl;
	std::cin >> kilometry; std::cout << "ile litrow benzyny spalil"<<std::endl;
	std::cin >> benzyna;
	float wynik = kilometry/benzyna;
	std::cout << "twoj samochod przejechal" << wynik << "kilometor na litr paliwa" << std::endl;
	float spalanie= benzyna/kilometry*100;
	std::cout << "twoj samochod spalil" << spalanie << "litrow benzyny na sto km" << std::endl;
	return 0;

}
