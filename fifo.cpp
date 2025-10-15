#include "fifo.hpp"

void Fifo_simplest::add_to_fifo(int element_i){
    if(roar<fifo_lenght){
        the_fifo_simple[roar] = element_i;
        roar++;
        Fifo_simplest::print_fifo();
        return;
    }
    std::cout << "the fifo is full" << std::endl;
    Fifo_simplest::print_fifo();
}

int Fifo_simplest::remove_from_fifo(){
    int element_o = the_fifo_simple[front];
    if(front<roar){
        the_fifo_simple[front] = 0;
        front++;
        Fifo_simplest::print_fifo();
        return element_o;
    }
    std::cout << "fifo is empty" << std::endl;
    Fifo_simplest::print_fifo();
    return element_o;
}

void Fifo_simplest::print_fifo(){
    std::cout << "[";
    for(int i=0; i<fifo_lenght-2; i++){
        std::cout << the_fifo_simple[i];
        std::cout << ",";
    };
    std::cout << the_fifo_simple[fifo_lenght-1];
    std::cout << "]" << std::endl;
};

Fifo_simplest::Fifo_simplest(){
    the_fifo_simple.fill(0);
};
Fifo_simplest::~Fifo_simplest(){};