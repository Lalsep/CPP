#include <iostream>
int main()
{
    float kilometry;
    float benzyna;
    std::cout << "Podaj ilosc przejechanych kilometrow: \n";
    std::cin >> kilometry;
    std::cout << "Podaj ilosc zuzytej benzyny: \n";
    std::cin >> benzyna;
    float srednia=kilometry/benzyna;
    float zuzycie = kilometry/100;
    std::cout <<"Liczba przejechnych km na jeden litr paliwa to: " << srednia << std::endl;
    std::cout << "zucycie benzyny na 100km to:" << zuzycie << "l/100km" << std::endl;
    return 0;
}
