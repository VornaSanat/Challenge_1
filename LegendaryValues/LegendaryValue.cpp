#include "LegendaryValue.h"
#include <iostream>
#include <algorithm>


using namespace std;

int binarySearch(std::vector<int> arr, int start, int end, int num) {
    if (start <= end) {
        int m = (start + end) / 2;
        if (arr[m] == num)
            return num;
        if (arr[m] > num)
            return binarySearch(arr, start, m - 1, num);
        if (arr[m] < num)
            return binarySearch(arr, m + 1, end, num);
    }
    return 0;
}


std::vector<int> LegendaryValue::run(std::vector<int> list, int legendaryValue) {
    
    vector<int> pairs;
    int size = list.size();
    sort(list.begin(), list.end());
    for(int i= 0 ; i< size ; i++)
    {
        int searchResult;
        searchResult = binarySearch(list, 0, size, legendaryValue - list[i]);
        if(searchResult)
                {
            pairs.push_back(searchResult);}
   }
    return vector<int>(pairs);
}


