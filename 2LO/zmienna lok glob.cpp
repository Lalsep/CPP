#include <iostream>
using namespace std;

int main()
{
// deklaracja zmiennych globalnych
	int n;
	cout<<"podaj ilość iteracji  ";
	cin >> n;
	cout <<"-----------------"<< endl;

	for (int i = 0; i < n; ++i)
	{

// zmienna lokalna
	static int suma = 0.0;
// zmienna lokalna
		int x;
		cin >> x;
		suma += x;
		cout << "suma po "<< i+1 << "  iteracjach wynosi " << suma << endl;


	}


// cout << suma;







	return 0;
}