/* Original Code provided for exercise 2.2

#include <iostream>

int main(int argc, char* argv[])
{
	
    double p, q, x, y;
    int j;

    return 0;
}  */


// 1.
#include <iostream>

int main(int argc, char* argv[])
{
	
    double p, q, x, y;
    int j;

if ( ( p >= q ) || ( j != 10) )
{ 
    x = 5;
}
    return 0;
}

// 2. 

#include <iostream>

int main(int argc, char* argv[])
{
	
    double p, q, x, y;
    int j;
    
if ( ( p >= q ) && ( j = 20) )
{ 
    // if both conditions are met
    x = 5;
}
else
{
    // if one or both conditions are not met
    x = p;
}
    return 0;
}

// 3. 

#include <iostream>

int main(int argc, char* argv[])
{
	
    double p, q, x, y;
    int j;
    
if ( p > q )
{ 
    // if p > q condition is met
    x = 0;
}
else if ( (p <= q) && (j = 10) )
{
    // if both conditions are met
    x = 1;
}
else
{
    // otherwise (for all other conditions)
    x = 2;
}
    return 0;
}