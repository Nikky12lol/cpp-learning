#include<iostream>


int main(){
    
    //a pointer is nothing but a variable that points to the address of another variable's place in memory 
    //there are two things , the derefference operator and the address of operator 
    //the derefference (*) is used to access the value stored at the address in the memory
    //BASICALLY THE POINTS TO REMEMBER ARE THAT,
    // the left hand side of a pointer should contain the data type of the variable that we are going to point to (point in the sense, go to the memory address)
    // the right hand side should contain the address of the variable that we are gonna point to 

    // also the pointer makes much sense if we look at it like so,
    /*
        we have a variable and we dereffernce the variable and print it then what happens?
        we run in to an error cause we actually dont need to dereff it i.e, open it to the value inside it 
        it is already done for us automatically 
        the variable x is just points to the memory address of the value that is there in that memory address 
        and what is a pointer then ?
        its a separate variable that stores this memory address of the other variable 
        when it is dereffernced then we use the value at that address 
        else we use the address it self
    */

    std::string name = "Nikhil";
    std::string *pName = &name;
    std::cout << pName;  //0xeeffdff9e0  
    std::cout << '\n' << *pName << '\n';   //Nikhil
    
    std::string pizzas[] = {"piz1","piz2","piz3","piz4","piz5","piz6"};
    
    
    std::cout << *pizzas;
    

    return 0;
}