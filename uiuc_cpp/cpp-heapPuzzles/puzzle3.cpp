#include <iostream>
using std::cout;
using std::endl;

int main() {
  int *p, *q;
  p = new int;
  cout << typeid(*p).name() << endl;
  q = p;
  *q = 8;
  cout << *p << endl;

  q = new int;
  *q = 9;
  cout << *p << endl;
  cout << *q << endl;

  return 0;
}
