#include "Cube.h"

namespace my_cube{
    Cube::Cube(){
        length_ = 1;
    }
    double Cube::getVolume(){

        return length_* length_* length_;
    }

    double Cube::getSurfaceArea(){
    
        return 6 * length_ * length_;
    }

    void Cube::setLength(double length){
    
        length_ = length;
    }
}