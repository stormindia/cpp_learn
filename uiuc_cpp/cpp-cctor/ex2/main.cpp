#include "../Cube.h"

using my_cube::Cube;

Cube foo() {
    Cube c;
    return c;
}

int main(){
    Cube c2 = foo();
    return 0;
}