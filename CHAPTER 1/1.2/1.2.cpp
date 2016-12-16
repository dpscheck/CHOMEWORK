#include <iostream>
#include <cmath>
#include <cassert>

int main(int argc, char* argv[])
{
	/* HW 1.2 Write a code that asks a user to enter two integers from
	 the keyboard and then writes the product of these integers to the screen. */

	// This allows the entering of any two integers by the user
	int x, y, z;
	std::cout << "Enter any two integers, then press RETURN\n";
	std::cin >> x >> y;
    // This write a statement that the product of the two integers entered is...
	std::cout << "The product of "<< x << " & " << y << " is:\n"; 
    // Mathematical function for finding the product of 2 numbers
	z = x * y;
    // the resulting output of multiplying the two user-entered inputs
	std::cout << z << "\n"; 
	

return 0;
}