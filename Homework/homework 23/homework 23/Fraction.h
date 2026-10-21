#pragma once

class Fraction
{
	int numerator;
	int denominator;
public:
	Fraction();
	Fraction(int num, int den);
	int getNumerator()const;
	int getDenominator()const;
	void setNumerator(int num);
	void setDenominator(int den);
	void reduce();
	void print()const;
	Fraction operator+(const Fraction& other)const;
	Fraction operator-(const Fraction& other)const;
	Fraction operator*(const Fraction& other)const;
	Fraction operator/(const Fraction& other)const;
	bool operator==(const Fraction& other)const;
	bool operator!=(const Fraction& other)const;
	bool operator<(const Fraction& other)const;
	bool operator<=(const Fraction& other)const;
	bool operator>(const Fraction& other)const;
	bool operator>=(const Fraction& other)const;
	operator double()const;
};