#include <iostream>
#include "Cube.h"


int main(){
    
    Cube c;
    
    c.setLength(3.48);
    double vol = c.getVolume();
    
    std::cout << "volume: "<< vol << std::endl;
}