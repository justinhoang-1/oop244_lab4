#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include "cstring.h"
#include "Label.h"
using namespace std;

namespace sdds {

	void Label::setEmpty() {
		m_frame[9] = '\0';
		m_content = nullptr;
		strCpy(m_frame, "+-+|+-+|");
	}
	void Label::setName(const char* name) {
		int len = strLen(name);
		if (len < 71) {				
			m_content = new char[len + 1];
			strCpy(m_content, name);
		}
	}


	Label::Label() {

		setEmpty();
		strCpy(m_frame, "+-+|+-+|");
 }
	Label::Label(const char* frameArg) {
		
		setEmpty();	
		strCpy(m_frame, frameArg);
	}

	Label::Label(const char* frameArg, const char* content) {

			
			setEmpty();
			strCpy(m_frame, frameArg);
			m_content = new char[strLen(content)]+1;
			setName(content);
		
	}
	Label::~Label() {
		delete[] m_content;
		
	}
	void Label::readLabel() {

		char temp[71];
		cin.getline(temp, 71);
		setName(temp);
	}

	std::ostream& Label::printLabel()const {
		

		if (m_content) {
			int len = strLen(m_content);

			cout << m_frame[0];
			cout.fill(m_frame[1]);
			cout.width(len + 3);
			cout << m_frame[2] << endl;

			cout << m_frame[7];
			cout.fill(' ');
			cout.width(len + 3);
			cout << m_frame[3] << endl;
	
			cout << m_frame[7];
			cout << ' ';
			cout << m_content;
			cout << ' ';
			cout << m_frame[3] << endl;

			cout << m_frame[7];
			cout.fill(' ');
			cout.width(len + 3);
			cout << m_frame[3] << endl;

			cout << m_frame[6];
			cout.fill(m_frame[5]);
			cout.width(len + 3);
			cout << m_frame[4];

		}


	
		return cout;
	}

}
 