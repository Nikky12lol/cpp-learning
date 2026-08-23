#include <iostream>
#include <vector>

int main() {

    //TYPEdeff is used to give niknames for really long datatypes eg,

    typedef std::vector<std::pair<std::string, int>>  pairlist_t ;

    //commanly when we use typedef, we end the nikname with _t
    //eg. typedef std::string text_t

    typedef std::string text_t;

    text_t name = "nikhil" ;
    std::cout << name << '\n';

    //instead of using typedef we can use the using keyword, becz it works better with templates
    //that can be done like this,

    using number_t = int;
    number_t x = 10;
    std::cout << x << '\n';




    return 0;
}