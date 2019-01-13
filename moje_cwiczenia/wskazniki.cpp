#include <iostream>

int main()
{

    int a = 5;
    int *pa = &a;
    std::cout << "a = " << a << ", *pa=" << *pa << "\n";
    
    *pa = 8;
    std::cout << "a = " << a << ", *pa=" << *pa << "\n";

    a=3;
    std::cout << "a = " << a << ", *pa=" << *pa << "\n";
    std::cout << "a = " << &a << ", *pa=" << *pa << "\n";
    
return 0;
}
