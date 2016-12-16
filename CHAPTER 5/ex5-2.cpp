  #include <iostream>

   using std::cout;
   using std::endl;

   void addToInt(int* ptr);

   int main()
      {
      int num = 5;
   
      cout << "The original value of num is " << num << endl;
   
      addToInt(&num); //executing the function by using the address of num;
      
   cout << "Executing the function addtoInt(), the new value of num is now " << num << endl << endl;
         
   
      return 0;
      }
   
   void addToInt(int* ptr)
      {

      *ptr += 10;  //this requests that 10 be added to the original integer num
      }
