#include "Complex.h"

ostream& operator<<(ostream& Out, const Complex& C)
{
	Out << "(" << C.GetReal() << ", " << C.GetImaginary() << ")";
	return Out;
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
