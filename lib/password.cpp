#include <string>
#include <array>
#include <vector>
#include <time.h>

#include "random.h"

#define TYPE_LETTERS 0
#define TYPE_NUMBERS 1
#define TYPE_SPECIAL_CHARS 2

std::string generatePassword(int length, bool lettersEnabled, bool numbersEnabled, bool specialsEnabled) {
    std::srand((unsigned int)time(NULL));

    std::array<char, 26> letters = { 'a', 'z', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p', 'q', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'w', 'x', 'c', 'v', 'b', 'n' };
    std::array<char, 10> numbers = { '1', '2', '3', '4', '5', '6', '7', '8', '9', '0' };
    std::array<char, 24> specials = { '[', ']', '(', ')', '{', '}', '.', '?', '!', ',', ':', ';', '/', '\\', '|', '-', '~', '#', '&', '=', '^', '$', '%', '*' };

    std::vector<int> enabledTypes = {};

    if (lettersEnabled) {
        enabledTypes.push_back(TYPE_LETTERS);
    }

    if (numbersEnabled) {
        enabledTypes.push_back(TYPE_NUMBERS);
    }

    if (specialsEnabled) {
        enabledTypes.push_back(TYPE_SPECIAL_CHARS);
    }

    std::string result = "";
    for (int i = 0; i < length; i++) {
        int type = randomChoiceVectorInt(enabledTypes);
        char symbol;
        if (type == TYPE_LETTERS) {
            symbol = randomChoice<char, 26>(letters);
        } else if (type == TYPE_NUMBERS) {
            symbol = randomChoice<char, 10>(numbers);
        } else if (type == TYPE_SPECIAL_CHARS) {
            symbol = randomChoice<char, 24>(specials);
        }
        result.push_back(symbol);
    }
    return result;
}
