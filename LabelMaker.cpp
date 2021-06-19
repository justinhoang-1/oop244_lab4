#include <iostream>
#include "LabelMaker.h"
using namespace std;
namespace sdds
{
	LabelMaker::LabelMaker(int noOfLabels){
	
	
		m_noOfLabels = noOfLabels;
		
		m_label = new Label[m_noOfLabels];
		
	}
	void LabelMaker::readLabels(){

		cout << "Enter " << m_noOfLabels << " labels:" << endl;
		for (int i = 0; i < m_noOfLabels; i++)
		{
			cout << "Enter label number " << i + 1 << endl;
			cout << "> ";
			m_label[i].readLabel();
		}
	}
	void LabelMaker::printLabels(){
	
		for (int i = 0; i < m_noOfLabels; i++)
		{
			m_label[i].printLabel();
			cout << endl;
		}
	}
	LabelMaker::~LabelMaker(){
		delete[] m_label;

	}
}
