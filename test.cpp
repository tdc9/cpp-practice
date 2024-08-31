#include <iostream>
int main(){
    std::string atring = "1234567891234507";

    for(int i = atring.size() - 2; i >= 0; i-=2){
        std::cout << atring[i] - '0' << '\n';
    }
    std::cout << atring.size();
    return 0;
}