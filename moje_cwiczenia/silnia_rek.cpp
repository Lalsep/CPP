#include <iostream>

int silnia(int n)
{
    if(n==1 || n==0)
        return 1;
    return n*silnia(n-1);
}

int main()
{
    
    int n;
    std::cout << "podaj liczbę całkowitą dodatnią n=";
    std::cin >> n;
    std::cout <<std::endl;
    std::cout << "silnia liczby n! =" << silnia(n)<< std::endl;
    
    
    return 0;
}
