#include<iostream>
using namespace std;

int main(){/*
    const int SIZE = 100;
    string names[SIZE];
    //we have an empty array of size 100 elements and indexes [0-99] so if i want to fill 
    //a certain value in the array then i would have to itterate over all the elements 1 by 1 and this takes time so 
    //we use the fill() fxn to get the wanted result faster
    
    //fill(begin, end, value)  
    fill(names, names + (SIZE/2), "baka" );
    fill(names + (SIZE/2 ), names + SIZE, "ore");
    int i=1;
    for(auto &element : names){
        cout << element << i << endl;
        ++i; //the element index in the array starts from 1 and the position index starts from 0;
    }
    
    */
    

    //smartness is when we do this,
    /*
    const int SIZE = 99;
    string names[SIZE];
    //fill(begin, end, value)  
    fill(names, names + (SIZE/3), "baka" );
    fill(names + (SIZE/3 ), names + (SIZE/3)*2, "ore");
    fill(names + (SIZE/3)*2, names + SIZE, "gairu");
    int i=1;
    for(auto &element : names){
        cout << element << i << endl;
        ++i; //the element index in the array starts from 1 and the position index starts from 0;
    }
    
    */
    
    return 0;
}


//it is changing all the elements from the begining element to the ending element and when i do something like trying to continue the fill from a point then
//there is a overlap and this over lap dosent count idk why but the overlap of the names + (SIZE/2) dosent occur and only when i do a names + (SIZE/2 -1) 
//only then dose it work 