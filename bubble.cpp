//
// Created by wo on 2/28/18.
//
#include <vector>
using namespace std;
#include "bubble.h"
void Bubble::bubble(std::vector<int>& shuzu)
{

    for(bool sorted = false;sorted = !sorted;)
    {
        for(std::vector<int>::iterator it = shuzu.begin();it!=shuzu.end();it++)
        {
            if(*it < *(it+1))
            {
                int temp = *it;
                *(it) = *(it+1);
                *(it+1) = temp;
                sorted =false;
            }
        }

    }
}