#pragma once

#include <iostream>

using namespace std;

class Complex
{
public:
	Complex();
	Complex(double Real, double Imaginary);
	Complex(const Complex& Other);
	const Complex& operator= (const Complex& Other);

	double GetReal() const { return Real; }
	double GetImaginary() const { return Imaginary; }

private:
	double Real;
	double Imaginary;
};

ostream& operator<<(ostream& Out, const Complex& C);