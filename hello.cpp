#include <iostream>
#include <string>
#include "functions.h"

int main()
{
    std::string name;
    int guess;
    int answer = 8;
    int nameLength;
    char letter;
    bool correctAnswer = false;

    name = askName();
    letter = askLetter();

    nameLength = name.length();

    std::cout << "Hello " + name + " , your name is " + std::to_string(nameLength) +
       " letters long. " + containsLetter(name, letter) + ". Let's play a game." << std::endl;

    guess = prompt();

    while(!correctAnswer)
    {
        if(guess > answer)
        {
           std::cout << "You guessed too high" << std::endl;
           guess = prompt();
        }else if(guess < answer)
        {
           std::cout << "You guessed too low" << std::endl;
           guess = prompt();
        }else
        {
            std::cout << "Hurray " + name + "! You got it" << std::endl;
            correctAnswer = true;
        }
    }
    return 0;
}

