#include<iostream>

int main(){

    std::string questions [] = {"1. What year was c++ created? ","2. Who created c++ ? :","3. What is the predesecor ofc++? : ", "4. Is the Earth flat"};
    std::string options [][4] = {{"A. 1975 B. 1977 C. 1985 D.1999"},
                                {"A. Gudio van Rossum B. Bjarne Stroustrup C. John Capr D. Sabrina Carpenter"},
                                {"A. C B. C+ C. C-- D. B++"},
                                {"A. Yes B. No C. Sometimes D. What's earth"}
                            };
    int size = sizeof(questions)/sizeof(questions[0]);
    char ansKey[] = {'C','B','A','B'};
    char guess; int score = 0;
    for(int i = 0; i<size; i++){
        std::cout << "******************************\n";
        std::cout << questions[i];
        std::cout << "\n******************************\n";
        for(int j =0; j<sizeof(options[0])/sizeof(options[0][0]); j++){
            std::cout << options[i][j];            
        }
        std::cout << "\nEnter your choice : \n";
        std::cin >> guess;
        guess = toupper(guess);
            if(guess == ansKey[i]){
                std::cout << "CORRECT\n";
                score++;
            }
            else{
                std::cout << "WRONG\n";
            }
    }
    std::cout << "******************************\n";
    std::cout << "result : \n";
    std::cout << "******************************\n";
    std::cout << "no. of questions : " << size << '\n';
    std::cout << "no. of correct ans : " << score << '\n';
    std::cout << "percentage : " << (score/(double)size)*100 << "%\n" ;

    
    return 0;
}