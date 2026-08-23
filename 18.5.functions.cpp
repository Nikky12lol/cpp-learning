#include<iostream>

void bakePizza();
void bakePizza(std::string topping1);
void bakePizza(std::string topping1,std::string topping2);
int main(){

    bakePizza("paneer", "chilli"); //in the previous programs we defined the variables in the main space and then passed the variables 
                                   //now we are declaring the variable in the "bake pizza" function and then only passing the literals 
                                   //throught the parenthises
    return 0;
}

void bakePizza(){
    std::cout << "Here is your pizza!";
}
void bakePizza(std::string topping1){
    std::cout << "Here is your " << topping1 << " pizza";
}
void bakePizza(std::string topping1,std::string topping2){
    std::cout << "Here is your " << topping1 << " and " << topping2 << " pizza";
}