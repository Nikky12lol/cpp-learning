#include<iostream>
using namespace std;
void swap(string &s1,string &s2);   //nothing i just renamed the variables from void swap(string &x,string &y); to that because 
//i want to show the reusability of the fxnblock and not that it only works on x,y but any other string variabe that is sent to it 
int main(){
    string x = "Kool-aid";
    string y = "Water";
    //we want to swap the x and y; we can either make a fxn or do this,
    // string temp = x;
    // x=y;
    // y=temp;
    // swap(x,y); //this dosent work as the swap is done on the coppies of the variable x,y which are s1 and s2 not on the orginal value 
    //instead if we do this
    //we are able to change the actuall values of x,y instead of creating coppies of x,y as some other variables 
    cout << "X : " << x << endl;
    cout << "Y : " << y << endl;
    swap(x,y);
    cout << "X : " << &x << endl;   //this explains further 
    cout << "Y : " << &y << endl;
    return 0;
}

void swap(string &s1,string &s2){
    string temp = s1;
    s1=s2;
    s2=temp;
    cout << "s1 : " << &s1 << endl;
    cout << "s2 : " << &s2 << endl;
}