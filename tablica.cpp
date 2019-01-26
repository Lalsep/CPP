#include <iostream>

int main()
{
    
    int tab[8][8];
    for (int i=0;i<8;++i)
    {
        for(int j=0; j<8; ++j)
        {
            tab[i][j] = j;
            
        }
        
        
    }
    
    for (int i=0; i<8;++i)
    {
        for (int j=0; j<8; ++j)
        {
            std::cout << tab[i][j] << "\t";
        }
        std::cout << std::endl;
    }
std::cout << "======================" << std::endl;    
    for (int i=0;i<8;++i)
    {
        for(int j=0; j<8; ++j)
        {
            tab[i][j] = 7-j;
            
        }
        
        
    }
    
    for (int i=0; i<8;++i)
    {
        for (int j=0; j<8; ++j)
        {
            std::cout << tab[i][j] << "\t";
        }
        std::cout << std::endl;
    }
std::cout << "======================" << std::endl;    

    for (int i=0;i<8;++i)
    {
        for(int j=0; j<8; ++j)
        {
            tab[i][j] = i;
            
        }
    }
    
    for (int i=0; i<8;++i)
    {
        for (int j=0; j<8; ++j)
        {
            std::cout << tab[i][j] << "\t";
        }
        std::cout << std::endl;
    }
    return 0;
}
