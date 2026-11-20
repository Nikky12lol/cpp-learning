#include<iostream>

int getDigit(const int number);
int sumOfEvenNumber(const std::string creditCardNumber);
int sumOfOddNumber(const std::string creditCardNumber);
int main(){
    int result = 0;
    std::string creditCardNumber;
    std::cout << "Enter the credit card number :";
    std::cin >> creditCardNumber;
    
    result = sumOfEvenNumber(creditCardNumber) + sumOfOddNumber(creditCardNumber);
    if(result%10 == 0)
        std::cout << "The credit card number is valid";
    else
        std::cout << "The credit card number is NOT valid";

    return 0;
}
int getDigit(const int number){
    return number%10+(number/10 %10);
}
int sumOfEvenNumber(const std::string creditCardNumber){
    int sum = 0;
    for(int i = creditCardNumber.size() - 2; i>=0; i-=2){
        sum+=getDigit((creditCardNumber[i]-'0')*2);
    }
    return sum;
}
int sumOfOddNumber(const std::string creditCardNumber){
    int sum = 0;
    for(int i = creditCardNumber.size() - 1; i>=0; i-=2){
        sum+=getDigit(creditCardNumber[i]-'0');
    }
    return sum;
}
