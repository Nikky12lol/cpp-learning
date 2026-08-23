#include <iostream>

int main(){
    //this is just a replacement for if else statments
    /*int score;
    std::cout << "What is your score? : ";
    std::cin >> score;
    score >= 60 ? std::cout << "you passed!" : std::cout << "you failed!";*/

    // and, or, not logical opperators
    /*
    && and       - this is used to check if two or more conditions are true
    || or        - this is used to check if one of the conditions is true
    !  not       - it reverses the logical state of the operand 
    */

    int temp;
    std::cout << "what is the temp? : ";
    std::cin >> temp;

    if (temp>0 && temp<30){
        std::cout << "the temp is good\n";
    }
    else{
        std::cout << "the temp is bad\n";
    }

    //same code but with 'or' logical opp

    if (temp<0 || temp>30){
        std::cout << "the temp is bad\n";
    }
    else {
        std::cout << "the temp is good\n";
    }

    //'not' logical op
    
    bool sunny = true;
    if (sunny){
        std::cout << "it is sunny outside\n";
    }
    else {
        std::cout << "it is cold outside\n";
    }
    //ususally an 'if' statment is used to check if somrthing is true
    //now that we added the not logical op it checks 'if' when sunny is not true and else when sunny is true
        if (!sunny){
        std::cout << "it is sunny outside\n";
    }
    else {
        std::cout << "it is cold outside\n";
    }
    return 0;

}