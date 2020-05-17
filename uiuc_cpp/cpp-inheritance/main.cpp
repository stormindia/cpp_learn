#include <iostream>
using std::cout;
using std::endl;

#include "Cube.h"
using my_cube::Cube;




int main() {

 my_cube::Cube c(4.0, uiuc::HSLAPixel::PURPLE);
 cout<< "created a purple cube" <<endl;

  return 0;
}
