#ifndef SDDS_LABEL_MAKER_H
#define SDDS_LABEL_MAKER_H
#include <iostream>
#include "Label.h"

namespace sdds {
    class LabelMaker {
        int m_noOfLabels;
        Label* m_label;

    public:
        LabelMaker(int noOfLabels);  
        void readLabels();
        void printLabels();
        ~LabelMaker();

    };
}

#endif // !SDDS_LABEL_MAKER_H
