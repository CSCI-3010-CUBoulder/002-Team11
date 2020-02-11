#include "UtilityFunctions.h"
#include <vector>
#include <iostream>

int main(){
    std::vector<int> v{1,2,3,4};
    std::vector<bool> ret = oddMask(v);
    for(bool b:ret){
        std::cout << b << " ";
    }
    return 0;
}