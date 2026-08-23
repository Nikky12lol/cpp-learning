#include<iostream>
//the return function is used to return a value (of any type) back to the spot where we call the encompassing function
double square(double len);

int main(){
    double len = 5.0;
    std::cout << square(len);
    return 0;
}
double square(double len){
   return len*len;
}

//we want to return the value area of square of length 'len' 
//so we made a function void square(); and we change 'void' to the data type that we are returning 
//then we can use the return function to send that value to the calling function

    