#include <iostream>
void calculator(){
    char o;
    double a;
    double b; 
    double c;

    std::cout << "Enter The Operation To Perform (+,-,*,/): ";
    std::cin >> o;
    std::cout <<  "Enter Num 1: ";
    std::cin >> a;
    std::cout << "Enter Num 2: ";
    std::cin >> b;

    switch(o){
        case '+':
            c=a+b;
            std::cout << "Result: " << c << '\n';
            break;
        case '-':
            c=a-b;
            std::cout << "Result: " << c << '\n';
            break;
        case '*':
            c=a*b;
            std::cout << "Result: " << c << '\n';
            break;
        case '/':
            c=a/b;
            std::cout << "Result: " << c << '\n';

            break;
        default:
            std::cout << " Enter A Valid Operation Form (+,-,*,/)" << '\n';
            break;
    }
}
int main(){
    calculator();
}





