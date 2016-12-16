/* Comments have numbers 1, 2, 3 listed. This is to reflect what part of the code is answering
which part of the exercise */
#include <cassert>
#include <iostream>
#include <fstream>

int main(int argc, char* argv[])
{
    double x[4] = { 0.0, 1.0, 1.0, 0.0 };
    double y[4] = { 0.0, 0.0, 1.0, 1.0 };
    // 1.
    std::ofstream write_output("x_and_y.dat");
    assert (write_output.is_open());
    // 3. Write numbers as +x.<10digits>e+00
    write_output.setf(std::ios::scientific);
    write_output.setf(std::ios::showpos);
    write_output.precision(10); // end of 3.

    for (int  i=0; i<4; i++)
    {
        write_output << x[i] << " ";
       
    }
    write_output << "\n";
    write_output.flush(); // 2. this will flush output stream immediately after line.
    for (int  i=0; i<4; i++)
    {
        write_output << y[i] << " "; 
       
    }
    write_output.flush();
    write_output << "\n"; //2.
    write_output.close();
    return 0;
}