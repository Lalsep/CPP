#include <iostream>
using namespace std;

int main()
{

int a;
cout << "podaj liczbę całkowitą a "<< endl;
cin >> a;

if (a%2 == 0){

	cout << "podana liczba a = "<< a << " jest parzysta" << endl;

} 
else {
	cout << "podana liczba a = " << a << " jest nieparzysta" << endl;
}

	return 0;
}