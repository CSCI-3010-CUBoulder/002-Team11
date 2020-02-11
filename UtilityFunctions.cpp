#include <iostream>
#include <vector>

std::vector<bool> EvenMask(std::vector<int> input)
{
    std::vector<bool> mask;
    for (int i = 0; i < input.size(); i++)
    {
        if (input.at(i) % 2 == 0)
        {
            mask.push_back(true);
        }
        else
        {
            mask.push_back(false);
        }
        
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