#include <iostream>
using namespace std;
using std::string;
int main(){
double spalanie,km, litr;
cout << "ile przejechano kilometrow? =";
cin >> km;
cout << "Ile samochod spalil?";
cin >> spalanie;
litr = km/spalanie;
cout << "ile kilometrow przejechal na jednym litrze paliwa =" << litr << "kilometrow " << endl;
cout << "samochod ogolem przejechal= " << km << "kilomentor" << endl;
return 0;
}
