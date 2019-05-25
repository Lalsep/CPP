#include <iostream>
#include <string>

int main()
{
	int wiek;
    std::string imie;
    std::cout << "to jest pierwszy program";
    std::cout << std::endl;
    std::cout << "Podaj swoje imię" << std::endl;
    std::cin >> imie;
    std::cout << "Witaj " << imie << "!!!" <<std::endl;
    std::cout << "Ile masz lat?  " << std::endl;
    std::cin >> wiek;
    if (wiek > 18){

    	std::cout << "Jesteś już dorosły, " << imie << "!!" << std::endl;
    }
    else {
    	std::cout << "Oj, jeszcze jesteś dzieckiem,  " << imie << "!!" << std::endl;

    }

    
    
    
    return 0;
}
