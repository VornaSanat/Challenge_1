#include "LuckyTriple.h"

int LuckyTriple::run(std::vector<int> list) {
    /**
     * Complete this function
     */
    //NOTE: using Dynamic Programming
    int result = 0;
    int size = list.size();
    if (size < 3)
        return result;
    std::vector<int> devisableCount(size, 0);
    for (int i = 0; i < size; ++i)
        for (int j = 0; j < i; ++j)
            if (list[i] % list[j] == 0) {
                devisableCount[i]++;
                result += devisableCount[j];
            }
    return result;
}
