//==============================================
// Name:           Abdalla Aden
// Student Number: 021720057
// Email:          aaaden1@myseneca.ca
// Section:        NDD
// Date:           Jul 21 2021
//==============================================
// Workshop 08 
//==============================================
#ifndef SDDS_LBLSHAPE_H_
#define SDDS_LBLSHAPE_H_
#include <iostream>

#include "Shape.h"
namespace sdds {

	class LblShape: public Shape {
		char* m_label = nullptr;
	
	public:
		LblShape();
		LblShape(const char* label);
		std::istream& getSpecs(std::istream& istr);
		~LblShape();
		LblShape(const LblShape&) = delete;
		LblShape& operator=(const LblShape&) = delete;
	protected:
		const char* label()const;
	};
	/*std::ostream& operator<<(std::ostream& ostr, const Shape& P);
	std::istream& operator>>(std::istream& istr, Shape& P);*/

}
#endif // !1

