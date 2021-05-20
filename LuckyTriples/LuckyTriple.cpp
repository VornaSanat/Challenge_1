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
    for (int i = size - 1; i >= 1; --i)
        for (int j = i - 1; j >= 0; --j)
            if (list[i] % list[j] == 0) {
                devisableCount[j]++;
                result += devisableCount[i];
            }
    return result;
}
