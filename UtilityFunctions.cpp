#include <iostream>
#include <vector>

std::vector<bool> EvenMask(std::vector<int> input)
{
    std::vector<bool> mask;
    for (int i = 0; i < input.size(); i++)
    {
        mask.push_back(mask.at(i) % 2);
    }
    return mask;
}

std::vector<bool> oddMask(std::vector<int> v){
    std::vector<bool> ret;
    for(int i:v){
        ret.push_back(i%2 == 1);
    }
    return ret;
}