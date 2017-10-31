#ifndef FIELD_H
#define FIELD_H
#include <iostream>
#include <stdio.h>

using namespace std;


class Field {

    public:
        Field(int t);
        virtual ~Field();
        int get_type();
        string get_content();
        bool set_content(string input);

    protected:

    private:
        int type;
        string content;

};

#endif // FIELD_H
