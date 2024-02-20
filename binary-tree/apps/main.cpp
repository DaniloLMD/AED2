#include "../include/binary_tree.hpp"
#include <iostream>

int main(){

    Tree* t;

    for(int i = 5; i > 0; --i){
        t = Tree_Insert(t, i);
    }

    Tree_Ordered_Print(t);
    
    
    return 0;
}