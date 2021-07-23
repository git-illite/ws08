//==============================================
// Name:           Abdalla Aden
// Student Number: 021720057
// Email:          aaaden1@myseneca.ca
// Section:        NDD
// Date:           Jul 21 2021
//==============================================
// Workshop 08 
//==============================================
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <string>
#include <fstream>
#include "Shape.h"
#include "LblShape.h"
using namespace std;
namespace sdds {
	/*std::ostream& operator<<(std::ostream& ostr, const Shape& P)
	{
		return P.draw(ostr);
	}
	std::istream& operator>>(std::istream& istr, Shape& P)
	{
		return P.getSpecs(istr);
	}*/
	const char* LblShape::label() const
	{
		return m_label;
	}
	LblShape::LblShape()
	{
	}
	LblShape::LblShape(const char* label)
	{
		
		if (label != nullptr) {
			delete[] m_label;
			m_label = new char[strlen(label) + 1];
			strcpy(m_label, label);
		}
	}
	std::istream& LblShape::getSpecs(std::istream& istr)
	{
		string text;
		getline(istr, text, ',');
		delete[] m_label;
		m_label = new char[strlen(text.c_str())+1];
		strcpy(m_label, text.c_str());
		return istr;
	}
	LblShape::~LblShape()
	{
		delete[] m_label;
		m_label = nullptr;
	}
}


