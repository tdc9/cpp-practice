#include <iostream>
int main() {
    std::string name;
    std::cout << "Whats You Name Hooman? :";
    std::getline(std::cin >> std::ws, name);
    std::cout << "Good Hooman " << name <<'\n';

    
    return 0;



}