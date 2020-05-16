#include <iostream>
//using std::cout;
//using std::endl;

int main(){
    
    int i = 2, j = 4, k = 8;

    int *p = &i, *q = &j, *r = &k; 
    
    k = i;
    std::cout << i << " " << j << " " << k << " "<< *p << " "<< *q << " "<< *r << " "<< std::endl;
    
    p = q;
    std::cout << i << " " << j << " " << k << " "<< *p << " "<< *q << " "<< *r << " "<< std::endl;
    
    *q = *r;
    std::cout << i << " " << j << " " << k << " "<< *p << " "<< *q << " "<< *r << " "<< std::endl;

}
