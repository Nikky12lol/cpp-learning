#include <iostream>

int main()
{
    //a do-while loop is used to first perform a block of code and then check if the condition is true and if it is true it loops 
    //else it contiues to the next block of code
    //example:
    int x;
    do{
        std::cout << "enter a pos # : ";
        std::cin >> x;
    }while (x<0);
    
    
    

    return 0;
}