#include <iostream>

int roczna(float m)
{
    
    return m*12;
    
}

int main()
{
// liczymy roczną pensję
//     wywołujemy funkcję roczna
    
    float m, wynik;
    std::cout << "podaj swoją miesięczną pensję w pln  ";
    
    std::cin >> m;
    if (m > 100000)
    {
        std::cout << "twoja pensja wydaje mi się za duza"<< std::endl;
        return 1;
    }else if (m < 0)
    {
        
        std::cout << "pensja nie może być liczbą ujemna"<< std::endl;
        return 2;
    }
    

    wynik = roczna(m);
    std::cout << "twoja rocza pensja wynosi  "<< wynik << std::endl;
    
return 0;
}
