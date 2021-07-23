//==============================================
// Name:           Abdalla Aden
// Student Number: 021720057
// Email:          aaaden1@myseneca.ca
// Section:        NDD
// Date:           Jul 21 2021
//==============================================
// Workshop 08 
//==============================================
#ifndef SDDS_RECTANGLE_H
#define SDDS_RECTANGLE_H

#include <iostream>
#include "LblShape.h"
using namespace std;
namespace sdds {

	class Rectangle : public LblShape {
		unsigned int m_width = 0 ;
		unsigned int m_height = 0;
	public:
		Rectangle();
		Rectangle(const char* label, unsigned int width, unsigned int height);
		//~Rectangle();
		std::istream& getSpecs(std::istream& istr);
		std::ostream& draw(std::ostream& ostr)const;
	};

}
#endif