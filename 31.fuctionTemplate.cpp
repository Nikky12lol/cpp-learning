#include<iostream>
template <typename T, typename U>
auto maxx(T x, U y){
    return ((x>y) ? x : y);                    //this will do the same thing as all other fxns and even better 
}                                              //because it can accept upto 2 datatypes. ex, maxx(int , double);

int max(int x, int y){
    return ((x>y) ? x : y);
}
double max(double x, double y){                //they all do the same thing i.e; return max
    return ((x>y) ? x : y);                    //so why not replace aal fuctions with a single fxn doing all at once
}
char max(char x, char y){
    return ((x>y) ? x : y);
}

int main(){
    std::cout << "Using max fxn:\n";
    std::cout << max(1,2) << "\n";
    std::cout << max(1.1, 2.2) << "\n";
    std::cout << max('A','B') << "\n";
    std::cout << "Using maxx (overloaded) fxn: ";
    std::cout << "\nint,int: " << maxx(1,2) << "\ndouble,double: " << maxx(1.1,2.2) << "\nchar,char: " << maxx('A','B') << "\nint,double: " << maxx(1,2.5) << "\nEven string,string: " << maxx("Apple","Ball");
    return 0;
}

// function template = describes what a function should look like.
//                     Can be used to generate as many overloaded fxns as needed 
//                     each using different data types