#include "Complex_Number.h"

//Default constructor
Complex_Number::Complex_Number(const int real, const int imaginary) : real(real), imaginary(imaginary) {}

//getters
//get Real
int Complex_Number::getReal() const { return real; }

//get imaginary
int Complex_Number::getImaginary() const { return imaginary;  }

//setters
//set Real
void Complex_Number::setReal(int newReal) { real = newReal; }

//set Imaginary
void Complex_Number::setImaginary(int newImaginary) { imaginary = newImaginary; }

/* Operator + function to add to imaginary numbers together
*  @Param Complex_Number class object
*  @Return Complex_Number, result of the two added complext numbers
*/
Complex_Number Complex_Number::operator+ (const Complex_Number& other) const {
	Complex_Number result;

	result.setReal(getReal() + other.getReal());
	result.setImaginary(getImaginary() + other.getImaginary());

	return result;
}

/* Operator >> overload to read in complex numbers
*  @Param istream, Complex Number object to read
*  @Return istream
*/
istream& operator >> (istream& in, Complex_Number& newC) { return in >> newC.real >> newC.imaginary; }

/* Operator << overload to output complex numbers
*  @Param ostream, complex number object
*  @Return ostream after printing object
*/
ostream& operator << (ostream& out, const Complex_Number& cNum) { return out << cNum.real << "\t" << cNum.imaginary << endl; }