#include <iostream>

/* swap values of declared integers (this code uses x & y) using only 
pointer variables */

int main(int argc, char* argv[])
{
    int x;
    int y;
    int* p_x; // will deal with x
    int* p_y; // will deal with y

    p_x = &x; //stores address of x in pointer
    p_y = &y; // stores address of x in pointer

    std::cout << "x = " << p_y << "/n";
    std::cout << "y = " << p_x << "/n";


    return 0;
}