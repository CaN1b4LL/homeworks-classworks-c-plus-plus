#include "Square.h"

Square::Square()
{
	side = 1;
}

Square::Square(const Square& obj)
{
	side = obj.side;
}

Square::Square(float s)
{
	side = s;
}

float Square::getSide() const
{
	return side;
}

void Square::setSide(float s)
{
	side = s;
}

void Square::print() const
{
	cout << "Side square: " << side << endl;
}
