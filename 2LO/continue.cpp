#include <iostream>
using namespace std;

int main(){

int tab[10];

for (int i=0; i < 10; i++){

	tab[i] = i;
}

for (int i = 0; i <10; i++)
{
	if (tab[i] < 5){
		continue;
	}
	cout << tab[i]<<"\t" ;
}
cout << endl;


	return 0;
}