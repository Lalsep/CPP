#include <iostream>
using namespace std;

int main()
{

int a, b, x=0;
cout << "podaj liczbę a " << endl;
cin >> a;
b = a;
while (a > 0)
{	
a = a/10;

x++;

}

cout << "podana liczba a = " << b << "  ma  "<<x << " cyfr" << endl;




	return 0;
}