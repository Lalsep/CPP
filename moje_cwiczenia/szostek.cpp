#include <iostream>
using namespace std;
int main(){
float km, l,PrzeNaLitr,Litrna100km;
cout << "Ile przejechales kilometrow? "<< endl;
cin >> km;
cout << endl;

cout << "Ile zuzyłeś litrów benzyny? " << endl;
cin >> l;
cout << endl;
PrzeNaLitr=km/l;
Litrna100km=(1/km)*100;
cout << "liczba przejechanych kilometrow wynosi : "<< PrzeNaLitr << endl;
cout << "zużycie benzyny: " << Litrna100km;
return 0;
    
}
