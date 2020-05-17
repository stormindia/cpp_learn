#pragma once  //Lets this .h file to be compiled only once
class Shape {
  public:
    Shape();
    Shape(double width);	
    double getWidth() const;

  private:
    double width_;      
};

