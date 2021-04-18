#include <array>
#include <vector>

template<class T, int n>
T randomChoice(std::array<T, n> choices) {
    return choices[rand() % sizeof(choices)];
}

int randomChoiceVectorInt(std::vector<int> choices);
