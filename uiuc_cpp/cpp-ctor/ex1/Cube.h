#pragma once

namespace my_cube{
    class Cube{
      public:
        Cube(); //Custom default constructor
        double getVolume();
        double getSurfaceArea();
        void setLength(double length);
        
      private:
        double length_;
    };
}