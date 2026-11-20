#include<iostream>

void walk(int steps);

int main(){
    int steps = 100;
    walk(steps);


    return 0;
}

void walk(int steps){
    if(steps > 0){
    std::cout << "You take a step!\n";
    walk(steps-1);
    }
}





// THIS IS THE ITERATIVE APPROACH
// void walk(int steps){
//     for(int i = 0; i<steps; i++){
//     std::cout << "You take a step!\n";
//     }
// }