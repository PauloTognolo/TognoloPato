#ifndef REGISTER_H
#define REGISTER_H
#include "Field.h"

using namespace std;

class Register {

    public:
        Register();
        virtual ~Register();
        string get_field(int type);
        bool set_field(int type, string input);
        void get_field_array(Field *ptr);

    protected:

    private:
        Field name = Field(0);
        Field artist = Field(1);
        Field album = Field(2);
        Field year = Field(3);
        Field duration = Field(4);
//        *Field field_array[5] = {&name, &artist, &album, &year, &duration};

};

#endif // REGISTER_H
