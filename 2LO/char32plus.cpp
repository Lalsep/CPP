#include <iostream>
int main()
{

for (int i = 65; i < 80; ++i)
{
	std::cout << i+32 << "- " << char (i+32) << "\t";
	std::cout << i << "- " << (char) i << std::endl;
}
return 0;
}