#include<iostream>

int fac(int num);

int main(){
    int num = 10;
    std::cout << fac(num);


    return 0;
}

int fac(int num){
    if(num > 1){
        return num*fac(num-1);
    }
    else
    return 1; 
//this is just the base case returning the value 1 when the recursion fac(2-1 == 1) hits 1 we return 1; 
// ie, fac(1) = 1; like so
}










// iterative approach
// int fac(int num){
//     int result = 1;
//     for(int i = 1; i<=num; i++){
//         result *= i;
//     }
//     return result;
// }
