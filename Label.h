#ifndef SDDS_LABEL_H
#define SDDS_LABEL_H
#include <iostream>
namespace sdds {
    class Label {
        char m_frame[9];
        char* m_content;
        void setName(const char* name);
        void setEmpty();
        
    public:

        Label();
        Label(const char* frameArg);
        Label(const char* frameArg, const char* content);
        ~Label();
        void readLabel();
        std::ostream& printLabel()const;

    };
}

#endif // !SDDS_LABEL_H
