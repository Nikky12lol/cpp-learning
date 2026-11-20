#include<iostream>

void happyBirthday(std::string name1, int age1);
int main(){
    std::string name = "nikhil";
    int age = 18;           //(#1)
    happyBirthday(name,age);//we are making the happybirthday function aware of the name variable inside of the main function
                            //i.e, i am sending the data to another function
                            //we can aslo send more than one data type at the same time  (#1) , it should be separated by a comma
    
    return 0;
}
void happyBirthday(std::string name1, int years){      //here inside the perenthises we make an argument which will give the matching set of data type 
                                            //to the other function
                                            //also we dont have to use the unique identifier of that data, which is 'name' inside the main funciton
                                            //we can use any other variable to assign that data to, 
                                            //but in the declaration we should always mention the actuall identifier
    std::cout <<"happy birthday " << name1<<'\n';
    std::cout << "you are " << years << " years old";

}
// 
// 
// 
// 
