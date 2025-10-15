#include <iostream>
#include "1.2.h"

struct TNode;        
typedef TNode* PNode; 

struct TNode {
    int Value;
    PNode Link;
};

TNode* Top = PNode();
void StackInit() {
    Top = nullptr;
}
void Push(int V) {
    PNode P = new TNode();
    P->Value = V;
    P->Link = Top;
    Top = P;
}
int Pop() {
    if (Top == nullptr) {
        std::cout << "Stack is empty" << std::endl;
        return -1;
    } else {
        int ret = Top->Value;
        PNode P = Top->Link;
        delete Top;
        
        Top = P;
        return ret;
    }
}





