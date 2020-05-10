#pragma once 

#include  "Stack.h"
#include <vector>


class Game{

public:
Game();
void solve();

friend std::ostream& operator<<(std::ostream & os, const Game & game);

private:
std::vector<Stack> stacks_;
void _legalMove(unsigned index1 , unsigned index2);

void _move(unsigned index1 , unsigned index2);
};
