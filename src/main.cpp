#include <iostream>
#include <string>
#include <array>
#include <time.h>

#include "../lib/password.h"

int main() {
    int length;
    std::cout << "How long do you want your password to be? : ";
    std::cin >> length;

    std::string input;

    bool lettersEnabled;
    do {
        std::cout << "Do you want letters? [Y/n] : ";
        std::cin >> input;
    } while (input != "y" && input != "n");

    if (input == "y") {
        lettersEnabled = true;
    } else if (input == "n") {
        lettersEnabled = false;
    }

    bool numbersEnabled;
    do {
        std::cout << "Do you want numbers? [Y/n] : ";
        std::cin >> input;
    } while (input != "y" && input != "n");

    if (input == "y") {
        numbersEnabled = true;
    } else if (input == "n") {
        numbersEnabled = false;
    }

    bool specialsEnabled;
    do {
        std::cout << "Do you want special characters? [Y/n] : ";
        std::cin >> input;
    } while (input != "y" && input != "n");

    if (input == "y") {
        specialsEnabled = true;
    } else if (input == "n") {
        specialsEnabled = false;
    }

    std::string password = generatePassword(length, lettersEnabled, numbersEnabled, specialsEnabled);
    std::cout << "Your new password is: " << password << std::endl;

    return 0;
}
