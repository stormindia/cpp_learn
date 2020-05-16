#include <iostream>
//using std::cout; 
//using std::endl;

void foo(){
    int x = 100;
    std::cout << "value foo " << x << std::endl;
    std::cout << "address foo " << &x << std::endl;
    
}

int main(){
    int num = 7;
    
    std::cout << "value main " << num << std::endl;
    std::cout << "address main " << &num << std::endl;
    
    foo();
    return 0;
    
}

