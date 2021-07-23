//==============================================
// Name:           Abdalla Aden
// Student Number: 021720057
// Email:          aaaden1@myseneca.ca
// Section:        NDD
// Date:           Jul 21 2021
//==============================================
// Workshop 08 
//==============================================
#include <iostream>
#include "Shape.h"
namespace sdds {
	Shape::~Shape()
	{
	}
	std::ostream& operator<<(std::ostream& ostr, const Shape& P)
	{
		return P.draw(ostr);
	}
	std::istream& operator>>(std::istream& istr, Shape& P)
	{
		return P.getSpecs(istr);
	}
}