#include <iostream>

int main()
{
    
    int a=2;
    double x = 3.1415926536;
    std::cout << "zmienna a = " << a << std::endl;
    std::cout << "zmienna x = " << x << std::endl;
    
    std::cout << "mnożenie liczb" <<std::endl;
    double y = a*x;
    std::cout << "a*x =" << y <<"\n";
    y = x*a;
    std::cout << "x*a =" << y <<"\n";
//     dodawanie .1
    std::cout << "dodawanie 0.1 i odejmowanie \n";
    
    y=10;
    y+=0.5+0.3+0.2;
    std::cout << "y =" << y <<"\n";
    y=y-1/2+0.1;//przyklad bledu 1/2 w int jest rowny 0
    std::cout << "y =" << y <<"\n";
    y=10+1/100-0.02;
    std::cout << "y =" << y <<"\n";
    float c=0;
    for (int i=0;i<20;++i)
    {
       c+=0.05; 
        
    }
    std::cout << "a =" << a <<"\n";

    
    
    
    return 0;
}
