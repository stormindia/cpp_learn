#include <iostream>
#include "Cube.h"

using my_cube::Cube;

Cube *CreateUnitCube() {
    Cube cube;
    cube.setLength(15);
    return &cube;
}

void hello(){
    std::cout << "abcd" << std::endl;
}


int main(){
    
    Cube *c = CreateUnitCube();
    hello();
    double a = c -> getSurfaceArea();
    double b = c -> getVolume();
    
    std::cout << "value of a" << a << std::endl;
    std::cout << "value of b" << b << std::endl;
    
    return 0;
}