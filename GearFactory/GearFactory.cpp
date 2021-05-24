#include "GearFactory.h"

/* Base on the requsting problem the fisrt gear redius is twice of the last
   if we begin from first to last we achieve an equation that has only a solution
   that gives us a formula base on this formula this function defined. */
   
std::vector<int> GearFactory::run(std::vector<int> pegs) {
    std::vector<int> output;
    int n{int(pegs.size())};
    int r_numerator{pegs[n - 1] + int(std::pow(-1, n - 1)) * pegs[0]};
    int r_denominator{1 + 2 * int(std::pow(-1, n))};
    int a{}, b{}, s{1};
    for (int i{n - 2}; i > 0; i--)
    {
        r_numerator += 2 * std::pow(-1, s) * pegs[i];
        s++;
    }
    if (r_numerator / r_denominator < 1){ // no solution state
        a = -1;
        b = -1;
    }
    else {
        if (r_denominator == -1){
            a = 2 * (-1) * r_numerator;
            b = 1;
        }
        else {
            if (r_numerator % 3 == 0){ // numerator divides denominator 
                a = 2 * int(r_numerator / 3);
                b = 1;
            }
            else {  // numerator does not divide denominator ( this state probably does not accur )
                a = r_numerator;
                b = 3;
            }
        }
    }
    output.push_back(a);
    output.push_back(b);
    return output;
}
