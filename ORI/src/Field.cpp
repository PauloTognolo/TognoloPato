#include "Field.h"
using namespace std;

Field::Field(int t) {

    switch t {

        //Nome (35 bytes)
        case 0:
            content = "___________________________________";
            break;

        //Artista (23 bytes)
        case 1:
            content = "_______________________";
            break;

        //Album (34 bytes)
        case 2:
            content = "__________________________________";
            break;

        //Ano (4 bytes)
        case 3:
            content = "____";
            break;

        //Duracao (4 bytes)
        case 4:
            content = "____";
            break;

        default:
            content = "";
            break;

    }

    if(t >= 0 && t < 5)
        type = t;

    else
        type = -1;

}

Field::~Field() {
    //Vazio
}

int Field::get_type() {
    return type;
}

string Field::get_content() {
    return content;
}

bool Field::set_content(string input) {

    bool retorno = false;

    switch input {

        //Nome (35 bytes)
        case 0:
            if(strlen(input) <= 35) {
                content = input;
                retorno = true;
            }
            break;

        //Artista (23 bytes)
        case 1:
            if(strlen(input) <= 23) {
                content = input;
                retorno = true;
            }
            break;

        //Album (34 bytes)
        case 2:
            if(strlen(input) <= 34) {
                content = input;
                retorno = true;
            }
            break;

        //Ano (4 bytes)
        case 3:
            if(strlen(input) <= 4) {
                content = input;
                retorno = true;
            }
            break;

        //Duracao (4 bytes)
        case 4:
            if(strlen(input) <= 4) {
                content = input;
                retorno = true;
            }
            break;

        default:
            retorno = false;
            break;

    }

    return retorno;

}
