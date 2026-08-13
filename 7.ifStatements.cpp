#include <iostream>


int main(){
    
    //if statements are used to check if some condition is true. if true then do it if not then dont do it 

    int age;
    std::cout << "what is your age ? : ";
    std::cin >> age;


    if (age >= 18 ){ 
        std::cout << "welcome to the site ! ";
     }
    else if (age > 50){ 
        std::cout << "your too old to enter ! ";
    }
    else if (age < 0){
        std::cout << "your not bron yet ! ";

    }

    else{
        std::cout << "your not old enough ! ";
    }

    return 0;

}