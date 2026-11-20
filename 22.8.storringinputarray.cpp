#include<iostream>
using namespace std;
int main(){
    
    string foods[5]; string temp;
    int size = sizeof(foods)/sizeof(foods[0]);
    for(int i = 0; i<size; i++){
        cout << "Enter the food you like #" << i+1 << " or 'q' to quit : ";
        //getline(cin, foods[i]);   doing this will also store the value q as a string in the array
        //which we dont want, so instead of direclty storing the input we check for q first and then store in array  
        getline(cin , temp);
        if(temp == "q"){
            break;
        }
        else{
            foods[i]=temp;
        }
    }
    //for(int j =1, j<size; j++)    //this is bad as we also print the empty elements in the arrays 
    //so instead we do this
    cout << "These are the foods you like: " << endl; 
    for(int j =0; !foods[j].empty(); j++){
        cout << foods[j] << endl;
    }
    return 0;
}