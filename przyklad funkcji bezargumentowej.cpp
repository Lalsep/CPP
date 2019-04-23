#include <iostream>
void wypisz(){
    std::cout << "****************** \n";
}

int main(){
    int n;
    std::cout << "Podaj liczbe calkowitą \n";
    std::cin >> n;
    wypisz();
    std::cout << "Podałeś liczbę n = " << n << std::endl;
    return 0;
}
