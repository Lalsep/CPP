#include <iostream>

int main()
{
    int x;
    std::cout << "podaj numer miesiąca" << std::endl;
    std::cin >> x;
    
    if ( x<1 || x>12)
    {
        std::cout << "blędny numer miesiąca";
        return 1;
    }
    
    switch (x)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            std::cout << "31 \n";
            break;

        case 2:
            std::cout << "28 \n";
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            std::cout << "30 \n";
            break;
        
    }
    
    return 0;
    
}
