#include "Block.h"
#include "Register.h"
#include "Field.h"
using namespace std;

Block::Block() {
    number_of_registers = 0;
    filling = "_____#";
    removed = {0, 0, 0, 0, 0};
}

Block::~Block() {
    //Vazio
}

bool add_register(Register reg) {
    
    bool verificacao[5] = {false, false, false, false, false}, flag = true, logic_removal_flag = false;
    int aux;
    
    //Verifica se o bloco esta cheio
    if(number_of_registers >= 5)
        return false;
    
    //Passando daqui, temos duas alternativas:
    //>Existe alguma remocao logica
    //>Existem espacos de registro vazios
    
    //Verifica a existencia de remocoes logicas
    for(int i = 0; i < 5; i++) {
        if(removed[i] == 1) {
            aux = i;
            logic_removal_flag = true;
        }
    }
    
    //Entra nesse if se existe alguma remocao logica no bloco. aux indica qual registro a possui
    if(logic_removal_flag == true) {
        
        switch aux {
            
            case 0:
                verificacao[0] = register_1.set_field(0, reg.get_field(0));
                verificacao[1] = register_1.set_field(1, reg.get_field(1));
                verificacao[2] = register_1.set_field(2, reg.get_field(2));
                verificacao[3] = register_1.set_field(3, reg.get_field(3));
                verificacao[4] = register_1.set_field(4, reg.get_field(4));
                verificacao[5] = register_1.set_field(5, reg.get_field(5));
                break;
            
            case 1:
                verificacao[0] = register_2.set_field(0, reg.get_field(0));
                verificacao[1] = register_2.set_field(1, reg.get_field(1));
                verificacao[2] = register_2.set_field(2, reg.get_field(2));
                verificacao[3] = register_2.set_field(3, reg.get_field(3));
                verificacao[4] = register_2.set_field(4, reg.get_field(4));
                verificacao[5] = register_2.set_field(5, reg.get_field(5));
                break;
            
            case 2:
                verificacao[0] = register_3.set_field(0, reg.get_field(0));
                verificacao[1] = register_3.set_field(1, reg.get_field(1));
                verificacao[2] = register_3.set_field(2, reg.get_field(2));
                verificacao[3] = register_3.set_field(3, reg.get_field(3));
                verificacao[4] = register_3.set_field(4, reg.get_field(4));
                verificacao[5] = register_3.set_field(5, reg.get_field(5));
                break;
            
            case 3:
                verificacao[0] = register_4.set_field(0, reg.get_field(0));
                verificacao[1] = register_4.set_field(1, reg.get_field(1));
                verificacao[2] = register_4.set_field(2, reg.get_field(2));
                verificacao[3] = register_4.set_field(3, reg.get_field(3));
                verificacao[4] = register_4.set_field(4, reg.get_field(4));
                verificacao[5] = register_4.set_field(5, reg.get_field(5));
                break;
            
            case 4:
                verificacao[0] = register_4.set_field(0, reg.get_field(0));
                verificacao[1] = register_4.set_field(1, reg.get_field(1));
                verificacao[2] = register_4.set_field(2, reg.get_field(2));
                verificacao[3] = register_4.set_field(3, reg.get_field(3));
                verificacao[4] = register_4.set_field(4, reg.get_field(4));
                verificacao[5] = register_4.set_field(5, reg.get_field(5));
                break;
            
        }
        
    }
    
    //Se chegar aqui, existe um espaco livre no bloco que nunca foi preenchido
    else {
    
        switch number_of_registers {
            
            case 0:
                verificacao[0] = register_1.set_field(0, reg.get_field(0));
                verificacao[1] = register_1.set_field(1, reg.get_field(1));
                verificacao[2] = register_1.set_field(2, reg.get_field(2));
                verificacao[3] = register_1.set_field(3, reg.get_field(3));
                verificacao[4] = register_1.set_field(4, reg.get_field(4));
                verificacao[5] = register_1.set_field(5, reg.get_field(5));
                break;
            
            case 1:
                verificacao[0] = register_2.set_field(0, reg.get_field(0));
                verificacao[1] = register_2.set_field(1, reg.get_field(1));
                verificacao[2] = register_2.set_field(2, reg.get_field(2));
                verificacao[3] = register_2.set_field(3, reg.get_field(3));
                verificacao[4] = register_2.set_field(4, reg.get_field(4));
                verificacao[5] = register_2.set_field(5, reg.get_field(5));
                break;
            
            case 2:
                verificacao[0] = register_3.set_field(0, reg.get_field(0));
                verificacao[1] = register_3.set_field(1, reg.get_field(1));
                verificacao[2] = register_3.set_field(2, reg.get_field(2));
                verificacao[3] = register_3.set_field(3, reg.get_field(3));
                verificacao[4] = register_3.set_field(4, reg.get_field(4));
                verificacao[5] = register_3.set_field(5, reg.get_field(5));
                break;
            
            case 3:
                verificacao[0] = register_4.set_field(0, reg.get_field(0));
                verificacao[1] = register_4.set_field(1, reg.get_field(1));
                verificacao[2] = register_4.set_field(2, reg.get_field(2));
                verificacao[3] = register_4.set_field(3, reg.get_field(3));
                verificacao[4] = register_4.set_field(4, reg.get_field(4));
                verificacao[5] = register_4.set_field(5, reg.get_field(5));
                break;
            
            case 4:
                verificacao[0] = register_4.set_field(0, reg.get_field(0));
                verificacao[1] = register_4.set_field(1, reg.get_field(1));
                verificacao[2] = register_4.set_field(2, reg.get_field(2));
                verificacao[3] = register_4.set_field(3, reg.get_field(3));
                verificacao[4] = register_4.set_field(4, reg.get_field(4));
                verificacao[5] = register_4.set_field(5, reg.get_field(5));
                break;
            
        }
        
    }
    
    for(int i = 0; i < 5; i++) {
        if(verificacao[i] == false)
            flag = false;
    }
    
    //Se flag == true, houve insercao e deve-se incrementar o numero de registros do bloco
    if(flag == true)
        number_of_registers++;
    
    return flag;
    
}

bool Block::remove_register(int position) {
    
    if(position <= 0 && posicao > 5)
        return false;
    
    else {
        removed[position] = 1;
        number_of_registers--;
    }
    
}

//Em caso de posicao invalida, retorna o 1º registro do bloco
Register Block::get_register(int position) {
    
    switch position {
        
        case 1:
            return register_1;
        
        case 2:
            return register_2;
        
        case 3:
            return register_3;
        
        case 4:
            return register_4;
        
        case 5:
            return register_5;
        
        default:
            return register_1;
        
    }
    
}

int Block::how_many_registers() {
    return number_of_registers;
}

//void Block::get_register_array(Register *ptr) {
//    ptr = &register_array[0];
//}

*int Block::get_removed() {
    return &removed[0];
}

string Block::get_filling() {
    return filling;
}
