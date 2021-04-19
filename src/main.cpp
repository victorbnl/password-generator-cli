#include <iostream>
#include <string>
#include <array>
#include <time.h>

#include "password.h"
#include "exceptions.h"

int main() {
    std::cout << std::endl;

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

    std::cout << std::endl;

    std::string password;
    try {
        password = generatePassword(length, lettersEnabled, numbersEnabled, specialsEnabled);
    } catch(const NoTypesError& e) {
        std::cout << "So basically you want a password with no characters O.o" << std::endl;
        std::cout << std::endl;
        return 1;
    } catch(const ZeroLengthPassword& e) {
        std::cout << "On what kind of sites would you use a zero-length password 🤔" << std::endl;
        std::cout << std::endl;
        return 1;
    }
    std::cout << "Your new password is: " << password << std::endl;
    std::cout << std::endl;

    return 0;
}
