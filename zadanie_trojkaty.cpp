#include <iostream>

int main()
{
 
    int a, b, c;
    std::cout << "Podaj wartosci bokow a, b, c \n";
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    
    if (a<=0 || b <= 0 || c <=0){
        
        std::cout << "zaden bok trojkata nie moze byc liczba ujemna";
        return 1;
    }
    std::cout << "Podales liczby a=" << a << ",  b="<< b << ",  c=" << c << "\n";
    
    //szukamy najdluzszy bok
    
    int max = a;
    if (b > max){
        max = b;
    } 
         if (c > max){
         max = c;
     }
    
    
    if (max < a+b || max < b+c || max < a+c)
    {
        
        
      std::cout << "boki tworza trojkat\n";   
    }
    
    else{
        
        
      std::cout << "boki nie utworza trojkata \n";   
        
    }
    
    
    
    return 0;
}
