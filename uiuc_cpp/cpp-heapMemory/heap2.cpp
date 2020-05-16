#include <iostream>
#include "Cube.h"

using my_cube::Cube;

int main(){
    Cube *c1 = new Cube;
    Cube *c2 = c1; 
    
    c2 -> setLength(4.0);    

    delete c2;

    //delete c1; // will give error

}