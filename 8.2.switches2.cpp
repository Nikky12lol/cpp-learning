#include <iostream>

int main(){
    using namespace std ;
    char z;
    cout << "what is your letter grade ? : ";
    cin >> z;

    switch (z)
    {
    case 'A':
        cout << "you did great!";
        break;
    case 'B':
    cout << "you did well!";
    break;
    case 'C':
    cout << "you did avg";
    break;
    case 'F':
    cout << "you failed!";
    break;
    default:
    cout << "please enter a valid grade";
        break;
    }



    return 0;
}