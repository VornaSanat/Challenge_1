#include "LegendaryValue.h"

std::vector<int> LegendaryValue::run(std::vector<int> list, int legendaryValue) {
    /**
     * Complete this function
     */

    std::vector<int> ret;
    int size = list.size();
    for (int i = 0; i < size - 1; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if ((list[i] + list[j]) == legendaryValue) {
                ret.push_back(list[i]);
                ret.push_back(list[j]);
            }
        }
    }
    return ret;
}
