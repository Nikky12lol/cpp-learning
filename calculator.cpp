#include <iostream>
#include <cmath>


int main () {

    int x;    int y;    char z;

    using namespace std;

cout << "ENTER WHAT OPERATION YOU WANT TO PERFORM (*/+-) :";
cin >> z;
    cout << "ENTER FIRST NUMBER : ";
     cin >> x;
     cout << "ENTER SECOND NUMBER : ";
       cin >> y; 
        switch(z){

            case '*' :
            cout << "THE RESULT IS :" << (x*y);
            break;
            case '/':
           cout << "THE RESULT IS :" << (x/y);
             break;
            case '+': 
            cout << "THE RESULT IS :" << (x+y);
            break;
            case '-':
            cout << "THE RESULT IS :" << (x-y);
            break;
            default:
            cout << "PLS ENTER A CORRECT OPPERATION";

        }


return 0;

}
