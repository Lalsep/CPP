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
            std::cout << "styczeń \n";
            break;
        case 2:
            std::cout << "luty \n";
            break;
        case 3:
            std::cout << "marzec \n";
            break;
        case 4:
            std::cout << "kwiecień \n";
            break;
        case 5:
            std::cout << "maj \n";
            break;
        case 6:
            std::cout << "czerwiec \n";
            break;
        case 7:
            std::cout << "lipiec \n";
            break;
        case 8:
            std::cout << "sierpień \n";
            break;
        case 9:
            std::cout << "wrzesień \n";
            break;
        case 10:
            std::cout << "październik \n";
            break;
        case 11:
            std::cout << "listopad \n";
            break;
        case 12:
            std::cout << "grudzień \n";
            break;
        
    }
    
    return 0;
    
}
