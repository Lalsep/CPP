#include <iostream>

bool liczba_piewsza(int x)
{
    if (x == 1)
        return true;
    for (int i = 2; i < x ; ++i)
    {
        if (x%i == 0)
            return false;
        
    }
    return true;
    
}

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
