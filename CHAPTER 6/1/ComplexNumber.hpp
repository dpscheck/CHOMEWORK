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
    ComplexNumber(double x, double y);

    // Getters
    double GetRealPart();
    double GetImaginaryPart();

    // Setters
    
    // Mutators
    double CalculateModulus() const;
    double CalculateArgument() const;
    ComplexNumber CalculatePower(double n) const;

    // Overloaders
    ComplexNumber& operator=(const ComplexNumber& z);
    ComplexNumber operator-() const;
    ComplexNumber operator+(const ComplexNumber& z) const;
    ComplexNumber operator-(const ComplexNumber& z) const;
    friend std::ostream& operator<<(std::ostream& output, 
                                   const ComplexNumber& z);
};

#endif
//Code from Chapter06.tex line 746 save as ComplexNumber.hpp
