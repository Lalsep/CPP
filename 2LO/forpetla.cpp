#include <iostream>
using namespace std;

int main()
{

// struktura pętli ifor
int suma = 0;
	for (int i = 1; i <= 10; i++)
		{
	suma += i;
	cout << "dla i = " << i << "  suma =  "<< suma << endl;
	if (i%7 == 0)
		{
			cout << "na tym konczymy pętle"<< endl;
			break;

		}
	// else{
	// }
		cout <<"pętla wykonuje się dalej" << endl;

		}




	return 0;
}