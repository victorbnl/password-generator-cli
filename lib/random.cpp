#include <array>
#include <vector>

#include "random.h"

int randomChoiceVectorInt(std::vector<int> choices) {
    return choices[rand() % choices.size()];
}
