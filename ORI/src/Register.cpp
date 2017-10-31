#include "Register.h"
#include "Field.h"

using namespace std;

Register::Register() {
    //Vazio
}

Register::~Register() {
    //Vazio
}

string Register::get_field(int type) {

    string retorno;

    switch t {

        //Nome (35 bytes)
        case 0:
            retorno = name.get_content();
            break;

        //Artista (23 bytes)
        case 1:
            retorno = artist.get_content();
            break;

        //Album (34 bytes)
        case 2:
            retorno = album.get_content();
            break;

        //Ano (4 bytes)
        case 3:
            retorno = year.get_content();
            break;

        //Duracao (4 bytes)
        case 4:
            retorno = duration.get_content();
            break;

        default:
            retorno = "ERRO";
            break;

    }

    return retorno;

}


bool Register::set_field(input type, string input) {

    bool retorno = false;

    switch type {

    //Nome (35 bytes)
    case 0:
        retorno = name.set_content(input);
        break;

    //Artista (23 bytes)
    case 1:
        retorno = artist.set_content(input);
        break;

    //Album (34 bytes)
    case 2:
        retorno = album.set_content(input);
        break;

    //Ano (4 bytes)
    case 3:
        retorno = year.set_content(input);
        break;

    //Duracao (4 bytes)
    case 4:
        retorno = duration.set_content(input);
        break;

    default:
        retorno = false;
        break;

    }

    return retorno;

}

//void Register::get_field_array(Field *ptr) {
//    ptr = &field_array[0];
//}

