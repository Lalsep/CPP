#include <iostream>
#include <string>
using namespace std;

int main(){
    double KmDriven;
    double gasUsed;
    cout << "kilometers driven: ";
    cin >> KmDriven;
    cout << "gas used: ";
    cin >> gasUsed;
    cout << "number of kilometers driven per one liter: " << KmDriven/gasUsed << "km/l" << endl;
    cout << "gasoline consumption in liters per 100 km: " << gasUsed/(KmDriven/100)<< "L/km" << endl;
    return 0;
}
