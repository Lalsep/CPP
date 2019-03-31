#include <iostream>
// #include <conio.h>
// using std::string;
int main()
{
   float a,b,x;
   std::cout << "podaj wartosc a= ";
   std::cin >>a;
   std::cout << "podaj waratość b= ";
   std::cin >>b;
   if (a==0 && 0==b) std::cout << "brak rozwiazan \n";
   else if (a==0 && 0!=b) std::cout << "nieskonczenie wiele rozwiazan \n";
   else
       x=b/a;
   std::cout << "liczba x rowna sie = " << x << std::endl;
   
    return 0;
    
}
