#ifndef COMPLEX_NUMBER_H
#define COMPLEX_NUMBER_H
#include <iostream>

using namespace std;

class Complex_Number {
public:

	//Constructors
	//Default
	Complex_Number(int = 0, int = 0);

	//getters
	int getReal() const;
	int getImaginary() const;
	
	//setters
	void setReal(int);
	void setImaginary(int);

	//operator + function to add complext numbers
	Complex_Number operator+ (const Complex_Number&) const;

	//operator << function to output complex numbers
	friend ostream& operator << (ostream&, const Complex_Number&);

	//operator >> function to read in complext numbers
	friend istream& operator >> (istream&, Complex_Number&);

private:

	//data fields
	int real;
	int imaginary;

};
#endif
