#include <iostream>
using namespace std;

int main()
{

int x,y;
cout << "podaj liczbę x  "<<endl;
cin >> x;

y=x;
int wynik = 0;
while (y != 0)
{
y/=10;
wynik++;

}

cout << "ilość cyfr w liczbie x = "<<x << " wynosi   "<<wynik<< endl;

return 0;

}