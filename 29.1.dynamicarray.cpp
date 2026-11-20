#include<iostream>
using namespace std;
int main(){

    char *pGrades = NULL;  //declare the pointer 
    int size;               //declared the size
    cout << "Enter the size of the chars: ";
    cin >> size;  //obtained the size

    pGrades = new char[size];  //setting the size
    for(int i = 0; i<size; i++){
    cout << "Enter the grades #"<< i+1 << ": ";
    cin >> pGrades[i];   //or we can also do something like this, cin >> pGrades + i;
    }
    for(int i=0; i<size; i++){
        cout << pGrades[i] << " ";
    }
    delete[] pGrades;

    return 0;
}