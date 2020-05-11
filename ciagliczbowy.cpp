#include <iostream>
using namespace std;
// Zadanie. dany jest ciag liczbowy a(n) = n/9 + 9/n, n>1. Oblicz sume 100 pierwszych wyrazów tego ciągu. 
float ciag(int n)
{

return n/9.0+9.0/n;

}

int main()
{

float suma = 0;
cout << "liczymy sume 100 wyrazow ciagu liczbowego" << endl;
for (int i=1;i<=1000;++i)
{
// cout << ciag(i)<< endl;	
suma += ciag(i);

}

cout << "suma 100 wyrazow ciagu liczbowego a(n)  =   " << suma << endl;


	return 0;
}