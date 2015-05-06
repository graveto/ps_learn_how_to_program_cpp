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

std::string containsLetter(std::string name, char letter){
    std::string ans;
    if(name.find(letter)){
        ans = "It contains " + std::to_string(letter);
    }else{
        ans = "It does not contain " + std::to_string(letter);
    }
    return ans;
}

char askLetter(){
    char letter;
    std::cout << "Give me a letter: " << std::endl;
    std::cin >> letter;
    return letter;
}
