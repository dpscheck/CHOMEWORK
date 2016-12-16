#include <iostream>


int main(int argc, char* argv[])
{
    int i;
    int* p_j;
    int* p_k;

    i = 5; //declare value of i
    p_j = &i; //stores address of i in this pointer.
    
    p_k = new int*; // allocates location
    *p_k = &i; //stores i in p_k. could also use p_j because it's an alias?

    delete p_k; // memory released

    std::cout << p_j * 5 << "\n";

    return 0;
}