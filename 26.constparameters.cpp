#include<iostream>
using namespace std;
void printInfo(const string &name, const int &age);
int main(){
    int age = 17;
    string name = "Nikhil";
    // printInfo(name,age);    //we could do this but it defeats the purpose cause we are changing the values of copies of the orginal name and age 
    printInfo(name,age);
    return 0;
}//the const parameter makes the function more secure and conveys intenet and makes the function values read only 
 //they are better with referencess and pointers 

void printInfo(const string &name, const int &age){
    cout << name << endl;
    cout << age << endl;
    //that prints the name and age as is but if we try to change the name and age 
    name = " ";
    age = 0;
    //we dont want to do this because this changes the original values of the name and age
    // so we add the keyword const before the parameter to fix the values and the orginal values dont chnage 
}