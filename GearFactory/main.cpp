#include <iostream>
#include "GearFactory.h"

using namespace std;

void printResults(std::vector<int> input) {
    GearFactory gearFactory;
    vector<int> outputs = gearFactory.run(move(input));
    cout << "outputs are: ";
    for (int i : outputs) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    printResults({4, 17, 50});
   printResults({4, 30, 50});
    return 0;
   

}
