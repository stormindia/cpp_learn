#include <iostream>

int main() {
    
    int num = 7;
    std::cout << " num: " << num << std::endl;
    std::cout << " &num: " << &num << std::endl;
    
    int *p = &num;
    std::cout << " p: " << p << std::endl;
    std::cout << " &p: " << &p << std::endl;
    std::cout << " *p: " << *p << std::endl;

    *p = 42;
    std::cout << " *p changed to 42: " << std::endl;
}