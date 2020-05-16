#pragma once

#include "HSLAPixel.h"


namespace my_cube{

class Cube{

public:
Cube(double length, HSLAPixel color);
double getLength() const;
double getVolume() const;
double getSurfaceArea() const;
void setLength(double length);


private:
double length_;
HSLAPixel color_;

};
}
