#include <iostream>
#include<iomanip>
using namespace std;
int main(){

    double p,t,r;
    cin >> p >> t >> r;
    cout << fixed << setprecision(2) << (p*t*r)/100;

    return 0;
}