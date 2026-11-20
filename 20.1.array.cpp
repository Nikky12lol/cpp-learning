#include <iostream>

int main (){
    
    //arrays are data structures that hold multiple values 
    //values are accesed by index number 
    //kind of like variable that holds multiple values
    //first we declare the array's type then we define it and store data 
    
    std::string cars[] = {"jaguar", "lamborgini", "tesla", "ferrari"};

    //now that we have stored multiple strings inside the array
    // we can acesses they
    
    std::cout << cars << '\n';        //this will display a memory address of the first element (more at #)
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
    
    std::cout << std::endl;
    //we also learn that the array when passed to a fxn its passed by refference, by default, and changes are made directly
    //to the array itself

    // #
    //smartness is that we actually treat each space/element in a array as a individual variable with the name as so, arr[index] and  
    //by this we might have a doubt that shouldnt we pass the individual variable by refference for all the values to be changed?
    //short ans YES, but the thing is we dont need to list every element individually 
    //we can send the first elememt and then add the sizeof the data type to get the next array element's address and hence passed by reffence
    //and not value 

    // also we can do something like this to confirm this 

    int arr1[10] = {21 , 22 , 23, 24, 25};
    std::cout << arr1;



    return 0;
}