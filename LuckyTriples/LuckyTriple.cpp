#include "LuckyTriple.h"
#include <iostream>
#include<iostream>

using namespace std;


int LuckyTriple::run(std::vector<int> list) {
   
    int lengthOfList = list.size();

    vector< int > row ;
    for (int i = 0; i < lengthOfList; i++) {
        row.push_back(0);
    }
    int triple_count = 0;
    for (int i = 0; i < lengthOfList; i++) {
       for (int j = 0; j < i; j++) {
           if (list[j] != 0)
           {
               if (list[i] % list[j] == 0) {
                   row[i] += 1;
                   triple_count += row[j];
               }
           }
       }
        
    }
    return triple_count;
}
