#include "fifo_chaine.hpp"

void Fifo_chaine::add_to_fifo(int element_i){
    Pnode new_roar = new struct_node();
    roar->link = new_roar;
    roar = new_roar->link;
    roar->value = element_i;
}

int Fifo_chaine::remove_from_fifo(){
    Pnode new_front = front->link;
    int element_o = front->value;
    delete(front);
}

Fifo_chaine::Fifo_chaine(){
    Pnode init_node = new struct_node();
    front = init_node;
    roar = init_node;
}

Fifo_chaine::~Fifo_chaine(){}