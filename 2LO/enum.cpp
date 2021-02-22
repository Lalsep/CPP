# include <iostream>
int main()
{
enum dzien {
	poniedzialek = 1, wtorek = 2, sroda = 3, czwartek = 4,
	 piatek = 5,sobota =6, niedziela = 7 };
	dzien d = sobota;
	std::cout << d <<"\n";
return 0;
}