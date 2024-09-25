//              countEachElementOfArray.cpp

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vec = {1,2,3,1,2,1,2,3};
    map<int,int> mp;
    for(int i = 0 ; i < vec.size() ; i++){
        mp[vec[i]]++;
    }
    for(auto it : mp){
        cout<<it.first<<" => "<<it.second<<endl;
    }
    return 0;
}