#include <iostream>
int main(){

int tab[10][10];
for (int i=0; i < 10;i++){
	for (int j=0; j < 10;j++){

		tab[i][j] = 10-j;
}

}

for (int i=0;i < 10; i++){
	for (int j=0; j<10; j++){
		std::cout << tab[i][j] << "\t";
	}
		std::cout << "|" ;
for (int c=0; c < 10; c++){

	std::cout<< tab[9][j] << "\t";


}
	std::cout << std::endl;
}
	return 0;
}