#include <iostream>
//Luhn Method
int getDigit(const int number);
int sumOddDigits(const std::string cardNumber);
int sumEvenDigits(const std::string cardNumber);
int main()
{
    std::string cardNumber;
    int result = 0;

    std::cout << "Enter a credit card #: ";
    std::cin >> cardNumber;

    result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);

    if(result % 10 == 0){
        std::cout << cardNumber << " is valid";
    }
    else{
        std::cout << cardNumber << " is not valid";
    }

	return 0;
}
int getDigit(const int number){
//18 passed    8       +      1
    return number % 10 + (number / 10 % 10); //If The Double of number is two digits, its gettng broken down and added 
}
int sumOddDigits(const std::string cardNumber){

    int sum = 0;

    for(int i = cardNumber.size() - 1; i >= 0; i-=2){
        sum += cardNumber[i] - '0';
    }

    return sum;
}
int sumEvenDigits(const std::string cardNumber){

    int sum = 0;

    for(int i = cardNumber.size() - 2; i >= 0; i-=2){
        sum += getDigit((cardNumber[i] - '0') * 2);
    }

    return sum;
}