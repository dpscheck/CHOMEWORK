
	/* The following is a fragment code provided for Chapter 2 Exercise 2.1*/

    double x, y, z;
    if ( (x > y) || (x < 5.0) )
    {
        z = 4.0;
    }
    else 
    { 
        z = 2.0;
    }

    // 1. This code does as follows: If (and only if) either x is greater than y ( x > y ) OR ( || ) x is less than 5.0 ( x < 5.0 ), 
    // then the code will set the variable z to the value of 4.0. Otherwise, the code is to set the variable z to the value of 2.0.

    /* 2. The values that the fragment of code would assign to the variable z when variables x and y take on the following variables are:

        (a) x=10.0 and y=-1.0; z = 4.0 ( condition met: x>y )
        (b) x=10.0, and y=20.0; z = 2.0 ( condition met: none )
        (c) x=0.0, and y=20.00; z = 4.0 (condition met: x<5.0) */
    
    //  3. Code fragment below is modified so that condition x>y (x is greater than y) is replaced by x>=y (x is greater than or equal to y) .
    
    double x, y, z;
    if ( (x >= y) || (x < 5.0) )
    {
        z = 4.0;
    }
    else 
    { 
        z = 2.0;
    } 
    