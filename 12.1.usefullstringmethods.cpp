#include <iostream>

int main(){
    std::string name;
    std::cout << "what is your name: ";
    std::getline(std::cin, name);


    //length method will return the no. of chars in a string 

    if (name.length() > 12){
    std::cout << "your name cant be 12 chars long";
    }
    else {
     std::cout << "welcome " << name;
    }
    

    //empty method will check if the string is empty or not also it is used mostly for boolean value
    if(name.empty()){
        std::cout << "you did not enter your name!";
    }
    else {
    std::cout << "welcome " << name;
    }
    

    //clear method is used to remove/erase the string used after the string is obtained 
    name.clear();
    std::cout << "hi " << name; // this will not print anything after hi
    
    return 0;
}