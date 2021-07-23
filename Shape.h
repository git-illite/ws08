//==============================================
// Name:           Abdalla Aden
// Student Number: 021720057
// Email:          aaaden1@myseneca.ca
// Section:        NDD
// Date:           Jul 21 2021
//==============================================
// Workshop 08 
//==============================================
#ifndef SDDS_SHAPE_H_
#define SDDS_SHAPE_H_
#include <iostream>
namespace sdds {

	class Shape {

	public:
		virtual std::ostream& draw(std::ostream& ostr)const=0;
		virtual std::istream& getSpecs(std::istream& istr) = 0;
		virtual ~Shape();
	};
	std::ostream& operator<<(std::ostream& ostr,const Shape& P);
	std::istream& operator>>(std::istream& istr,Shape& P);

}
#endif // !1
