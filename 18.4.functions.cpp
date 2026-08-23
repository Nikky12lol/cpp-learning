#include<iostream>

std::string concatString(std::string string1, std::string string2);

int main (){
    std::string firstname = "nikhil";
    std::string lastname = "krishna";
    std::string mothername = "durga";
    std::string fathername = "jaisham";
    std::string fullname = concatString(mothername,fathername); //here you dont need to mention the data type, just call the function
                                                                //and also here you can clearly see the defination of the function which is,
                                                                //a block of reuseable code 
    //you just had to change the variable that your going to send to the block off code that is called 
    std::cout << "hello " << fullname;
    return 0;
}

std::string concatString(std::string string1, std::string string2){

    return string1 + " " + string2;
}

