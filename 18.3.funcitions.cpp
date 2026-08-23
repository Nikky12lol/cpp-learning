#include<iostream>

double square(double len);
double cube(double len);
int main(){
    double len = 5.0;
    double area = square(len);
    double volume = cube(len);
    std::cout << area;
    std::cout << '\n' << volume;

    return 0;
}
double square(double len){
   return len*len;
}
double cube(double len){
    return len*len*len;
}