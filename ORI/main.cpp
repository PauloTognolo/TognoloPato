#include <iostream>
#include <stdio.h>
#include <string.h>
#include <Register.h>
#include <Block.h>

using namespace std;

//Operacao de criacao, retorna 1 se arquivo criado, 0 se houve erro
//Fornece-se nome do arquivo a ser criado sem .txt, e um *FILE nao inicializado
bool new_file(string filename, FILE *pointer_arq) {

    filename = filename + ".txt";
    const char *myfile = filename.c_str();
    pointer_arq = fopen(myfile, "w+");

    if (pointer_arq == NULL) {
        cout << "Erro na criacao do arquivo" << endl;
        return false;
    }

    else {
        cout << "Operacao bem sucedida" << endl;
        fclose(pointer_arq);
        return true;
    }

}

bool insertion (Register new_register)
{
    string name[5];
    string input[5];
    bool retorno[5];
    int i;
    for (i = 0; i < 5; i++)
    {
        retorno[i] = false;
    }
    name[0] = "Nome";
    name[1] = "Artista";
    name[2] = "Album";
    name[3] = "Ano";
    name[4] = "Duracao";

    for (i = 0; i < 5; i++)
    {
        while ( retorno[i] == false )
        {
            cout << "Insira "<< name[i] << " da Musica:" << endl;
            cin >> name[i];
            cout << endl;
            retorno[i] = new_register.set_field(i, name[i]);
            if (retorno[i] == false)
            {
                cout << name[i] <<" incorreto, os caracteres excedem o limite.";
            }
        }
    }

}
/*

//Operacao de pesquisa
string search(FILE *ptr, string key) {
    const char *mykey = key.c_str();
    size_t key_size = strlen(mykey);
    bool flag = false;
    int block_transition = 0; //Se múltiplo de 5, fim de bloco
    char found[100];

    //Verificação de tamanho inadequado
    if(key_size > 36 || key_size == 0)
        return "Tamanho de chave inválido";

    //Funcao de comparacao entre duas strings
    /*bool compare(FILE *ptr_nested, string key_nested) {

        size_t key_size = strlen(key_nested)
        size_t string_on_file_size = 0;
        bool flag = true;
        int offset_counter = 0;

        //Conta o tamanho da string do arquivo até o limite (36 bytes)
        //Depois desse laço, offset_counter tem o tamanho do objeto de comparação
        while(*ptr != "_" || string_on_file_size <= 36) {
            fseek(ptr_nested, 1, SEEK_CUR);
            offset_counter++;
        }

        //Atribui à variável correta o tamanho do objeto de comparação
        string_on_file_size = offset_counter;

        //Retorna o ponteiro à posição inicial do registro
        fseek(ptr, offset_counter * -1, SEEK_CUR);
        offset_counter = 0;

        //Se passar daqui, temos strings de tamanhos equivalentes
        if(key_size != string_on_file_size)
            return false;

        //Depois daqui, flag diz se as chaves são iguais ou não
        for(int i = 0; i < key_size; i++) {

            if(*ptr != key[i])
                flag = false;

            else {
                fseek(ptr, 1, SEEK_CUR);
                offset_counter++;
            }

        }

        //Retorna o ponteiro à posição inicial do registro
        fseek(ptr, offset_counter * -1, SEEK_CUR);
        offset_counter = 0;

        return flag;

    }

    //Percorre o arquivo até a primeira ocorrência da chave, ou até o fim
    while(!feof(ptr) && flag == false) {

        if(compare(ptr, key))
            flag = true;

        else {

            //Controle de blocos

            if((block_transition % 5 == 0) && (block_transition != 0))
                fseek(ptr, 100 + 12, SEEK_CUR);

            else
                fseek(ptr, 100, SEEK_CUR);

            block_transition++;

        }

    }

    if(flag == false) {
        fseek(ptr, 0, SEEK_SET);
        return "Nenhuma ocorrência para a busca foi encontrada";
    }

    else {

        //Nesse formato, a string retornada não está tratada ( _s aparentes)

        for(int i = 0; i < 100; i++)
            found[i] = getc(ptr);

        fseek(ptr, 0, SEEK_SET);

        return found;

    }

}*/

int main() {

    char choice;
    string input;
    FILE *ptr;

    cout << "Deseja criar um novo arquivo? (s/n)" << endl;
    cin >> choice;
    cout << endl;

    while(choice != 's' && choice != 'n')
    {
        cout << "Resposta invalida. Deseja criar um novo arquivo? (s/n)" << endl;
        cin >> choice;
        cout << endl;
    }

    if(choice == 's')
    {

        cout << "Entre o nome do arquivo: ";
        cin >> input;
        cout << endl;

        if(!new_file(input, ptr))
        {
            return -1;
        }

    }

    if(choice == 'n')
    {
        cout << "Insira o nome do arquivo: ";
        cin >> input;
        cout << endl;
        ptr = fopen(input.c_str(), "r+");

        if (ptr == NULL) {
            cout << "Erro na abertura do arquivo" << endl;
        }

        else
        {
        cout << "Operacao bem sucedida" << endl;
        }

    }

    return 0;

}
