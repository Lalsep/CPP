#include <iostream>
using namespace std;
float a,b;
int main()
{
cout << "rozwiazuje rownanie ax=b" << endl;
cout << "podaje liczbe a: " << endl;
cin >> a;
cout << "podaj liczbe b: " << endl;
cin >> b;
float x=b/a;
if
(x==0)
	cout << "nieskonczonosc" << endl;
else
	cout << "wyniem rowania jest : " << x << endl;
	
return 0;
}
