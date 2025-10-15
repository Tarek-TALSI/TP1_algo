#include "main.hpp"
#include "pile_table.hpp"
#include <iostream>

int main(){

    //** TEST PILE AVEC UN TABLEAU (exo 1.1) **
    std::cout << "TEST PILE AVEC UN TABLEAU (exo 1.1)" << std::endl;
    Stack stack_1;
    stack_1.remove_from_stack();
    stack_1.add_to_stack(4);
    stack_1.add_to_stack(6);
    stack_1.add_to_stack(8);
    stack_1.remove_from_stack();
    stack_1.add_to_stack(3);
    for(int i=0; i<17; i++){
        stack_1.add_to_stack(i);
    };
    for(int i=0; i<17; i++){
        stack_1.remove_from_stack();
    };



    return 0;
}