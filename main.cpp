#include "main.hpp"
#include "pile_table.hpp"
#include <iostream>
#include "pile_chaine.h"
#include "fifo_table.hpp"
#include "fifo.hpp"
#include "tas_binaire.h"
#include "tas_binaire_min.h"
#include "vector"

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

    /*//** TEST PILE AVEC UNE LISTE CHAINEE (exo 1.2) **
    StackInit();
    Push(4);
    Push(6);
    Push(8);
    Pop();
    Push(3);

    for (int i = 0; i < 5; i++) {
        Push(i);
    }

    
    std::cout << "Pile actuelle (haut -> bas) : ";
    TNode* current = Top;
    while (current != nullptr) {
        std::cout << current->Value << " ";
        current = current->Link;
    }
    std::cout << std::endl;

    
    while ((Top == nullptr) == false) {
        Pop();
    }

    // Vérifie que c’est vide
    std::cout << "Après vidage, Top = " << Top << std::endl;
    return 0;
    */

    /*//**  TEST FIFO DE BASE **
    std::cout << "TEST FIFO DE BASE (exo 2.1)" << std::endl;
    Fifo_simplest fifo;
    fifo.remove_from_fifo();
    for(int i=0;i<fifo_lenght+2;i++){
        fifo.add_to_fifo(i+1);
    }
    for(int i=0;i<int(fifo_lenght/2);i++){
        fifo.remove_from_fifo();
    }
    for(int i=int(fifo_lenght/2)+1;i<fifo_lenght;i++){
        fifo.add_to_fifo(i+1);
        fifo.remove_from_fifo();
    }
    return 0;*/

    //**  TEST FIFO AVEC LISTE CIRCULAIRE **
    /*std::cout << "TEST FIFO AVEC LISTE CIRCULAIRE (exo 2.2)" << std::endl;
    Fifo fifo;
    fifo.remove_from_fifo();
    for(int i=0;i<fifo_lenght+2;i++){
        fifo.add_to_fifo(i+1);
    }
    for(int i=0;i<int(fifo_lenght/2);i++){
        fifo.remove_from_fifo();
    }
    for(int i=int(fifo_lenght/2)+1;i<fifo_lenght;i++){
        fifo.add_to_fifo(i+1);
        fifo.remove_from_fifo();
    }
    return 0;*/


    // TEST TAS BINAIRE

    /*
     std::vector<int> valeurs = {27, 12, 8, 45, 17, 63, 100, 5, 75, 90, 26, 32, 188, 95};

    // Test du TAS-MAX 
    for (int v : valeurs) inserer(v);

    std::cout << "TAS-MAX après insertion : ";
    for (int x : heap) std::cout << x << " ";
    std::cout << "\nExtraction décroissante : ";
    while (!heap.empty()) std::cout << extraire_max() << " ";
    std::cout << "\n\n";

    // Test du TAS-MIN
    for (int v : valeurs) inserer_min(v);

    std::cout << "TAS-MIN après insertion : ";
    for (int x : heap_min) std::cout << x << " ";
    std::cout << "\nExtraction croissante : ";
    while (!heap_min.empty()) std::cout << extraire_min() << " ";
    std::cout << std::endl;
    */
}
