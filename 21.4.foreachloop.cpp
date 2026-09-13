#include<iostream>
int main (){
    // foreach loop eases the traversal over an itterable data set
    // a foreach loop is used instead of a standard for loop but it has less flexibility 
    // a general for loop is used for itteration of a certain data type but it has a starting cond., stoping cond. and a way to define how to itterate
    // this is a lot of syntax and we dont need this for doing small things like printing all elements of an array 
    char grade [] = {'A', 'B', 'C','D'};

    for(char grade : grade){                                 //this is the structure of the foreach loop: for(datastructure anyNameForTheVariable : itterableDataSet)
        std::cout << grade << '\n';
    }





    return 0;
}