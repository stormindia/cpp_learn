#include "Shape.h"

Shape::Shape() : Shape(1){

}


Shape::Shape(double width) : width_(width){

}

double Shape::getWidth() const {
  return width_;
}
