#include<iostream>
//local vairables : declared inside a function or block of code
//global variables : declared outside all the function
//we already learnt that functions cant use or see variables in other functions,
//and that is why we use the arguments and the pass the variables to other functions
//now we will learn how global and local variables work 
//these variables are less secure
int myNumG = 10;
void myNum();

int main(){
    int myNumG = 1;
    std::cout << myNumG << '\n';
    myNum();
    return 0;
}
void myNum(){
    int myNumG = 2;
    std::cout << myNumG;
}

//here we defined the same myNum variable in three diff blocks with diff values (globbaly, in main, in myNum function)
//and when we print it individually in three separate blocks we take the priority of the block/function where it is defined


//NOTE: to use the global variable we can just add the scope resolution opperator (::) will bring the global value to anyblock used in,
//eg:                   std::cout << ::myNumG;  //10