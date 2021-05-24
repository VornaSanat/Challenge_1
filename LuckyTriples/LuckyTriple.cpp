#include "LuckyTriple.h"

int LuckyTriple::run(std::vector<int> list) {
    int n{int(list.size())};
    int counter{};
    // we grab first
    for (int i{}; i < n; i++){
        // we grab second
        for (int j{}; j < n; j++){
            // checking out the second divides the first and deny the descending and equal solutions
            if (j > i && list[j] % list[i] == 0){
                // we grab the last
                for (int k{}; k < n; k++){
                    // checking out the last divides the second and deny the descending and equal solutions
                    if (k > j && list[k] % list[j] == 0){
                        // counting solutions
                        counter++;
                    }
                }
            }
        }
    }
    return counter;
}
