#include "tas_binaire_min.h"

std::vector<int> heap_min; 


void inserer_min(int v) {
    heap_min.push_back(v);
    int index = heap_min.size() - 1;
    int parent = (index - 1) / 2;

    
    while (index > 0 && heap_min[parent] > heap_min[index]) {
        std::swap(heap_min[parent], heap_min[index]);
        index = parent;
        parent = (index - 1) / 2;
    }
}


int extraire_min() {
    if (heap_min.empty()) {
        std::cerr << "Erreur : tas vide !" << std::endl;
        return -1;
    }

    int min = heap_min[0];
    heap_min[0] = heap_min.back();
    heap_min.pop_back();

    int index = 0;
    int size = heap_min.size();

    
    while (true) {
        int gauche = 2 * index + 1;
        int droite = 2 * index + 2;
        int plusPetit = index;

        if (gauche < size && heap_min[gauche] < heap_min[plusPetit])
            plusPetit = gauche;
        if (droite < size && heap_min[droite] < heap_min[plusPetit])
            plusPetit = droite;

        if (plusPetit != index) {
            std::swap(heap_min[index], heap_min[plusPetit]);
            index = plusPetit;
        } else {
            break;
        }
    }

    return min;
}