#include <iostream>
#include <string>
using namespace std;

int main()
{
  int number;
  
  cout << "Podaj liczbę; ";
  cin >> number;
  string str = to_string(number);
  cout <<"liczba składa się z "<< str.length() << "cyfr ";

   return 0;
}
