#include <iostream>

float km_na_litr( float km, float litry)
{
    return km/litry;
    
}
float km100 (float km, float litry)
{
    return litry/km*100.0;
    
}



int main()
{
//     deklarujemy zmienne km oraz litry
    
    float km, litry;
    std::cout << "podaj ile km przejechałeś  ";
    std::cin >> km;
    
    if (km <= 0)
    {
        std::cout << "podales zle dane";
        return 1;
        
    }
        
    
    std::cout << std::endl << "podaj ile litrow paliwa spaliles ";
    std::cin >> litry;
    if (litry <= 0)
    {
        std::cout << "podales zle dane";
     return 2;   
    }
    
    std::cout << std::endl;
    
    std::cout << "twoj samochod spala  " << km100(km, litry)<< "   l/100 km" <<std::endl;
    std::cout << "twoj samochod na jednym litrze przjedzie  " <<km_na_litr(km,litry)<< "km" << std::endl;
 
    
    

return 0;
}
