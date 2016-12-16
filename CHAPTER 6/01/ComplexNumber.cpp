#include "ComplexNumber.hpp"
#include <cmath>

// Override default constructor
// Set real and imaginary parts to zero
ComplexNumber::ComplexNumber()
{
   mRealPart = 0.0;
   mImaginaryPart = 0.0;
}

// Constructor that sets complex number z=x+iy
ComplexNumber::ComplexNumber(double x, double y)
{
   mRealPart = x;
   mImaginaryPart = y;
}

// mRealPart setter
void ComplexNumber::SetRealPart(double newRealPart)
{
    mRealPart = newRealPart;
}

// mImaginaryPart setter
void ComplexNumber::SetImaginaryPart(double newImaginaryPart)
{
    mImaginaryPart = newImaginaryPart;
}
 
/*****************************************************************************
 * 6.1.1
 * Getter methods for mRealPart and mImaginary Part
 *****************************************************************************/

// Getter method for mRealPart
double ComplexNumber::GetRealPart()
{
    return mRealPart;
}

double ComplexNumber::GetImaginaryPart()
{
	return mImaginaryPart;
}

/*****************************************************************************
 * 6.1.2
 * Friend classes
 *****************************************************************************/
double RealPart(ComplexNumber& number)
{
	return number.mRealPart;
}	

double ImaginaryPart(ComplexNumber& number)
{
	return number.mImaginaryPart;
}

/*****************************************************************************
 * 6.1.3
 * Copy constructor override
 *****************************************************************************/
ComplexNumber::ComplexNumber(const ComplexNumber& othernum)
{
	mRealPart = othernum.mRealPart;
	mImaginaryPart = othernum.mImaginaryPart;
}
/*****************************************************************************
 * 6.1.4
 * special constructor 
 *****************************************************************************/
ComplexNumber::ComplexNumber(double x)
{
	mRealPart = x;
	mImaginaryPart = 0;
}
/*****************************************************************************
 * 6.1.5
 * Complex conjugate
 *****************************************************************************/
ComplexNumber ComplexNumber::CalculateConjugate() const
{
    // Make copy of original complex number
    ComplexNumber cc(this->mRealPart, this->mImaginaryPart);
    
    // Get imaginary value of the complex number
    double imaginaryValue = cc.GetImaginaryPart();
    
    // Set imaginary value to -1 * itself
    imaginaryValue *= -1;
    
    // Change value of imaginary part in copied complex number to -1 * original
    cc.SetImaginaryPart(imaginaryValue);
    
    // return the new ComplexNumber
   return cc; 
}
/*****************************************************************************
 * 6.1.6
 * method SetConjugate which sets the complex number to its complex conjugate
 *****************************************************************************/
 void ComplexNumber::SetConjugate()
 {
 	double imaginaryValue = this->mImaginaryPart;
 	double newImaginaryValue = imaginaryValue * -1;
 	this->mImaginaryPart = newImaginaryValue;
 }
// Method for computing the modulus of a
// complex number
double ComplexNumber::CalculateModulus() const
{
   return sqrt(mRealPart*mRealPart+
               mImaginaryPart*mImaginaryPart);
}

// Method for computing the argument of a
// complex number
double ComplexNumber::CalculateArgument() const
{
   return atan2(mImaginaryPart, mRealPart);
}

// Method for raising complex number to the power n
// using De Moivre's theorem - first complex
// number must be converted to polar form
ComplexNumber ComplexNumber::CalculatePower(double n) const
{
   double modulus = CalculateModulus();
   double argument = CalculateArgument();
   double mod_of_result = pow(modulus, n);
   double arg_of_result = argument*n;
   double real_part = mod_of_result*cos(arg_of_result);
   double imag_part = mod_of_result*sin(arg_of_result);
   ComplexNumber z(real_part, imag_part); 
   return z; 
}

// Overloading the = (assignment) operator
ComplexNumber& ComplexNumber::
               operator=(const ComplexNumber& z)
{
   mRealPart = z.mRealPart;
   mImaginaryPart = z.mImaginaryPart;
   return *this;
}

// Overloading the unary - operator
ComplexNumber ComplexNumber::operator-() const
{
   ComplexNumber w;
   w.mRealPart = -mRealPart;
   w.mImaginaryPart = -mImaginaryPart;
   return w;
}

// Overloading the binary + operator
ComplexNumber ComplexNumber::
              operator+(const ComplexNumber& z) const
{
   ComplexNumber w;
   w.mRealPart = mRealPart + z.mRealPart;
   w.mImaginaryPart = mImaginaryPart + z.mImaginaryPart;
   return w;
}

// Overloading the binary - operator
ComplexNumber ComplexNumber::
              operator-(const ComplexNumber& z) const
{
   ComplexNumber w;
   w.mRealPart = mRealPart - z.mRealPart;
   w.mImaginaryPart = mImaginaryPart - z.mImaginaryPart;
   return w;
}

// Overloading the insertion << operator
std::ostream& operator<<(std::ostream& output, 
                         const ComplexNumber& z)
{
   // Format as "(a + bi)" or as "(a - bi)"
   output << "(" << z.mRealPart << " ";
   if (z.mImaginaryPart >= 0.0)
   {
      output << "+ " << z.mImaginaryPart << "i)";
   }
   else
   {
      // z.mImaginaryPart < 0.0
      // Replace + with minus sign 
      output << "- " << -z.mImaginaryPart << "i)";
   }
}
//Code from Chapter06.tex line 779 save as ComplexNumber.cpp
