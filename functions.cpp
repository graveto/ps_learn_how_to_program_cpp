#include <iostream>
#include <string>

int prompt(){
    int g;
    std::cout << "Guess a number: " << std::endl;
    std::cin >> g;
    return g;
}

std::string askName(){
    std::string name;
    std::cout << "Welcome, what is your name?" << std::endl;
    std::cin >> name;
    return name;
}

std::string containsLetter(std::string name, std::string letter){
    std::string ans;
    std::size_t found = name.find(letter);
    if(found != std::string::npos){
        ans = "It contains " + letter;
    }else{
        ans = "It does not contain " + letter;
    }
    return ans;
}

std::string askLetter(){
    std::string letter;
    std::cout << "Give me a letter: " << std::endl;
    std::cin >> letter;
    return letter;
}
