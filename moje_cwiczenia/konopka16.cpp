#include <iostream>
using namespace std;
using std::string;

int main(){

float spalanie;
float przejechaneKm;
float przejechanenalitr;
float spalaniena100;
 cout << "Ile przejechano km tym samochodem? :";
 cin >> przejechaneKm;

 cout << "Ile ten samochod spali podczas tej trasy?: ";
 cin >> spalanie;

 przejechanenalitr=przejechaneKm/spalanie;
 cout << "samochod te na jednym litrze paliwa przejechalby " << przejechanenalitr << "km" <<endl;

 spalaniena100 = (spalanie/przejechaneKm)*100;

 cout << "Na 100 kilomentow spalanie samochdu wyosilo " << spalaniena100<<"!" << endl;

 return 0;
}
