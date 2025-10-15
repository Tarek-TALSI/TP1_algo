#include "pile_table.hpp"
#include <iostream>
#include <array>

void Stack::add_to_stack(int element_i){
    if(last_in_index<stack_lenght-1){
        last_in_index++;
        the_stack[last_in_index] = element_i;
        Stack::print_stack();
        return;
    };
    std::cout << "nothing done, stack is full" << std::endl;
    Stack::print_stack();
};

int Stack::remove_from_stack(){
    if(last_in_index >= 0){
        int element_o = the_stack[last_in_index];
        the_stack[last_in_index] = 0;
        last_in_index--;
        Stack::print_stack();
        return element_o;
    };
    std::cout << "stack is already empty" << std::endl;
    Stack::print_stack();
    return -1;
};

Stack::Stack(){
    last_in_index = -1;
    the_stack.fill(0);
};
Stack::~Stack(){};

void Stack::print_stack(){
    std::cout << "[";
    for(int i=0; i<stack_lenght; i++){
        std::cout << the_stack[i];
    };
    std::cout << "]" << std::endl;
};