#include <iostream>

int main(){
    std::string name;
    std::cout << "what is your name : ";
    std::cin >> name;
    //append is used for attaching a string part to the existing string 
    name.append("@gmail.com");
    std::cout << "your new username is : " << name << std::endl;
    //the at method is used to point the position of the char in the string 
    /* the priority order is 
    [happiness]

    [h a p p i n e s s]
    [0 1 2 3 4 5 6 7 8]
    
    */
    
    std::cout << name.at(6) << std::endl;  


    //the insert method is used to insert a string or char or anyhting in front off the given position
    //it has two arguments the index and the string that we want to insert  
    name.insert(6, "&");
    std::cout << name << std::endl; 
    //if we are insert chars then we also include the no. of times that we insert the char
    std::string initial;
    std::cout << "what is your initial? : ";
    std::cin >> initial;
    int x = initial.length();
    initial.insert(x, 2, '!');
    std::cout << "your initial is " << initial << '\n';
    
    //the find method is used the position of a char
    std::cout << initial.find('o') << '\n';
    //erase methhod is used to remove the the in this way : name.erase(starting_position, number_of_characters);
    name.erase(0, 5);
    std::cout << name;


    //IF YOU WANT MORE STR METHODS GO TO STRING CLASS IN C++.COM WEBSITE
    return 0;
}