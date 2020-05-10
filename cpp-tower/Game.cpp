#include "Game.h"
#include "Stack.h"

#include "my_cube/Cube.h"
#include "my_cube/HSLAPixel.h"

#include <iostream>
#include <vector>

using std::cout;
using std::endl;

void Game::solve() {
  // Prints out the state of the game:
     cout << *this << endl;
  //
  //     // @TODO -- Finish solving the game!
       }

Game::Game() {

for (int i = 0; i < 3; i++){
Stack stackOfCubes;
stacks_.push_back(stackOfCubes);
}

Cube blue(4, my_cube::HSLAPixel::BLUE);
stacks_[0].push_back(blue);


Cube orange(3, my_cube::HSLAPixel::ORANGE);
stacks_[0].push_back(orange);


Cube purple(2, my_cube::HSLAPixel::PURPLE);
stacks_[0].push_back(purple);


Cube yellow(1, my_cube::HSLAPixel::YELLOW);
stacks_[0].push_back(yellow);

}


std::ostream& operator<<(std::ostream & os, const Game & game) {
  for (unsigned i = 0; i < game.stacks_.size(); i++) {
    os << "Stack[" << i << "]: " << game.stacks_[i];
  }
  return os;

}
