#include <iostream>

int main()
{
    int a=1,b=2;
    std::string s;
    s = "hello there";
    std::cout << "liczby a="<<a<<",  b="<<b<<std::endl;
    std::cout << s << std::endl;
    
//     blok drugi

int c=6;
while (c > 0){
    c-=3;
    std::cout << c << ", ";
    
}
std::cout << std::endl;
 
float x = 3.1415;
int y = x;
std::cout << "liczba x= " << x << std::endl;
std::cout << "zaokrąglenie x= " << y << std::endl;
std::cout << "==============="<< std::endl;
std::cout << "podaj liczbę całkowitą y = ";
std::cin >> y ;
if(y%2 == 0)
{
    std::cout << "liczba jest parzysta" << std::endl;
    return 1;    
}

std::cout << "liczba jest nieparzysta" << std::endl;
std::cout << "-----------------"<< std::endl;
int count = 0;
while (count < 10){
    std::cout << "welcome to C++ " << std::endl;
    count +=1;
    
}
    
    return 0;
}
