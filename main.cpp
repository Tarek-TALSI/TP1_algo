#include "main.hpp"
#include "td1.hpp"
#include <iostream>

int main(){
    Stack stack_1;
    stack_1.remove_from_stack();
    stack_1.add_to_stack(4);
    stack_1.add_to_stack(6);
    stack_1.add_to_stack(8);
    stack_1.remove_from_stack();
    stack_1.add_to_stack(3);
    for(int i=0; i<17; i++){
        stack_1.add_to_stack(1);
    };
    for(int i=0; i<17; i++){
        stack_1.remove_from_stack();
    };

    return 0;
}