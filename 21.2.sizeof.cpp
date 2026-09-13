#include <iostream>

int main(){
    //mostly used w arrays  

    std::string name = "nikhil";                    //32 bytes maximum bytes;
    int x = 10;                                     //4 bytes maximum bytes;
    double y = 100.00;                              //8 bytes maximum bytes;
    char grade[] = {'A', 'B', 'C', 'D', 'F'};      // this is described in the following lines 
    bool lazy=true;                                 //1 bytes maximum bytes;
    bool tired=false;                               //1 bytes maximum bytes;
    //for the array grade, that consists of 5 characters which is each of 1 byte the total size of the array will be 5 bytes
    //if we want to find the number of elements in an array we can use the size of func to find the no. of elements
    std::cout << sizeof(grade)/sizeof(grade[0]) << " elements" << '\n';
    //the above statment can also be written as std::cout << sizeof(grade)/sizeof(char) << "elements";


    std::cout << sizeof(char)<< " bytes" << '\n';


    return 0;
}