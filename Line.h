//==============================================
// Name:           Abdalla Aden
// Student Number: 021720057
// Email:          aaaden1@myseneca.ca
// Section:        NDD
// Date:           Jul 21 2021
//==============================================
// Workshop 08 
//==============================================
#ifndef SDDS_LINE_H
#define SDDS_LINE_H

#include <iostream>
#include "LblShape.h"

namespace sdds {

	class Line : public LblShape {
		unsigned int m_length;

	public:
		Line();
		Line(const char* label, unsigned int length);
		// ~Line();
		std::istream& getSpecs(std::istream& istr);
		std::ostream& draw(std::ostream& ostr)const;
	};

}
#endif // !1

