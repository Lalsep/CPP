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
    wynik = x*y;
    std::cout << std::endl;
    std::cout << "wynik = " << wynik << std::endl;
    std::cout << std::endl;
    wynik*=2;
    std::cout << "podwojny wynik = " << wynik << std::endl;
    int result;
    result = 2*wynik;
    std::cout << std::endl;
    std::cout << "poczworny wynik = " << result << std::endl;
    std::cout << std::endl;
    
    return 0;
}
