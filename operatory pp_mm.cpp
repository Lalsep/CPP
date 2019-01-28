#include <iostream>

int main()
{
    int x = 5, y, z;
    y = ++x; /*tak samo x+=1; y = x */
    /*  teraz x == 6, y == 6  */
    std::cout << "y = ++x; preinkrementacja  x = " << x << ",  y = "<< y << std::endl;
    z = x++; /* z = x; x += 1; */
    /* teraz x == 7, z == 6 */
    std::cout << "z = x++; postinkrementacja; x = " << x << ", z = " << z << std::endl;
    
    return 0;
}
