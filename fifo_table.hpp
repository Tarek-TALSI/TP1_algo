#include <stdlib.h>
#include <iostream>
#include <array>

#define fifo_lenght 10

class Fifo {
    private:
        std::array<int, fifo_lenght> the_fifo;
        int front = 0;
        int roar = 0;
        int curr_lenght;

    public:
        Fifo();
        ~Fifo();

        void add_to_fifo(int element_i);

        int remove_from_fifo();

        void print_fifo();
};