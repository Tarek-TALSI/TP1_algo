#include "fifo_table.hpp"

void Fifo::add_to_fifo(int element_i){
    if(curr_lenght < fifo_lenght-1){
        the_fifo[roar] = element_i;
        roar = (roar==fifo_lenght-1) ? 0 : roar+1;
        curr_lenght++;
        Fifo::print_fifo();
        return;
    };
    roar--;
    curr_lenght--;
    std::cout << "the fifo is full" << std::endl;
    Fifo::print_fifo();
    return;
}

int Fifo::remove_from_fifo(){
    int element_o = the_fifo[front];
    if(curr_lenght > 0){
        the_fifo[front] = 0;
        front = (front==fifo_lenght-1) ? 0 : front+1;
        curr_lenght = (curr_lenght<fifo_lenght-1) ? curr_lenght-1 : curr_lenght;
        Fifo::print_fifo();
        return element_o;
    }
    std::cout << "fifo is empty" << std::endl;
    Fifo::print_fifo();
    return 0;
}

void Fifo::print_fifo(){
    std::cout << "[";
    for(int i=0; i<fifo_lenght-2; i++){
        std::cout << the_fifo[i];
        std::cout << ",";
    };
    std::cout << the_fifo[fifo_lenght-1];
    std::cout << "]" << std::endl;
};

Fifo::Fifo(){
    curr_lenght = 0;
    the_fifo.fill(0);
};
Fifo::~Fifo(){};