// Learning C++ 
// Challenge 01_03
// Console Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    std::string str;
    std::cout <<"Enter user name:" <<std::flush;
    std::cin >> str;
    std::cout <<"Thank you for your input " << str << " :)" << std::endl;

    std::cout << str;

    std::cout << std::endl << std::endl;
    return (0);
}
