#include "Fraction.h"
#include <iostream>
using namespace std;

Fraction::Fraction()
{
	numerator = 0;
	denominator = 1;
}

Fraction::Fraction(int num, int den)
{
	numerator = num;
	if (den != 0)
	{
		denominator = den;
	}
	else
	{
		denominator = 1;
	}
}

int Fraction::getNumerator() const
{
	return numerator;
}

int Fraction::getDenominator() const
{
	return denominator;
}

void Fraction::setNumerator(int num)
{
	if (numerator != 0)
	{
		numerator = num;
	}
}

void Fraction::setDenominator(int den)
{
	if (den != 0)
	{
		denominator = den;
	}
}

void Fraction::reduce()
{
	int a = (numerator < 0) ? -numerator : numerator;
	int b = (denominator < 0) ? -denominator : denominator;

	while (b != 0)
	{
		int tmp = b;
		b = a % b;
		a = tmp;
	}

	if (a > 0)
	{
		numerator /= a;
		denominator /= a;
	}

	if (denominator < 0)
	{
		numerator = -numerator;
		denominator = -denominator;
	}
}

void Fraction::print() const
{
	cout << numerator << "/" << denominator << endl;
}

Fraction Fraction::operator+(const Fraction& other) const
{
	int newNum = numerator * other.denominator + other.numerator * denominator;
	int newDen = denominator * other.denominator;
	Fraction result(newNum, newDen);
	result.reduce();
	return result;
}

Fraction Fraction::operator-(const Fraction& other) const
{
	int newNum = numerator * other.denominator - other.numerator * denominator;
	int newDen = denominator * other.denominator;
	Fraction result(newNum, newDen);
	result.reduce();
	return result;
}

Fraction Fraction::operator*(const Fraction& other) const
{
	int newNum = numerator * other.numerator;
	int newDen = denominator * other.denominator;
	Fraction result(newNum, newDen);
	result.reduce();
	return result;
}

Fraction Fraction::operator/(const Fraction& other) const
{
	int newNum = numerator * other.denominator;
	int newDen = denominator * other.numerator;
	Fraction result(newNum, newDen);
	result.reduce();
	return result;
}

bool Fraction::operator==(const Fraction& other) const
{
	return (numerator * other.denominator) == (other.numerator * denominator);
}

bool Fraction::operator!=(const Fraction& other) const
{
	return !(*this == other);
}

bool Fraction::operator<(const Fraction& other) const
{
	return (numerator * other.denominator) < (other.numerator * denominator);
}

bool Fraction::operator<=(const Fraction& other) const
{
	return !(*this > other);
}

bool Fraction::operator>(const Fraction& other) const
{
	return other < *this;
}

bool Fraction::operator>=(const Fraction& other) const
{
	return !(*this < other);
}

Fraction::operator double() const
{
	return (double)numerator / denominator;
}
