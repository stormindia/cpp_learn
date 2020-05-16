#pragma once  //Lets this .h file to be compiled only once
class Shape {
  public:
    double getVolume();
    double getSurfaceArea();
    void setLength(double length);

  private:
    double length_;      
};

