#include <vector>
#include <iostream>


int main(){


std::vector <int> v;

/*v.push_back(0);
v.push_back(1);
v.push_back(2);
v.push_back(3);
*/

for(int i = 0; i < 4; i ++){

v.push_back(i);

}

std::cout << v[0] << std::endl;
std::cout << v[1] << std::endl;
std::cout << v[2] << std::endl;
std::cout << v[3] << std::endl;
return 0;

}
