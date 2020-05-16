#pragma once

namespace my_cube{
    class Cube{
      public:
        Cube(); //Custom default constructor
        Cube(double length); //one argument constructor
        Cube(const Cube &obj); //copy constructor
        double getVolume();
        double getSurfaceArea();
        void setLength(double length);
        
      private:
        double length_;
    };
}