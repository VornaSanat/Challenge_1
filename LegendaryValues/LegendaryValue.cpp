#include "LegendaryValue.h"

std::vector<int> LegendaryValue::run(std::vector<int> list, int legendaryValue) {
    int n{int(list.size())};
    std::vector<int> output;
    for (int i{}; i < n; i++){
        for (int j{}; j < n; j++){
            // first to deny repeatition, second to find solutions
            if (i != j && list[i] + list[j] == legendaryValue){
                output.push_back(list[i]);
                output.push_back(list[j]);
            }
        }
    }
    n = output.size();
    // we have similar solutions so we delete the half
    if (n > 0){
        for (int i{}; i < n / 2; i++){
            output.pop_back();
        }
    }
    return output;
}
