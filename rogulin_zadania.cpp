#include <iostream>
#include <string>
using namespace std;
void task16(){
    double kmDriven;
    double gasUsed;
    cout << "kilometers driven";
    cin >> kmDriven;
    cout << "Gas used: ";
    cin >> gasUsed;
    cout << "number of kilometers driven per one liter: "<<kmDriven/gasUsed  << "km/l" << endl;
    cout << "gasoline consumption in liters per 100 km: " << gasUsed/(kmDriven/100) << "L/km" << endl;
}
void task17(){
    
    double a;
    double b;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    if (a==0){
        cout << "x=infinity ";
    }
    else{
        
        cout << "x= " << b/a;
    }
}
 int main(){
     
     task16();
     cout << endl << endl;
     task17();
     cout << endl<< endl;
     return 0;
}   
    
