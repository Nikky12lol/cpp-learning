#include <iostream>

int main()
{
    //while loops are used for potentially running an if statement infinite ammount of times if the condition inside the loop is true always
    //i.e, you can force the user to do something and not stop until its done
    std::string name;
   

    while (name.empty()){
    std::cout << "what is your name? : ";
    std::getline (std::cin, name);
    }
    std::cout << "Hello " << name;

    //this is an infinite loop
    while (1 == 1)
    {
        std::cout << "help !";
    }
    

    return 0;
}