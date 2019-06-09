#include <iostream>
using namespace std;
int main(){

// float k, litr, x;
// int a;
// // int a = x*100;
// // zapytaj a oraz zapisz ilosc przejechanych km
// printf("ile km przejechal(a) pan/pani? :  ");
// cin >> k;
// // zapytaj o oraz zapisz ilosc zuzytej benzyny w litrach
// printf ("ile zuzyl benzyny w litrach?:  ");
// cin >> litr;
// // oblicz wyswietl ilosc przejechanych km na 1 litr
// printf("Ilosc przejechanych km na jeden litr benzyny to:  ");
// x = k/litr;
// cout << x;
// // oblicz wyswietl ilosc benzyny na 100km
// printf("\n");
// cout << endl;
// printf("Ilosc benzyny w litrach na 100 km to:  ");
// a = 100/x;
// cout <<a;
// cout << endl;
float a,b,x;
cout << ("prosze wpisac wartosc a: \n");
cin >>a;
cout << ("proszę wpiac wartosc b: \n ");
cin >> b;
if (a==0)
	cout << "nieskonczonosc  \n";
else if (a!=0)
	x=b/a;
cout << x; 
cout << endl;

	return 0;
}