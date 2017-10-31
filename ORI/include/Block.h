#ifndef BLOCK_H
#define BLOCK_H
#include "Register.h"
#include "Field.h"
using namespace std;

class Block {

    public:
        Block();
        virtual ~Block();
        bool add_register(Register reg);
        bool remove_register(int position);
        Register get_register(int position);
        int how_many_registers();
        void get_register_array(Register *ptr);
        int* get_removed();
        string get_filling();

    protected:

    private:
        Register register_1 = Register();
        Register register_2 = Register();
        Register register_3 = Register();
        Register register_4 = Register();
        Register register_5 = Register();
//        *Register register_array[5] = {&register_1, &register_2, &register_3, &register_4, &register_5};
        int number_of_registers;
        int removed[5];
        string filling;

};

#endif // BLOCK_H
