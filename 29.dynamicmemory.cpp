#include<iostream>
using namespace std;
int main(){

    // dynamic memory = Memory that is allocated after the program 
    //                  is already compilled and running 
    //                  Use the "new" operator to allocate 
    //                  memory in the heap rather than the stack 

    //                  Usefull when we dont know how much memory 
    //                  we will need.
    //                  makes our program more felxible, 
    //                  especially when accepting user input.

    int *pNum = NULL;
    pNum = new int;

    *pNum = 21;

    cout << "Address : " << pNum << endl; 
    cout << "Value : " << *pNum << endl;

    return 0;
}