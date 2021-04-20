#include <iostream>
#include <string>
#include <array>
#include <time.h>

#include "password.h"
#include "exceptions.h"

int main(int argc, char* argv[]) {
    int length = 8;
    bool letters = true;
    bool numbers = true;
    bool specials = true;
    for (int i = 0; i < argc; i++) {
        std::string arg = std::string(argv[i]);
        std::cout << arg << std::endl;
        if (arg == "--help") {
            std::cout
                << std::endl
                << "Usage: passgen [arguments]" << std::endl
                << std::endl
                << "    --help" << std::endl
                << "        Displays this menu and exit" << std::endl
                << std::endl
                << "    --no-letters" << std::endl
                << "        Disables letters" << std::endl
                << std::endl
                << "    --no-numbers" << std::endl
                << "        Disables numbers" << std::endl
                << std::endl
                << "    --no-specials" << std::endl
                << "        Disables special characters" << std::endl
                << std::endl;
            return 0;
        } else if (arg == "--no-letters") {
            letters = false;
        } else if (arg == "--no-numbers") {
            numbers = false;
        } else if (arg == "--no-specials") {
            specials = false;
        }
    }

    std::string password = generatePassword(length, letters, numbers, specials);

    std::cout << "Your new password is : " << password << std::endl;

    return 0;
}
