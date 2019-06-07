#include <iostream>
using namespace std;
float liczba_a, liczba_b;
int main(){
cout << "podaj liczbe 'a' z rownania ax=b";
cin >> liczba_a;
cout << "podaje liczbe 'b' z rowaniani ax=b";
cin >> liczba_b;
if (liczba_a == 0){
cout << "nieskonczonosc" << endl;
}
else{

	
cout << "x = " << liczba_b/liczba_a << endl;	
}

	return 0;
}