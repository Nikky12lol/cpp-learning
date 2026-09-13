#include<iostream>

int main (){
    std::string name[] = {"india", "pakistan", "china", "russia", "bangladesh"};
    //for printing these one by one we need to line by line list them out like this std::cout << name[0], then name[1], name[2], name[3]
    //instead we can do this 
    for(int i = 0; i < sizeof(name)/sizeof(name[0]); i++){
        std::cout << name[i] << '\n';
    }

    return 0;
}