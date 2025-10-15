#include "main.hpp"
#include "pile_table.hpp"
#include <iostream>
#include "1.2.h"

int main(){
    /*
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
    */

    //** TEST PILE AVEC UNE LISTE CHAINEE (exo 1.2) **
    std::cout << "TEST PILE AVEC UNE LISTE CHAINEE (exo 1.2)" << std::endl;
    StackInit();
    Pop();
    Push(4);
    Push(6);
    Push(8);
    Pop();
    Push(3);
    for(int i=0; i<17; i++){
        Push(i);
    };
    for(int i=0; i<17; i++){
        Pop();
    };
    return 0;
}