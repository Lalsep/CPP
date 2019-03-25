#include <iostream>
int main()
{
double spalanie, przejechanekm, przejechaneLitr, spalaniena100;
std::cout << "Ile przejechano kilometrow?=";
std::cin >> przejechanekm;
std::cout <<"Ile samochod spalil podczas tej trasy? =";
std::cin >> spalanie;
przejechaneLitr = przejechanekm/spalanie;
std::cout << "Samochod na jeden lit paliwa przejechajechal" << przejechaneLitr<<"km ";
spalaniena100=spalanie/przejechanekm*100;
std::cout << "Na 100 kilometrow samochod spalil" << spalaniena100<<"1 paliwa";
}
