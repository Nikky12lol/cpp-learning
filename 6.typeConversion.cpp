#include <iostream>

int main(){
    
    // type conversion used to convert 1 data type into another

    int x = (double)3.141;
    std::cout << x << '\n';
    
    //it can aslo happen with many other data types

    int y = 100;
    std::cout << (char) y << '\n';


    //heres a practicle use
    int a = 8;
    int b = 10;

    double score = a/(double)b * 100;
    std::cout << score << "%";


    return 0;
}