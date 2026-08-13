#include <iostream>


int main(){

    //when used prevnts compiler from making any changes to the variable
    const double PI = 3.141;                 // now noone can change the variable pi and normaly cont valuse are written in caps
    double rad;
    std::cout << "please give the radius : ";
    std::cin >> rad;
    std::cout << "the curcumfirence of the circle is : " << (2*PI*rad) << " cm";



    return 0;
}