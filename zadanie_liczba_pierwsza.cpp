#include <iostream>

// napisz program, który określi czy wpisana liczba jest liczbą pierwszą
 int f_pierwsza(int n)
 {
     
     for (int i=2 ; i<n ; i++)
     {
         if (n == 1)
             return true;
         if (n%i == 0)
             return false;
    }
    return true;
}


int main()
{
    int n;
    std::cout << "wprowadź liczbę całkowitą dodatnią ";
    std::cin >> n;
    std::cout << "wprowadziłeś liczbę n = " << n << std::endl;
    std::cout << "czy wprowadzona liczba n jest pierwszą?   " << f_pierwsza(n) << std::endl;
    
    return 0;
    
}
