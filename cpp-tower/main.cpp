#include "Game.h"
#include <iostream>

int main(){

Game g;

std::cout <<"Initial Game state " << std::endl;
std::cout << g << std::endl;

g.solve();


std::cout <<"final Game state "<< std::endl;
std::cout << g << std::endl;

return 0;
}

