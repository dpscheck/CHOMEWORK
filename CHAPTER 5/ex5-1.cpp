
  #include <iostream>

   using std::cout;
   using std::endl;

   void PrintVar(int* val);

   int main()
      {
      int var;
      PrintVar(&var);

   cout << "Value of Integer is " << var << endl << endl; 
 
   
      return 0;
      }
   
   void PrintVar(int* val)
      {
     
     *val = 6;
     
     
      }
      