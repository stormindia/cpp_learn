#include <iostream>
#include <vector>

using std::cout;
using std::endl;

#include "Cube.h"
using my_cube::Cube;


template <typename T> 
T my_max(T a, T b){
if(a > b){ return a;}
else{return b;}
}


int main() {
  cout << "max(3, 5): " << my_max(3, 5) << endl;
  cout << "max('a', 'd'): " << my_max('a', 'd') << endl;
  cout << "max(\"Hello\", \"World\"): " << my_max("Hello", "World") << endl;
  cout << "max(\"World\", \"Hello\"): " << my_max("World", "Hello") << endl;
  cout << "max(\"World\", \"Hello\"): " << my_max(std::string("Hello"), std::string("World")) << endl;
//  cout << "max( Cube(3), Cube(6) ): " << max( Cube(3), Cube(6) ) << endl;

  return 0;
}
