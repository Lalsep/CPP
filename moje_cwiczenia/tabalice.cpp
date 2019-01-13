#include <iostream>

int function (int x)
    {
        if (x % 3 == 0 || x%5 == 0)
            x+=2;
        return x;
    }

int main()
{
    
    int tab[10];
    for (int i = 0 ; i < 10 ; ++i)
        tab[i] = function(i);
    for (int j=0 ; j < 10 ; ++j)
        std::cout << tab[j] << ",  ";
    std::cout << std::endl;
    
    return 0;
}
