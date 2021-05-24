#include <iostream>
using namespace std;

int main()
{

double x;
int a,b;

x = 3.0/2;
cout << "operacja dzielenia liczb całkowitych "<< endl;
cout << "x = 3/2 = " << x << endl;

cout <<"reszta z dzielenia liczb" <<endl;
cout <<"podaj liczbę a " << endl;
cin >> a;
cout << "Podaj liczbę b " << endl;
cin >> b;

cout <<"reszta z dzielnia a/b, czyli a%b = " << a%b << endl;

cout <<"stare a = "<<a << endl;
a++;
cout << "nowe a++ " << a << endl;
cout << "stare b " << b << endl;
b--;
cout << "nowe b -- " << b <<endl;
	return 0;
}