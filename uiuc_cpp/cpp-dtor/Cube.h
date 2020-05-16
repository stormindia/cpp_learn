#pragma once

namespace my_cube {
    class Cube{
      public:
	Cube();
        Cube(double length); //one argument constructor
        Cube(const Cube &obj); //copy constructor
	Cube & operator=(const Cube & obj);
	~Cube();
        double getVolume() const;
        double getSurfaceArea() const;
        void setLength(double length);
        
      private:
        double length_;
    };
}
