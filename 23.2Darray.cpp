#include<iostream>
using namespace std;
int main(){
    string cars[][3] = {{"mustang","Escape","F-510"},{"Corvette","Equinox","Silverado"},{"Challenger","Durango","Ram 1500"}};
    //this is bassically a matrix and the first [] counts the rows and the second [][] counts the columns
    //we always need to declare the no of columns of the matrix (i.e, the no. of elements in the individual array
    //should be defined, even if we dont declare the no. of individual arrays );
    
    //to access each of the array element we need both the row and the column number

    for(int i = 0; i<sizeof(cars)/sizeof(cars[0]); i++){
        for(int j = 0; j<sizeof(cars[0])/sizeof(cars[0][0]); j++){
            cout << cars[i][j] << " ";
        }
        cout << endl;
    }


    return 0 ;
}