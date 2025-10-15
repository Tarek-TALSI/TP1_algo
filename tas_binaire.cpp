#include "tas_binaire.h"
#include <iostream>
#include <vector>


std::vector<int> heap;

void inserer(int v) {
    heap.push_back(v);
    int index = heap.size() - 1;
    int parent;
    while (index >0) {
        if (v%2 ==0){
            int parent = (index /2) - 1;
        }
        else{
            int parent = (index -1 ) / 2;
        }
        
        if (heap[parent] < heap[index]) {
            std::swap(heap[parent], heap[index]);
            index = parent;
        } else {
            break;
        }
        }
    }
    int extraire_max(){
        int max = heap[0];

    }
