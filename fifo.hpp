#include <stdlib.h>
#include <iostream>
#include <array>

#define fifo_lenght 10

class Fifo_simplest {
    private:
        std::array<int, fifo_lenght> the_fifo_simple;
        int front = 0;
        int roar = 0;

    public:
        Fifo_simplest();
        ~Fifo_simplest();

        void add_to_fifo(int element_i);

        int remove_from_fifo();

        void print_fifo();
};