#include <iostream>

int main(){
    int *x = new int;
    int &y = *x;
    y = 4;
    
    std::cout<< &x << std::endl;
    std::cout<< x << std::endl;
    std::cout<< *x << std::endl;
    
    std::cout<< &y << std::endl;
    std::cout<< y << std::endl;
    //std::cout<< *y << std::endl;
    
    return 0;
}