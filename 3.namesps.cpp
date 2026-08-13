#include <iostream>

namespace first {

    int x = 9;

}

namespace second
{
    int x = 10;
} 



int main(){
    //NAMESPACES are used to prevent naming conflicts for large projects
    //these are normaly made out side the main space

    int x = 11;
    std::cout << first::x << '\n';
    std::cout << second::x << '\n';
    std::cout << x << '\n';

    //using keyword this is used to prefix all the onwards fnxns to be from the perticular namesp
    
    using namespace first;
    std::cout << "here i did not call the namespace and it still uses the variable from the first namesps that is : " << x << '\n';

    // we can also use namesp to cut down typeing time eg.

    using namespace std;

    cout << "I am nikhil , i did not use the prefix std here" << '\n';
    //but this can have multiple naming conflits becz std has many clases
    // so instead we can use this 

    using std::cout;
    using std::string;
    string name = "nikhil";
    cout << "even here i did not use the pre fix " << std::endl;
    //this is a safer alternative so that naming conflicts dont happen

    
    return 0;
}