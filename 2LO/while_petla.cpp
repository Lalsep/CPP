#include <iostream>
using namespace std;

int main()
{

	int x;
	cout << "podaj liczbę nieparzystą " << endl;

	cin >> x;

	while (x%2 == 0)
	{

cout << "podałeś błędną liczbę" << endl;
cout << "spróbuj ponownie " << endl;
cin >> x;

	}


cout << "werszcie podałeś poprawną liczbę x = " << x << endl;

return 0;
}