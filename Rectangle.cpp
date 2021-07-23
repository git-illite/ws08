//==============================================
// Name:           Abdalla Aden
// Student Number: 021720057
// Email:          aaaden1@myseneca.ca
// Section:        NDD
// Date:           Jul 21 2021
//==============================================
// Workshop 08 
//==============================================
#include "Rectangle.h"
#include <iostream>
#include <iomanip>
#include <cstring>
#include "LblShape.h"
using namespace std;
namespace sdds {
	Rectangle::Rectangle()
	{
		m_width = 0;
		m_height = 0;
	}

	Rectangle::Rectangle(const char* label, unsigned int width, unsigned int height):LblShape(label)
	{
		unsigned int tempheight = (strlen(LblShape::label()));
		if (height < 3 || width < tempheight + 2 )
		{
			m_width = 0;
			m_height = 0;	
		}
		
		else {
		m_width = width;
		m_height = height;
		}
	}

	istream& Rectangle::getSpecs(std::istream& istr)
	{
		LblShape::getSpecs(istr);
		istr >> m_width;
		istr.ignore(1000, ',');
		istr >> m_height;
		istr.ignore(1000, '\n');

		return istr;
	}

	ostream& Rectangle::draw(std::ostream& ostr) const
	{
		if (m_height != 0 && m_width != 0) {
			ostr << "+";
			ostr << fixed;
			ostr << setfill('-');
			ostr << setw(m_width - 1);
			ostr << "+" << endl;
			
			ostr << "|";
			ostr << fixed;
			ostr << left;
			ostr << setfill(' ');
			ostr << setw(m_width - 2);
			ostr << label();
			ostr << "|" << endl;
			
			unsigned int i = 0;
			for (i = 2; i < m_height - 1; i++) {
				ostr << "|";
				ostr << fixed;
				ostr << right;
				ostr << setfill(' ');
				ostr << setw(m_width - 1);
				ostr << "|" << std::endl;
			}
			ostr << "+";
			ostr << fixed;
			ostr << setfill('-');
			ostr << setw(m_width - 1);
			ostr << "+";
		}
		return ostr;
	}

}