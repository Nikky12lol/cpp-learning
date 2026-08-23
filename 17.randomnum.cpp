#include <iostream>
#include <ctime>
//always include ctime before using the rand cmd

int main (){
    //PESUDO random number gen
    srand (time(NULL));

    int z = rand();
    std::cout << z << '\n';
    //to use make a dice game where a 6 sided dice is rolled
    //we need a random num gen from 6 nums 
    //so we use the seed of srand that has a very big value and then % it by 6 so that we get a number from 0 to 6 (6 not included)
    //because the modulus of 6 is always less than 6 we add 1 
    
    int x = rand() % 6 + 1 ;
    std::cout << x << '\n';
    std::cout << RAND_MAX;
    return 0;
}