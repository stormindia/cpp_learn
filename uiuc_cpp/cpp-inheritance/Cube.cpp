#include "Cube.h"
#include "Shape.h"
namespace my_cube{

Cube::Cube(double width, uiuc::HSLAPixel color) : Shape(width) {
	color_ = color;
}

double Cube::getVolume() const{

    return getWidth() *  getWidth() * getWidth();
}

/*void Cube::setLength(double length){
    
    length_ = length;
}*/

}
