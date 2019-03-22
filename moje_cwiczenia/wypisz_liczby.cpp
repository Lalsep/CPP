#include <iostream>

// liczby podzielne przez 3 z zakresu do 25 do 100
bool liczba_pierwsza(int j)
{
    for (int n=2;n<=j;++n){
        
        if(j%n == 0){
            std::cout<<"0 \n";
            return 0;
            break;
        }
    }
    std::cout << "1 \n";
    return 1;
}
int main()
{
//     wypisujemy liczby pierwsze od 1 do 100
    
    int n, i = 1;
    std::cout << "podaje liczbę konca zbioru n = ";
    std::cin >> n;
    std::cout << "n = " << n << std::endl;
    if (n == 1){
        std::cout << "Liczba n = " << n << " jest zawsze liczba pierwsza \n";
        std::cout <<"zacznij od początku \n";
        return 0;
    }
    while(i<n)
    {
    if (liczba_pierwsza(i)){
        std::cout << i << "\t ";
            }
        i++;
    }
    std::cout << std::endl;
    return 0;
}
