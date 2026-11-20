#include<iostream>
int searcharray(std::string arr[], int size, std::string element);
int main(){
    std::string arr[] = {"dosa", "pizza", "vada", "noodel", "maggie"};
    int size = sizeof(arr)/sizeof(arr[0]);
    int index;
    std::string myFood;
    std::cout << "enter a food to search for: " << std::endl;
    std::getline(std::cin, myFood);
    index =  searcharray(arr, size, myFood);
    if(index !=-1)
    std::cout << myFood << " is at the index " << index;
    else
    std::cout << myFood << " is not in the array";
    return 0;
}

int searcharray(std::string arr[], int size, std::string element){
    for(int i = 0; i<size; i++){
       if(arr[i] == element ){
        return i;
       }
    }
    return -1;
}


/*
#include<iostream>
int searcharray(int arr[], int size, int element);
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(arr)/sizeof(arr[0]);
    int index;
    int myNum;
    std::cout << "enter a number to search for: " << std::endl;
    std::cin >> myNum;
    index =  searcharray(arr, size, myNum);
    if(index !=-1)
    std::cout << myNum << " is at the index " << index;
    else
    std::cout << myNum << " is not in the array";
    return 0;
}

int searcharray(int arr[], int size, int element){
    for(int i = 0; i<size; i++){
       if(arr[i] == element ){
        return i;
       }
    }
    return -1;
}
*/