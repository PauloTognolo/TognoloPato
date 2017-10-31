#ifndef NEYMAR_FILE_H
#define NEYMAR_FILE_H
using namespace std;

class Neymar_file {
    
    public:
        Neymar_file(FILE *p);
        virtual ~Neymar_file();
        void create_block(Block b);
        bool insert_register(Register reg);
        Register search_register(string key);
        bool remove_register(string key);
        void list_registers();
        bool compress();

    protected:

    private:
        FILE *source;
    
};

#endif // NEYMAR_FILE_H
