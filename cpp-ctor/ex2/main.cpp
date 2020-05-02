#include "Cube.h"
#include <iostream>

int main(){
    my_cube::Cube c(2);
    std::cout << "Volume " << c.getVolume() << std::endl;
    
    return 0;
}