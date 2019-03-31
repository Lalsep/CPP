#include <iostream>
using namespace std;
int main(){
double km, ben;
    cout << "Podaj liczbe przejechanych kilometrow: ";
    cin >> km;
    cout << "podaj ilosc zuzytej benzyny:";
    cin >> ben;
    cout << "liczba kilometrow na jeden litr benzyny = "<< km/ben << endl;
    cout << "zuzycie paliwa na sto kilometrow = " << (ben*100)/km << endl;
    return 0;
    
}
