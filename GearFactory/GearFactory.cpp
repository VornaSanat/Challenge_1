#include "GearFactory.h"
#include <iostream>
#include <cmath>
using namespace std;

std::vector<int> GearFactory::run(std::vector<int> pegs) {
	vector<int> FirstGearRadius;
	vector<int> invalid = { -1 ,-1 };
	int sum = 0;

	int sizeOfPegsArray = pegs.size();

if (sizeOfPegsArray <= 1) {
	return invalid;
}
if (sizeOfPegsArray % 2 == 0) 
	sum = -pegs[0] + pegs[sizeOfPegsArray - 1];
			
else
	sum = -pegs[0] - pegs[sizeOfPegsArray - 1];
for (int i = 1; i < sizeOfPegsArray -1 ; i++) {
	sum += 2 * pow(-1, i+1) * pegs[i];
	};
if (sum <= 0) {
	return invalid;
}
if (sizeOfPegsArray % 2 == 0)
FirstGearRadius = { 2 * sum , 3 };
else
FirstGearRadius = { 2 * sum , 1 };


    return vector<int>(FirstGearRadius);
}
