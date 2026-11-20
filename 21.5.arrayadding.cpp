#include<iostream>
double getTotal(int size, double arr[]);
int main(){
    double arr[] = {10.99, 11.99, 15.99, 20.00};
    int size = sizeof(arr)/sizeof(arr[0]);
    double sum = getTotal(size,arr);
    std::cout << sum;
    return 0 ;
}
double getTotal(int size, double arr[]){
    double sum = 0;
    for(int i =0; i<size; i++){
        sum +=arr[i];
    }
    return sum;
}