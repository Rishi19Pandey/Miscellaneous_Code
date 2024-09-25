//          returnNonRepeateNumber.cpp

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> returnNonRepeateElement(vector<int> &vec){
    vector<int> res;
    map<int , int> mpp;
    for(int i = 0 ; i < vec.size() ; i++){
        if(mpp.find(vec[i]) == mpp.end()){
            mpp[vec[i]]++;
        }
        else{
            mpp[vec[i]]++;
        }
    }

    for(auto it : mpp){
        if(it.second == 1){
            res.push_back(it.first);
        }
    }

    return res;
}

int main(){
   vector<int> ans , vec = {1,2,3,4,3,2,1,5 ,6 , 5 ,10};
   ans = returnNonRepeateElement(vec);
   for(auto it : ans){
    cout<<it<<"  ";
   }
   return 0;
}