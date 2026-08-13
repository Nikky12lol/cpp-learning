#include <iostream>
#include <cmath>

int main (){
    int x = 9;
    int y = 12;
    //finding max and min of two numbers
    int z  = std::max(x,y);
    std::cout << z <<'\n';
    int p = std::min(x,y);
    std::cout << p << '\n';

    //all fxns from here onwards are included in cmath lib

    int a ;
    double r = 3.14;
    double n = 3.99;
    a = pow(2,3);
    a = sqrt(9);
    a = round (r);
    a = ceil(r);
    a = floor(n);
    
    std::cout << a << '\n';
    
    



    return 0;
}