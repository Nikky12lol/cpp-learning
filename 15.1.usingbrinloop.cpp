#include <iostream>
//using break and continue in loops 
//break stops running the code where it is used 
//continue will skip the current iteration and then will continue the rest normally

int main(){
    for (int i = 1; i <=20 ; i++)
    {
          //using break
        if (i==18){
            break;
        }
          //using continue
        if (i == 13) {
            continue;
        }

        
        
        std::cout << i << '\n';

      
    }
    return 0;
}