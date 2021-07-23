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
#include "LblShape.h"
#include "Line.h"
namespace sdds {
	Line::Line() :LblShape()
	{
		m_length = 0;

	}
	Line::Line(const char* label, unsigned int length): LblShape(label)
	{
		m_length = length;
	}
	
	std::istream& Line::getSpecs(std::istream& istr)
	{
		LblShape::getSpecs(istr);
		istr >> m_length;
		istr.ignore(1000, '\n');
		return istr;
	}

	std::ostream& Line::draw(std::ostream& ostr) const
	{
		if (m_length > 0 && label() != nullptr) {
			ostr << label() <<"\n";
			unsigned int i = 0;
			for (i = 0; i < m_length; i++) ostr << "=";
		}
		return ostr;
	}
	
}