#include "GearFactory.h"

#include <limits>
#include <math.h>

typedef std::vector<int> intVector;

std::vector<int> GearFactory::run(std::vector<int> pegs) {
    /**
     * Please complete this function.
     */
    int pegSize = pegs.size();
    if (pegSize < 2)
        return intVector{-1, -1};

    int lastGear = 0;
    int sign = -1;
    float radiiEvenMax = std::numeric_limits<float>::lowest();
    float radiiOddMin = std::numeric_limits<float>::max();
    for (int i = 0; i < pegSize - 1; ++i) {
        lastGear -= sign * (pegs[i + 1] - pegs[i]);
        sign *=-1;
        if (!(i & 1))
            radiiOddMin = std::min<float>(radiiOddMin, lastGear);
        else
            radiiEvenMax = std::max<float>(radiiEvenMax, lastGear);
    }

    int numerator = 2 * lastGear;
    int denominator = abs(1 + 2 * sign);
    if (numerator < denominator * (radiiEvenMax + 1) || numerator > denominator * (radiiOddMin - 1)) //Check for validity
        return intVector{-1, -1};
    if (sign == 1 && numerator % 3 == 0) {
        numerator /= 3;
        numerator = abs(numerator);
        denominator = 1;
    }
    return intVector{numerator, denominator};
}
