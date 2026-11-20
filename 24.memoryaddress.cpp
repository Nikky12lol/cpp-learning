#include<iostream>

int main(){

    //memoryaddress is a address that is assigned to the variable and this address is used to access that space in memory directly 
    //it can be accessed by using the addressof operator '&'

    std::string name= "Nikhil";
    int age = 18;
    bool student = true;

    std::cout << &name << '\n'; 
    std::cout << &age << '\n'; 
    std::cout << &student << '\n';
    
    /*
    memory addresses

0xfe923ff840     1093375359040         name-string
0xfe923ff83c     1093375359036         age-int 
0xfe923ff83b     1093375359035         student-bool
    
we can see that the memory address of the variables are placed in a certain way 
we need to keep that in mind 
the string and the int have a distance of 4 bytes and then we have the bool that hase a distance of 1 byte from the int variable address
we can already see that there is a reference variable address and then there are the other addresses that are keep at the distance of their size
the above only line was a hypothesis but we just have to keep that in mind for now
    */

    // after this we also need to understand that if we do something like this int& b = a; then put a value into b 
    //then we are acutally going to go to the address of a and change/over-write the value of a so the new value that we put into b
    int a = 1; 
    int& b = a;
    b = 10;
    std::cout << a << '\n';
    std::cout << b << '\n';
    std::cout << &a << '\n';
    std::cout << &b << '\n';
    


    return 0;
}