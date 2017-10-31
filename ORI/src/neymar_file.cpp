#include "Neymar_file.h"
using namespace std;

Neymar_file::neymar_file(FILE *p) {
    source = p;
}

Neymar_file::~neymar_file() {
    source = NULL;
}

void Neymar_file::create_block(Block b) {
    
    char to_be_written[512];
    
    for(int i = 0; i < 500; i++)
        to_be_written[i] = '_';
    
    for(int i = 500; i < 506; i++)
        to_be_written[i] = 0;
    
    for(int i = 506; i < 511; i++)
        to_be_written[i] = '_';
    
    to_be_written[512] = '#';
    
    fseek(source, 0, SEEK_END);
    fwrite(to_be_written, sizeof(char), sizeof(to_be_written), source);
    fseek(source, 0, SEEK_SET);
    
}

bool Neymar_file::insert_register(Register reg) {
    
    
    
}
