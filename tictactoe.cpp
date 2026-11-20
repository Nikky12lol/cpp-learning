#include<iostream>
#include<ctime>

void drawBoard(char *spaces);
void playerMove(char *spaces, char player);
void computerMove(char *spaces, char computer);
bool checkWinner(char *spaces,char player);
bool checkTie(char *spaces);

int main(){

    char spaces[9] = {' ',' ',' ',' ',' ',' ',' ',' ',' '};
    char player = 'X';
    char computer = 'O';
    bool running = true;
    drawBoard(spaces);
    while(running){
        playerMove(spaces,player);
        drawBoard(spaces);
        if(checkWinner(spaces,player)){                                     
                running = false;
                break;
            }
            else if(checkTie(spaces)){
                running = false;
                break;
            }
            
        computerMove(spaces,computer);
        drawBoard(spaces);
        if(checkWinner(spaces,player)){
                running = false;
                break;
            }
            else if(checkTie(spaces)){
                running = false;
                break;
            }
    }
    std::cout << "\nThanks for playing!";
    return 0;
}

void drawBoard(char *spaces){
    std::cout << '\n'; 
    std::cout << "     |" << "     |" << "     " << std::endl;
    std::cout << "  " << spaces[0] << "  " << "|" << "  " << spaces[1] << "  " << "|" << "  " << spaces[2] << "  " << std::endl;
    std::cout << "_____|" << "_____|" << "_____" << std::endl;
    
    std::cout << "     |" << "     |" << "     " << std::endl;
    std::cout << "  " << spaces[3] << "  " << "|" << "  " << spaces[4] << "  " << "|" << "  " << spaces[5] << "  " << std::endl;
    std::cout << "_____|" << "_____|" << "_____" << std::endl;
    
    std::cout << "     |" << "     |" << "     " << std::endl;
    std::cout << "  " << spaces[6] << "  " << "|" << "  " << spaces[7] << "  " << "|" << "  " << spaces[8] << "  " << std::endl;
    std::cout << "     |" << "     |" << "     " << std::endl;
}
void playerMove(char *spaces, char player){
    int number;
    std::cout << "WHERE DO YOU WANT TO PLACE THE X (1-9) in the grid : ";
    std::cin >> number;
    number--;
    if(spaces[number] == ' '){
        spaces[number] = player;
    }
}
void computerMove(char *spaces, char computer){
    int number;
    srand(time(NULL));
    while(true){
        number = rand()%9;
        if(spaces[number]==' '){
            spaces[number] = computer;
            break;
        }
    }
}
bool checkWinner(char *spaces,char player){
    if(spaces[0]!=' ' && spaces[0]==spaces[1] && spaces[1]==spaces[2]){
        spaces[0] == player ? std::cout << "YOU WIN!" : std::cout << "YOU LOSE!";
    }
    else if(spaces[3]!=' ' && spaces[3]==spaces[4] && spaces[4]==spaces[5]){
        spaces[3] == player ? std::cout << "YOU WIN!" : std::cout << "YOU LOSE!";
    }
    else if(spaces[6]!=' ' && spaces[6]==spaces[7] && spaces[7]==spaces[8]){
        spaces[6] == player ? std::cout << "YOU WIN!" : std::cout << "YOU LOSE!";
    }
    else if(spaces[0]!=' ' && spaces[0]==spaces[3] && spaces[0]==spaces[6]){
        spaces[0] == player ? std::cout << "YOU WIN!" : std::cout << "YOU LOSE!";
    }
    else if(spaces[1]!=' ' && spaces[1]==spaces[4] && spaces[1]==spaces[7]){
        spaces[1] == player ? std::cout << "YOU WIN!" : std::cout << "YOU LOSE!";
    }
    else if(spaces[2]!=' ' && spaces[2]==spaces[5] && spaces[2]==spaces[8]){
        spaces[2] == player ? std::cout << "YOU WIN!" : std::cout << "YOU LOSE!";
    }
    else if(spaces[0]!=' ' && spaces[0]==spaces[4] && spaces[0]==spaces[8]){
        spaces[0] == player ? std::cout << "YOU WIN!" : std::cout << "YOU LOSE!";
    }
    else if(spaces[2]!=' ' && spaces[2]==spaces[4] && spaces[2]==spaces[6]){
        spaces[2] == player ? std::cout << "YOU WIN!" : std::cout << "YOU LOSE!";
    }
    else{
        return false;
    }
    return true;
}
bool checkTie(char *spaces){
    for(int i = 0; i<9; i++){
        if(spaces[i]==' '){
            return false;
        }
    }
    std::cout << "IT'S A TIE!\n";
    return true;
}