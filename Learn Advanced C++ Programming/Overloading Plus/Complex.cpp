#include "Complex.h"

ostream& operator<<(ostream& Out, const Complex& C)
{
	Out << "(" << C.GetReal() << ", " << C.GetImaginary() << ")";
	return Out;
}

Complex operator+(const Complex& C1, const Complex& C2)
{
	return Complex(C1.GetReal() + C2.GetReal(), C1.GetImaginary() + C2.GetImaginary());
}

Complex operator+(const Complex& C1, double D)
{
	return Complex(C1.GetReal() + D, C1.GetImaginary());
}

Complex operator+(double D, const Complex& C1)
{
	return Complex(C1.GetReal() + D, C1.GetImaginary());
}

Complex::Complex() : Real(0), Imaginary(0)
{
}

Complex::Complex(double Real, double Imaginary) : Real(Real), Imaginary(Imaginary)
{
}

Complex::Complex(const Complex& Other)
{
	Real = Other.Real;
	Imaginary = Other.Imaginary;
}

const Complex& Complex::operator=(const Complex& Other)
{
	Real = Other.Real;
	Imaginary = Other.Imaginary;

	return *this;
}
