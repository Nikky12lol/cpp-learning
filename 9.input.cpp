#include <iostream>

int main(){
    std::string name;
    std::cout << "what is your name : ";
    std::cin >> name;
    std::cout << "hello " << name;
    int age;
    std::cout << "what is your age : ";
    std::cin >> age;
    std::string fullName;
    std::cout << "what is your full name : ";
    std::cin >> fullName;
    //some times strings have spaces in between them so we cant recognise this space
    //unless we use getline fnxn, it reads everything untill enter is pressed
    std::cout << "what is your full name ? : ";
    std::getline (std::cin, name);
    //if we use a cin fnxn before a getline fnxn then the getlinne will also be skipped
    std::cout << "what is your age ? : ";
    std::cin >> age;
    std::cout << "what is your full name ? : "; 
    std::getline (std::cin, fullName);
    //this dosent work 
    //to fix this 
    std::cout << "what is your age ? : ";
    std::cin >> age;
    std::cout << "what is your full name ? : ";
    std::getline (std::cin>>std::ws , fullName);
    std::cout << "hello " << fullName << '\n';
    std::cout << "ur age is " << age << '\n';
    




    return 0;

}