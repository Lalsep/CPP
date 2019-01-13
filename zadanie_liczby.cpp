#include <iostream>

int main()
{
 
       float a,b;
       std::cout << "Podaj współczniki a= ";
       std::cin >> a;
       std::cout << "b= ";
       std::cin >> b;
       
       float wynik = a < b? a + b : a - b;
       std::cout << "wynik = " << wynik << "\n";
    
    
    return 0;
}
