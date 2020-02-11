#include "UtilityFunctions.h"
#include <vector>
#include <iostream>

std::vector<bool> oddMask(std::vector<int> v){
    std::vector<bool> ret;
    for(int i:v){
        ret.push_back(i%2 == 1);
    }
    return ret;
}