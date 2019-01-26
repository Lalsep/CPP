#include <iostream>
#include <math.h>

int main ()

{
    float x1, x2, a, b, c;
    std::cout << "podaj wspolczynniki rownania kwadratowego ax^2 +bx + c = 0" << std::endl;
    std::cout << "a =";
    std::cin >> a;
    std::cout << "b =";
    std::cin >> b;
    std::cout << "c= ";
    std::cin >> c;
    float delta = b*b - 4*a*c;
    if (delta < 0)
    {
        std::cout << "równanie nie ma rozwiazań rzeczywistych";
        return 1;
    }else if (delta==0){
        std::cout << "rownianie ma jedno rozwiazanie x1 = " << (-b - sqrt(delta))/2/a << std::endl;
        return 2;
    }else if(delta > 0)
    {
        std::cout << "rownanie ma dwa rozwiazania" << std::endl;
        x1=(-b-sqrt(delta))/2/a;
        x2=(-b + sqrt(delta))/2/a;
        std::cout << "X1 = " << x1 << ",   x2= " << x2<<std::endl;
        
    }
    
    
    
    
    return 0;
}
