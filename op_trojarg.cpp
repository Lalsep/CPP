#include <iostream>

int main()
{
    
    int x;
    std::cout << "Podaj liczbę całkowitą dodatnią x = ";
    std::cin >> x;
    std::cout << std::endl;
    
    x%2==0 ? std::cout << "liczba x jest parzysta": std::cout << "liczba x jest nieparzysta";
    std::cout << std::endl;
    
    return 0;
}
