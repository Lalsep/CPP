#include <iostream>

int main()
{
 
       float a,b;
       std::cout << "Podaj współczniki a= ";
       std::cin >> a;
       std::cout << "b= ";
       std::cin >> b;
       
       if (a == 0) {
           
           std::cout << "Równanie ma nieskończenie wiele rozwiązań\n";
       }else
           {
            
               std::cout << "Równanie ma jedno rozwiązanie x =" << -b/a << "\n";
               
           }
    
    
    return 0;
}
