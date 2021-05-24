#include <iostream>
#include "LuckyTriple.h"

using namespace std;

void printResults(std::vector<int> input) {
    LuckyTriple luckyTriple;
    auto output = luckyTriple.run(move(input));
    cout << "output is : " << output << "\n";
}

int main() {
    printResults({1, 1, 1});
    printResults({1, 2, 3, 4, 5, 6});
    return 0;
}
