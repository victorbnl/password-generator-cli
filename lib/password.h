#include <array>
#include <string>

template<class T, int n>
char randomChoice(std::array<T, n> choices);

std::string generatePassword(int length, bool lettersEnabled, bool numbersEnabled, bool specialsEnabled);
