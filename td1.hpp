#include <stdlib.h>
#include <iostream>
#include <array>

#define stack_lenght 16

class Stack {
    private:
        std::array<int, stack_lenght> the_stack;
        int last_in_index = -1;

    public:
        Stack();
        ~Stack();

        void add_to_stack(int element_i);

        int remove_from_stack();

        void print_stack();
};