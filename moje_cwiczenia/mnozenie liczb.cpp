#include <iostream>


int main ()
{
    double x,y, wynik;
//     mnozenie dwoch liczb
    std::cout << "podaj pierwsza liczbe x  =  ";
    std::cin >> x;
    std::cout << std::endl;
    std::cout << "podaj druga liczbe  y = ";
    std::cin >> y;
    std::cout << std::endl;
    wynik = x*y;
    std::cout << "wynik = " << wynik << std::endl;
    
    wynik*=2;
    
    std::cout << "wynik = " << wynik << std::endl;
    int result;
    result = 2*wynik;
    std::cout << "drugi wynik = " << result << std::endl;
    
    
    
    return 0;
}
