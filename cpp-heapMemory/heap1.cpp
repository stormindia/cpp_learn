#include <iostream>
#include "Cube.h"

using my_cube::Cube;

int main(){
    int *p = new int;
    Cube *c = new Cube;
    
    *p = 42;
    (*c).setLength(4.0);    // c -> setLength(4.0) --> identical
    
    delete c;
    c = nullptr;
    delete p;
    p = nullptr;
    return 0;
    
}