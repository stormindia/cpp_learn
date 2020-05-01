#include <iostream>
int main() {
    int *x;
    int size = 3;
    x = new int[size];
    
    for(int i = 0; i < size; i++){
        x[i] = i + 3;
    }
    for(int j = 0; j < size; j++){
        std::cout << *(x + j) << std::endl;
    }
    delete [] x;
}