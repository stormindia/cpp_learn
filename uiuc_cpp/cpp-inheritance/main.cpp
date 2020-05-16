#include <iostream>
using std::cout;
using std::endl;

#include "Cube.h"
using my_cube::Cube;


template <typename T> 
T max(T a, T b){
if(a > b){
return a;
}
return b;
}


int main() {
  cout << "max(3, 5): " << max(3, 5) << endl;
  cout << "max('a', 'd'): " << max('a', 'd') << endl;
  cout << "max(\"Hello\", \"World\"): " << max("Hello", "World") << endl;
//  cout << "max( Cube(3), Cube(6) ): " << max( Cube(3), Cube(6) ) << endl;

  return 0;
}
