#ifndef COMPLEXNUMBERHEADERDEF
#define COMPLEXNUMBERHEADERDEF

#include <iostream>

class ComplexNumber
{
private:
   double mRealPart;
   double mImaginaryPart;
   
public:
   // Constructors 
   ComplexNumber();
   ComplexNumber(const ComplexNumber& othernum);
   ComplexNumber(double x);
   ComplexNumber(double x, double y);
   
   // Getters
   double GetRealPart();      // Write this
   double GetImaginaryPart(); // Also write this
   
   // Setters 
   void SetRealPart(double newRealPart);
   void SetImaginaryPart(double newImaginaryPart);
   
   // Mutators 
   double CalculateModulus() const;
   double CalculateArgument() const;
   ComplexNumber CalculatePower(double n) const;
   ComplexNumber& operator=(const ComplexNumber& z);
   ComplexNumber operator-() const;
   ComplexNumber operator+(const ComplexNumber& z) const;
   ComplexNumber operator-(const ComplexNumber& z) const;
   friend std::ostream& operator<<(std::ostream& output, 
                                   const ComplexNumber& z);
                                   
    // Friend Classes
    friend double ImaginaryPart(ComplexNumber& number);
    friend double RealPart(ComplexNumber& number);   
    
    // IDK what to call these methods
    ComplexNumber CalculateConjugate() const;
    void SetConjugate();
};

#endif
//Code from Chapter06.tex line 746 save as ComplexNumber.hpp
