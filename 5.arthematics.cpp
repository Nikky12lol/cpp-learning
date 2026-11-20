#include <iostream>

int main() {

  int students = 10;

  //increament opp
  students = students + 1;
  students+=1;
  students++;

  //decrement opp
  students = students - 1;
  students-=1;
  students--;
  
  //mult opp
  students = students * 2;
  students*=2;
  
  //div opp
  students = students / 2;
  students/=2 ;


  
  int x = 10 * 2 / 5 + 3 - 8;
  std::cout << x << '\n';
  std::cout << students << '\n';

  


    return 0;
}