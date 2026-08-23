#include <iostream>  

//a function is a block of reuseable code, first we define if and then we call it in the main function so that it runs 
//you can call the function by using it name and then '()' paranthises
//we can also declare the function and then define it later so that the code is more readable 
//arguments and parameters:
/*
arguments are used to send a variable type to another function block 
parameters are set to expect what variable type to recive and can be renamed as needed 
*/




//here i first declared and defined the function happyBirthday and then i called it in main

void happyBirthday(){
    std::cout << "happy birthday to you ";
    
}
int main(){
    happyBirthday();
    return 0;
}

//we can also define it first and then after the main function we can define it and then call it 


