#include <iostream>

int function(int x)
{
    for (int i=1; i<x ;++i)
    {
        if (x%i == 0)
            std::cout << "liczba x jest podzielna przez " << i << std::endl;
    }
        return 0;
}

int main()
{
    
    int x;
    std::cout << "podaj liczbę x = ";
    std::cin >> x;
    std::cout << std::endl;
    function(x);
    
    
    return 0;
}
