#include <iostream>


int main()
{
    
  int tab[10];
for (int i = 0; i<10; ++i)
{
    
    tab[i] = i+1;
}
        std::cout <<"tablica "<< std::endl;
    for (int i = 0; i < 10 ; ++i){
        
        std::cout << tab[i] << ",\t";
    }
    std::cout << std::endl << "koniec tablicy" << std::endl;
    
    return 0;
}
