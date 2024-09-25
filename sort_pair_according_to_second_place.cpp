//          sort_pair_according_to_second_place.cpp

#include <bits/stdc++.h>
using namespace std;

int main()
{
   vector<pair<int,int>> vec;
    vec.push_back({2,8});
    vec.push_back({12,5});
    vec.push_back({7,13});
    vec.push_back({3,2});
    
    sort(vec.begin(), vec.end(), [](auto &left, auto &right) {
    return left.second > right.second;
    });
    
    for(auto i : vec){
        cout<<i.first<<" "<<i.second<<endl;
    }
    
    return 0;
}
