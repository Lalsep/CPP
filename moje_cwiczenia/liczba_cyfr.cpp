#include <iostream>

int main()
{
    int x, wynik =0;
    std::cout << "podaj dowolną liczbę całkowitą \n";
    std::cin >> x;
    
    while (x != 0)
    {
        x /= 10;
        ++wynik;
        
    }
    
    std::cout << "liczba cyfr w podanej przez ciebie liczbie wynosi  " << wynik << std::endl;
    
    
    return 0;
    
}
