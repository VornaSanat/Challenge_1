#include <iostream>
#include <algorithm>
#include <vector> 
#include "LegendaryValue.h"

using namespace std;

int main() {
    LegendaryValue legendaryValue;
   vector<int> outputs = legendaryValue.run({ 1, 3, 4, 2, 9, 5, 9 } , 10);
   for (int i : outputs)
   {
       cout << i << " " ;
   }
   

};
