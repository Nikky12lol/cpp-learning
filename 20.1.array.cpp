#include <iostream>

int main (){
    
    //arrays are data structures that hold multiple values 
    //values are accesed by index number 
    //kind of like variable that holds multiple values
    //first we declare the array's type then we define it and store data 
    
    std::string cars[] = {"jaguar", "lamborgini", "tesla", "ferrari"};

    //now that we have stored multiple strings inside the array
    // we can acesses they
    
    std::cout << cars << '\n';        //this will display a memory address 
    std::cout << cars[0] << '\n';     //this will display the first value that is stored in the array 
                                      //first in the sense that 0th element is considered as first element
    //we can also change/reassign the values stored insied an array in the following manner 
    cars[0] = "maruthi";

    //we can only store the values of a certain data type 

    //we can also declare an array and then define it later but we need to define it properly, ie, the data type and the array length
    int x[9];
    x[1] = 1;
    x[2] = 3;
    x[0] = 4;
    std::cout << x[0];
    



    return 0;
}