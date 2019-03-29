//zadanie 16
#include <iostream>
int main(){
//#float liczbaKilometrow, iloscBenzyny;
//#std::cout << "#Program kilometry # \n";
//#std::cout <<"Podaj liczbe przejechanych kilometrow \n";
//#std::cin >> liczbaKilometrow;
//#std::cout << "\nPodaj ilosc benzyny \n";
//#std::cin >> iloscBenzyny;
//#std::cout << "\nLiczba przejechanych kilometrow na jednym litrze paliwa: \n";
//#std::cout << liczbaKilometrow/iloscBenzyny;
//#std::cout << "\nZuzycie benzyny w litrach na 100 km: \n";
//#std::cout << (100*iloscBenzyny)/liczbaKilometrow;
//#return 0;
//#zadanie 17
float a,b;
std::cout << "rownanie liniowe ax =b "<<std::endl;
std::cout <<std::endl <<"podaj a " << std::endl;
std::cin >> a;
std::cout << std::endl << "podaj b" << std::endl;
std::cin >>b;
std::cout << std::endl;

if(a == 0){
	if(b !=0) {
		std::cout << "rownanie sprzeczne";
	}else{
	std::cout << "nieskonczonosc";

}}
else {
	std::cout << "x = " << b/a;

}
return 0;
}
