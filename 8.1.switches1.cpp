#include <iostream>

int main (){
    
    //switches are an alternative to using many ifelse statmennts

    int month;
    using namespace std;
    cout << "Enter the number of the month (1-12) : ";
    cin >> month; 
    string txt = "The month is ";
    switch (month)
    {
    case 1 :
        cout << txt << "january";
        break;
    case 2 :
        cout << txt << "febuary";
        break;
    case 3 :
        cout << txt << "march";
        break;
    case 4 :
        cout << txt << "april";
        break;
    case 5 :
        cout << txt << "may";
        break;
    default:
        cout << "enter a valid month (1-12)";
        break;
    }



    return 0;
}