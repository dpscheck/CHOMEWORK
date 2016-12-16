#include <iostream>
#include <fstream>

int main(int argc, char* argv[])
{
    std::ifstream read_file("x_and_y.dat");
    if (!read_file.is_open())
    {
        return 1;
        
    }
    
    int number_of_rows = 0;
    double dummy1, dummy2, dummy3, dummy4;
    while(read_file >> dummy1 >> dummy2,
        read_file >> dummy3 >> dummy4)
    {
        
        
        number_of_rows++;
        
    }
    
    std::cout << "Number of rows = "
              << number_of_rows << "\n";
    
    return 0;
}

/* read_file.eof usage. eof is END OF FILE and only stops once flagged by failure of reading the next line.
This means using it to read the x_and_y.dat is reading there are 2 lines successfully and then attempting
to read another line as the 2nd line read was also sucessful. (i think. something like that???)