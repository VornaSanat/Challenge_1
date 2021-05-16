#include "LuckyTriple.h"

int LuckyTriple::run(std::vector<int> list) {
    /**
     * Complete this function
     */

    int result = 0;
    int size = list.size();
    if (size < 3)
        return result;
    for (int i = size - 1; i >= 2; --i)
        for (int j = i - 1; j >= 1; --j)
            if (list[i] % list[j] == 0)
                for (int k = j - 1; k >= 0; --k)
                    if (list[j] % list[k] == 0)
                        result++;
    return result;
}
