#include "../Cube.h"

using my_cube::Cube;

int main(){
    Cube c;
    Cube myCube;
    myCube = c;     // no construction is taking place, just assignment --> nothing will be printed
    return 0;   
}