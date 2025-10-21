#include "tas_binaire.h"


std::vector<int> heap;


void inserer(int v) {
    heap.push_back(v);                  
    int index = heap.size() - 1;         
    int parent = (index - 1) / 2;        

    
    while (index > 0 && heap[parent] < heap[index]) {
        std::swap(heap[parent], heap[index]);
        index = parent;
        parent = (index - 1) / 2;
    }
}


int extraire_max() {
    if (heap.empty()) {
        std::cerr << "Erreur : tas vide !" << std::endl;
        return -1;
    }

    int max = heap[0];                   
    heap[0] = heap.back();               
    heap.pop_back();                     

    int index = 0;
    int size = heap.size();

    
    while (true) {
        int gauche = 2 * index + 1;
        int droite = 2 * index + 2;
        int plusGrand = index;

        if (gauche < size && heap[gauche] > heap[plusGrand])
            plusGrand = gauche;
        if (droite < size && heap[droite] > heap[plusGrand])
            plusGrand = droite;

        if (plusGrand != index) {
            std::swap(heap[index], heap[plusGrand]);
            index = plusGrand;
        } else {
            break;
        }
    }

    return max;
}
