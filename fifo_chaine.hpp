#include <stdlib.h>
#include <iostream>

struct struct_node;
typedef struct_node* Pnode;
typedef struct struct_node{
    int value;
    Pnode link;
};

class Fifo_chaine {
    private :
        Pnode front;
        Pnode roar;

    public :
        Fifo_chaine();
        ~Fifo_chaine();

        void add_to_fifo(int element_i);

        int remove_from_fifo();

        void print_fifo();
};