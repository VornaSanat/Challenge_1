#include "GearFactory.h"

typedef std::vector<int> intVector;

std::vector<int> GearFactory::run(std::vector<int> pegs) {
    /**
     * Please complete this function.
     */
    int pegSize = pegs.size();
    if (pegSize < 2)
        return intVector{-1, -1};
    int a = pegs[0];
    int sign = -1;
    for (auto peg: pegs) {
        a += 2 * peg * sign;
        sign *= -1;
    }
    a += pegs[pegSize - 1] * sign;
    a *= 2;
    int b = (pegSize % 2 == 0) ? 3 : 1;

    if (a % b == 0) {
        a /= b;
        b = 1;
    }

    float calculatedR = ((float)a) / ((float)b);

    for (int i = 0; i < pegSize - 2; i++) {
        int width = pegs[i + 1] - pegs[i];
        if(calculatedR < 0 || calculatedR > (width - 1))
            return intVector{-1, -1};
        calculatedR = width - calculatedR;
    }

    return intVector{a, b};
}
