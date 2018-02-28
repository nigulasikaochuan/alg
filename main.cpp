//
// Created by wo on 2/28/18.



#include "./sort_alg/bubble/bubble.h"
#include <iostream>

using namespace std;


int main()
{
    Bubble b1;
    vector<int> a{1,2,6,5,4,3,7,8,9};
    b1.bubble(a);
    for(vector<int>::iterator ele = a.begin();ele!=a.end();ele++)
    {
        cout<<*ele;
    }

}