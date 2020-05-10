#pragma once
#include <vector>
#include "my_cube/Cube.h"
using my_cube::Cube;

class Stack{
public:
void push_back(const Cube & cube);
Cube removeTop();
Cube & peekTop();
unsigned size() const;

//To print stack

friend std::ostream& operator<<(std::ostream & os, const Stack & stack);

private:
std::vector<Cube> cubes_;

};
