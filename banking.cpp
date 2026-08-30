#include<iostream>
#include<iomanip>       //this header file is used to set the presision of the double
                        //used with the std::setpercision(decimals) and then followed by std::fixed 
void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main (){
       int choice = 0;
    double balance = 0;
    do
    {
     
    std::cout << "*************************\n";
    std::cout << "  ENTER YOUR CHOICE : \n";;
    std::cout << "*************************\n";
    std::cout << "1. Show balance \n" ;
    std::cout << "2. Deposit \n";
    std::cout << "3. Withdraw \n";
    std::cout << "4. Exit \n";
    

    std::cin >> choice;
    std::cin.clear();
    fflush(stdin);

    

    switch (choice){
    
    case 1: showBalance(balance);
    break;
    case 2: balance += deposit();
    break;
    case 3: balance -= withdraw(balance);       
    break;
    case 4: std::cout << "Thanks for visiting!";
    break;
    default : std::cout << "please enter a valid option (1-4)" ;
    break;
    }
    }while (choice !=4);
}
void showBalance(double balance){
    std::cout << "Your balance is : $" << std::setprecision(2) << std::fixed << balance << '\n';
}
double deposit(){
    double ammount = 0;
    std::cout << "enter ammount to be deposited: " ;
    std::cin >> ammount;
    if (ammount < 0){
        std::cout << "enter a positive ammount";
        return 0;
    }
    else {
        return ammount;
    }

}
double withdraw(double balance){
    double withdrawal;
    std::cout << "enter ammount to be withdrawn:";
    std::cin >> withdrawal;
    if (withdrawal > balance){
        std::cout << "insufficent funds";
        return 0;
    }
    else if (withdrawal < 0 ){
        std::cout << "enter a positive ammount";
        return 0;
    }
    else{
    return withdrawal;
    }
}

    

    