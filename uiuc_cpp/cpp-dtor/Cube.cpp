#include "Cube.h"
#include <iostream>

namespace my_cube {
   Cube::Cube(){
        length_ = 1;
        std::cout << "default constructor" << std::endl;
    }
    
    Cube::Cube(double length){
        length_ = length;
        std::cout << "created $ " << getVolume() <<std::endl;
    }
    
    Cube::Cube(const Cube & obj) {
        length_ = obj.length_;
        //std::cout << "copy constructor" << std::endl;
        std::cout << "created $ " << getVolume() << "via copy" <<std::endl;
    }
   
    Cube & Cube::operator=(const Cube & obj){
        std::cout << "Transformed $ " << getVolume() << " -> $ " << obj.getVolume() << std::endl;
        length_ = obj.length_;
	return *this;
	
    }

   Cube::~Cube() {

        std::cout << "destroyed $ " << getVolume() <<std::endl;
   }


// Cube & --> return type --> reference(&) of the class type(Cube)
// name --> operator=
// argument --> const Cube & obj --> const reference of the class type
// Scope resolution operator --> Cube:: --> will be set up for the defination written in Cube.h
// Since this is an assignemnt operator, it has to be defined under public member in Cube.h 
	    
    double Cube::getVolume() const {

        return length_* length_* length_;
    }

    double Cube::getSurfaceArea() const {
    
        return 6 * length_ * length_;
    }

    void Cube::setLength(double length){
    
        length_ = length;
    }
}
