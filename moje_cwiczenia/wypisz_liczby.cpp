#include <iostream>

// liczby podzielne przez 3 z zakresu do 25 do 100

int main()
{
//     wypisujemy liczby pierwsze od 1 do 100
    
    int n, i = 1;
    std::cout << "podaje liczbę konca zbioru" << std::endl;
    std::cin >> n;
    
        while(i<n)
        {
          if (liczba_piewsza(i))
              std::cout << i << "\t ";
            i+=1;
        }
    
    std::cout << std::endl;
    return 0;
}
